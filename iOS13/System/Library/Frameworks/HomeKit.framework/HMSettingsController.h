/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMSettingManager.h>
#import <libobjc.A.dylib/HMSettingsOwner.h>

@protocol HMSettingsDelegate;
@class HMSettingGroup, HMSettings, HMSettingsMessageHandler, NSDictionary, NSMapTable, _HMContext, NSUUID, NSString;

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner> {

	HMSettings* _settings;
	id<HMSettingsDelegate> _delegate;
	HMSettingGroup* _rootGroup;
	HMSettingsMessageHandler* _messageHandler;
	NSDictionary* _encodedSettings;
	NSMapTable* _groupsMap;
	NSMapTable* _settingsMap;
	_HMContext* _context;
	NSUUID* _parentIdentifier;
	NSString* _codingKey;

}

@property (retain) HMSettingsMessageHandler * messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
@property (retain) HMSettingGroup * rootGroup;                             //@synthesize rootGroup=_rootGroup - In the implementation block
@property (retain) NSDictionary * encodedSettings;                         //@synthesize encodedSettings=_encodedSettings - In the implementation block
@property (retain) NSMapTable * groupsMap;                                 //@synthesize groupsMap=_groupsMap - In the implementation block
@property (retain) NSMapTable * settingsMap;                               //@synthesize settingsMap=_settingsMap - In the implementation block
@property (retain) _HMContext * context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) NSUUID * parentIdentifier;                            //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) NSString * codingKey;                                 //@synthesize codingKey=_codingKey - In the implementation block
@property (readonly) HMSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (__weak) id<HMSettingsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMSettingsDelegate>)arg1 ;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(HMSettings *)settings;
-(void)setMessageHandler:(HMSettingsMessageHandler *)arg1 ;
-(HMSettingsMessageHandler *)messageHandler;
-(id)logIdentifier;
-(HMSettingGroup *)rootGroup;
-(void)setRootGroup:(HMSettingGroup *)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)mergeWith:(id)arg1 ;
-(id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2 messageHandler:(id)arg3 settingsCreator:(id)arg4 ;
-(NSMapTable *)settingsMap;
-(NSMapTable *)groupsMap;
-(void)_updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)settingsDidChangeWithRootGroup:(id)arg1 addedGroups:(id)arg2 addedSettings:(id)arg3 changedSettings:(id)arg4 ;
-(NSString *)codingKey;
-(void)__notifyDelegateSettingsDidUpdate;
-(void)__notifyDelegateSettingsWillUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateValueForSetting:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2 ;
-(id)settingForIdentifier:(id)arg1 ;
-(id)settingGroupForIdentifier:(id)arg1 ;
-(void)notifyDelegateOfUpdate;
-(void)decodeWithCoder:(id)arg1 ;
-(void)configureWithContext:(id)arg1 ;
-(NSDictionary *)encodedSettings;
-(void)setEncodedSettings:(NSDictionary *)arg1 ;
-(void)setGroupsMap:(NSMapTable *)arg1 ;
-(void)setSettingsMap:(NSMapTable *)arg1 ;
@end

