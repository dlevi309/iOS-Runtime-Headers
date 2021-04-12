/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMerging.h>

@protocol _HMAccesorySettingGroupDelegate;
@class HMFUnfairLock, NSMutableSet, NSUUID, NSString, _HMContext, HMAccessorySettings, NSArray;

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {

	HMFUnfairLock* _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	id<_HMAccesorySettingGroupDelegate> _delegate;
	NSUUID* _identifier;
	NSString* _name;
	_HMContext* _context;
	HMAccessorySettings* _accessorySettings;

}

@property (assign,nonatomic,__weak) HMAccessorySettings * accessorySettings;                  //@synthesize accessorySettings=_accessorySettings - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) id<_HMAccesorySettingGroupDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMAccesorySettingGroupDelegate>)delegate;
-(void)setDelegate:(id<_HMAccesorySettingGroupDelegate>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)identifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSArray *)settings;
-(NSArray *)groups;
-(id)shortDescription;
-(id)clientQueue;
-(id)logIdentifier;
-(BOOL)mergeObject:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(HMAccessorySettings *)accessorySettings;
-(void)notifyDelegateOfAddedSetting:(id)arg1 ;
-(void)notifyDelegateOfRemovedSetting:(id)arg1 ;
-(void)removeSetting:(id)arg1 ;
-(void)notifyDelegateOfAddedGroup:(id)arg1 ;
-(void)notifyDelegateOfRemovedGroup:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
-(BOOL)mergeSettings:(id)arg1 ;
-(BOOL)mergeGroups:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

