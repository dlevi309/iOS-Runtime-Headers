/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSSet, HMDHome, HMDUser, HMDDevice, NSMutableArray, NSMutableDictionary, NSObject, HMFMessageDispatcher, NSDate, NSDictionary, NSArray;

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDDevicePreferenceDataSource, HMDBackingStoreObjectProtocol> {

	BOOL _active;
	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	HMDUser* _owner;
	HMDDevice* _owningDevice;
	NSMutableArray* _actionSetUUIDs;
	NSMutableDictionary* _actionSetMappings;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	unsigned long long _triggerType;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,readonly) NSDictionary * actionContext; 
@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSMutableArray * actionSetUUIDs;                                  //@synthesize actionSetUUIDs=_actionSetUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionSetMappings;                          //@synthesize actionSetMappings=_actionSetMappings - In the implementation block
@property (nonatomic,readonly) NSArray * actionSets; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setOwner:(HMDUser *)arg1 ;
-(NSUUID *)uuid;
-(void)setActive:(BOOL)arg1 ;
-(HMDUser *)owner;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)contextID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)active;
-(void)timerFired:(id)arg1 ;
-(BOOL)isConfigured;
-(void)setHome:(HMDHome *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSArray *)actionSets;
-(void)removeService:(id)arg1 ;
-(id)dumpState;
-(unsigned long long)triggerType;
-(void)setTriggerType:(unsigned long long)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)removeAccessory:(id)arg1 ;
-(NSDictionary *)bulletinContext;
-(NSDictionary *)actionContext;
-(void)removeCharacteristic:(id)arg1 ;
-(NSDate *)mostRecentFireDate;
-(HMDDevice *)owningDevice;
-(void)_actionSetsUpdated:(id)arg1 message:(id)arg2 ;
-(BOOL)shouldActivateOnLocalDevice;
-(NSMutableDictionary *)actionSetMappings;
-(id)emptyModelObject;
-(void)_updateActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)checkForNoActions;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(void)_registerForMessages;
-(void)removeActionSet:(id)arg1 postUpdate:(BOOL)arg2 ;
-(NSMutableArray *)actionSetUUIDs;
-(void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2 ;
-(BOOL)modelContainsTriggerFired:(id)arg1 ;
-(id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(BOOL)arg3 ;
-(void)_renameRequest:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSetRequest:(id)arg1 ;
-(void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_handleAddActionSetRequest:(id)arg1 ;
-(void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)confirmResident;
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
-(void)reEvaluate;
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

