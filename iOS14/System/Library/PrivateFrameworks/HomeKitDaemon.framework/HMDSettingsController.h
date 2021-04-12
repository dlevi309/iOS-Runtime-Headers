/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDSettingsControllerProtocol.h>
#import <libobjc.A.dylib/HMDSettingsMessageController.h>
#import <libobjc.A.dylib/HMDSettingTransactionReceiverProtocol.h>

@protocol HMDSettingsMessageHandlerProtocol, HMDSettingsControllerDependency, HMDSettingsControllerDelegate;
@class NSArray, HMDSettingGroup, NSMapTable, NSString;

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol> {

	os_unfair_lock_s _lock;
	BOOL _isInitialized;
	id<HMDSettingsMessageHandlerProtocol> _messageHandler;
	id<HMDSettingsControllerDependency> _dependency;
	id<HMDSettingsControllerDelegate> _delegate;
	HMDSettingGroup* _rootGroup;
	NSMapTable* _groupsMap;
	NSMapTable* _settingsMap;

}

@property (readonly) id<HMDSettingsMessageHandlerProtocol> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
@property (readonly) id<HMDSettingsControllerDependency> dependency;                    //@synthesize dependency=_dependency - In the implementation block
@property (__weak,readonly) id<HMDSettingsControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMDSettingGroup * rootGroup;                                         //@synthesize rootGroup=_rootGroup - In the implementation block
@property (assign) BOOL isInitialized;                                                  //@synthesize isInitialized=_isInitialized - In the implementation block
@property (retain) NSMapTable * groupsMap;                                              //@synthesize groupsMap=_groupsMap - In the implementation block
@property (retain) NSMapTable * settingsMap;                                            //@synthesize settingsMap=_settingsMap - In the implementation block
@property (readonly) NSArray * allObjectIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
-(BOOL)isInitialized;
-(void)configure;
-(id<HMDSettingsControllerDelegate>)delegate;
-(id<HMDSettingsMessageHandlerProtocol>)messageHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(id<HMDSettingsControllerDependency>)dependency;
-(id)logIdentifier;
-(id)settingForKeyPath:(id)arg1 ;
-(HMDSettingGroup *)rootGroup;
-(NSMapTable *)groupsMap;
-(NSMapTable *)settingsMap;
-(void)setRootGroup:(HMDSettingGroup *)arg1 ;
-(id)settingForIdentifier:(id)arg1 ;
-(id)settingGroupForIdentifier:(id)arg1 ;
-(void)setGroupsMap:(NSMapTable *)arg1 ;
-(void)setSettingsMap:(NSMapTable *)arg1 ;
-(void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateWithEncodedValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)updateWithValue:(id)arg1 onSetting:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateRootGroup:(id)arg1 ;
-(void)handleAddedGroupModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAddedGroupModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAddedRootGroup:(id)arg1 ;
-(void)settingsHierarchyDidChange;
-(void)handleAddedSettingModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAddedSettingModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_flattenedSettingControllerRoot:(id)arg1 withCurrentPath:(id)arg2 andReturnDictionary:(id)arg3 ;
-(void)handleAddedConstraintModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAddedConstraintModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetupMessageHandlersWithAddedGroups:(id)arg1 removedGroups:(id)arg2 addedSettings:(id)arg3 removedSettings:(id)arg4 ;
-(id)keyPathsInModels:(id)arg1 ;
-(id)keyPathsInExistingSettings;
-(void)updateParentsInKeyPathToModel:(id)arg1 usingKeyPathToSetting:(id)arg2 ;
-(id)_keyPathsToModelInModelIDToModelLookup:(id)arg1 parentIDToModelIDsLookup:(id)arg2 currentID:(id)arg3 currentPath:(id)arg4 ;
-(id)_keyPathsFromGroup:(id)arg1 currentPath:(id)arg2 ;
-(id)modelsToMigrateSettings;
-(void)updateRootGroup:(id)arg1 ;
-(void)handleAddedGroupModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAddedSettingModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAddedConstraintModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)settingValuesByKeyPathWithPrefix:(id)arg1 ;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1 ;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1 ;
-(NSArray *)allObjectIdentifiers;
-(void)transactionSettingGroupModelRemoved:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionSettingModelRemoved:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDependency:(id)arg1 delegate:(id)arg2 ;
-(void)updateWithValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

