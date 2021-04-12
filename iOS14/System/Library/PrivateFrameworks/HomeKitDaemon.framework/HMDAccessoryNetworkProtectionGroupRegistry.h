/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSMutableDictionary, HMDHome, NSNotificationCenter, NSObject, NSSet, NSUUID, NSString;

@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject <HMFMessageReceiver, HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _groupRecords;
	HMDHome* _home;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                     //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSSet * activeGroups; 
@property (copy,readonly) NSSet * persistedGroups; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(NSNotificationCenter *)notificationCenter;
-(void)_registerForMessages;
-(id)logIdentifier;
-(HMDHome *)home;
-(void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2 ;
-(id)initWithHome:(id)arg1 notificationCenter:(id)arg2 ;
-(void)handleAddedAccessory:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistedGroups:(id)arg3 ;
-(NSSet *)persistedGroups;
-(NSSet *)activeGroups;
-(long long)targetProtectionModeForGroupWithUUID:(id)arg1 ;
-(id)groupRecordWithUUID:(id)arg1 ;
-(void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg1 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3 requestMessage:(id)arg4 ;
-(void)addActiveSurrogateGroupForAccessory:(id)arg1 shouldNotifyChange:(BOOL)arg2 ;
-(BOOL)_evaluateActiveStatusForGroupWithUUID:(id)arg1 ;
-(void)_setupProtectionGroupForAccessory:(id)arg1 shouldNotifyChange:(BOOL)arg2 ;
-(void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg1 ;
-(void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg1 ;
-(void)_registerForAccessoryChanges:(id)arg1 ;
-(BOOL)_updateGroupWithUUID:(id)arg1 active:(BOOL)arg2 ;
-(id)groupWithUUID:(id)arg1 ;
-(id)markGroupWithUUID:(id)arg1 active:(BOOL)arg2 ;
-(void)notifyClientsOfAddedGroup:(id)arg1 ;
-(void)notifyClientsOfRemovedGroup:(id)arg1 ;
-(BOOL)addActiveSurrogateGroup:(id)arg1 ;
-(void)_setupActiveGroupsForHome;
-(id)removeGroupWithUUID:(id)arg1 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3 ;
-(id)accessoriesForGroupWithUUID:(id)arg1 ;
@end

