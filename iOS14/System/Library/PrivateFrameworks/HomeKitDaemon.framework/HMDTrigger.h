/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSSet, HMDHome, HMDUser, HMDDevice, NSMutableDictionary, NSMutableArray, NSObject, HMFMessageDispatcher, NSDate, NSDictionary, NSArray;

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDDevicePreferenceDataSource, HMDBackingStoreObjectProtocol> {

	os_unfair_lock_s _lock;
	BOOL _active;
	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	HMDUser* _owner;
	HMDDevice* _owningDevice;
	NSMutableDictionary* _actionSetMappings;
	NSMutableArray* _actionSetUUIDs;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	unsigned long long _triggerType;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,readonly) NSDictionary * actionContext; 
@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSMutableDictionary * actionSetMappings;                          //@synthesize actionSetMappings=_actionSetMappings - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionSetUUIDs;                                  //@synthesize actionSetUUIDs=_actionSetUUIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (getter=isConfigured,nonatomic,readonly) BOOL configured; 
@property (assign,nonatomic) unsigned long long triggerType;                                   //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDate * mostRecentFireDate;                                        //@synthesize mostRecentFireDate=_mostRecentFireDate - In the implementation block
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMDUser * owner;                                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) HMDDevice * owningDevice;                                         //@synthesize owningDevice=_owningDevice - In the implementation block
@property (getter=isOwnedByThisDevice,nonatomic,readonly) BOOL ownedByThisDevice; 
@property (nonatomic,readonly) BOOL requiresDataVersion4; 
@property (copy,readonly) NSArray * actionSets; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeService:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setTriggerType:(unsigned long long)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isConfigured;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(HMDUser *)owner;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(NSDictionary *)actionContext;
-(NSString *)name;
-(void)removeAccessory:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(NSString *)description;
-(void)removeCharacteristic:(id)arg1 ;
-(NSString *)contextID;
-(NSArray *)actionSets;
-(void)setOwner:(HMDUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(unsigned long long)triggerType;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)dealloc;
-(NSDictionary *)bulletinContext;
-(HMDHome *)home;
-(NSDate *)mostRecentFireDate;
-(HMDDevice *)owningDevice;
-(void)_actionSetsUpdated:(id)arg1 message:(id)arg2 ;
-(BOOL)shouldActivateOnLocalDevice;
-(NSMutableDictionary *)actionSetMappings;
-(id)emptyModelObject;
-(void)_updateActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_checkForNoActions;
-(void)_forceEvaluate;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(void)removeActionSet:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)removeAllActionSets;
-(NSMutableArray *)actionSetUUIDs;
-(BOOL)hasNoActions;
-(void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2 ;
-(BOOL)modelContainsTriggerFired:(id)arg1 ;
-(id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(BOOL)arg3 ;
-(void)_renameRequest:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSetRequest:(id)arg1 ;
-(void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_handleAddActionSetRequest:(id)arg1 ;
-(void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(id)actionSetMapKeys;
-(void)setActionSetForKey:(id)arg1 value:(id)arg2 ;
-(void)confirmResident;
-(id)actionSetForKey:(id)arg1 ;
-(void)removeActionSetForKey:(id)arg1 ;
-(void)_activateTriggerRequest:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 message:(id)arg2 ;
-(void)_executeActionSets:(id)arg1 captureCurrentState:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 ;
-(void)_handleActivateTriggerRequest:(id)arg1 ;
-(void)setOwningDevice:(HMDDevice *)arg1 ;
-(void)_recentFireDateUpdated:(id)arg1 ;
-(void)setActionSetUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)shouldEncodeLastFireDate:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2 ;
-(NSSet *)messageReceiverChildren;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 ;
-(BOOL)requiresDataVersion4;
-(BOOL)compatible:(id)arg1 user:(id)arg2 ;
-(void)fixupForReplacementAccessory:(id)arg1 ;
-(void)reEvaluate:(unsigned long long)arg1 ;
-(void)triggerFired;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(BOOL)isOwnedByThisDevice;
-(void)activateAfterResidentChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)markChangedForMessage:(id)arg1 ;
-(void)_activate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_executeActionSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fillBaseObjectChangeModel:(id)arg1 ;
-(void)_handleTriggerUpdate:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)_addActionSet:(id)arg1 ;
-(void)setActionSetMappings:(NSMutableDictionary *)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
@end
