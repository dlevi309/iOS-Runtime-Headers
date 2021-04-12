/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMDHome, NSDate, NSObject, HMFMessageDispatcher, NSMutableArray, HMFTimer, HMFMessage, NSDictionary, HMDApplicationData, NSArray, NSSet;

@interface HMDActionSet : HMFObject <HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol> {

	NSString* _name;
	NSString* _type;
	NSUUID* _uuid;
	HMDHome* _home;
	NSDate* _lastExecutionDate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSMutableArray* _currentActions;
	HMFTimer* _executionTimeout;
	NSDate* _executionStart;
	HMFMessage* _executionMessage;
	NSDictionary* _executionInitialStates;
	HMDApplicationData* _appData;

}

@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActions;                                 //@synthesize currentActions=_currentActions - In the implementation block
@property (nonatomic,retain) NSDate * lastExecutionDate;                                      //@synthesize lastExecutionDate=_lastExecutionDate - In the implementation block
@property (nonatomic,retain) HMFTimer * executionTimeout;                                     //@synthesize executionTimeout=_executionTimeout - In the implementation block
@property (nonatomic,retain) NSDate * executionStart;                                         //@synthesize executionStart=_executionStart - In the implementation block
@property (nonatomic,retain) HMFMessage * executionMessage;                                   //@synthesize executionMessage=_executionMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * executionInitialStates;                           //@synthesize executionInitialStates=_executionInitialStates - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,readonly) NSUUID * spiClientIdentifier; 
@property (nonatomic,readonly) BOOL containsMediaPlaybackActions; 
@property (nonatomic,readonly) BOOL containsShortcutActions; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)allowedActionClasses;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)isBuiltinActionSetType:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)execute:(id)arg1 ;
-(NSArray *)actions;
-(void)setHome:(HMDHome *)arg1 ;
-(id)urlString;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeService:(id)arg1 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(id)dumpState;
-(id)messageDestination;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSMutableArray *)currentActions;
-(void)setCurrentActions:(NSMutableArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)setLastExecutionDate:(NSDate *)arg1 ;
-(NSDate *)lastExecutionDate;
-(void)_registerForMessages;
-(BOOL)containsShortcutActions;
-(BOOL)containsMediaPlaybackActions;
-(void)executeWithTriggerSource:(id)arg1 captureCurrentState:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(NSUUID *)spiClientIdentifier;
-(id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5 ;
-(void)removeActionForCharacteristic:(id)arg1 ;
-(BOOL)containsSecureCharacteristic;
-(id)assistantObject;
-(BOOL)containsUnsecuringAction;
-(id)isAccessValidForExecutionWithMessage:(id)arg1 ;
-(void)_execute:(id)arg1 captureCurrentState:(BOOL)arg2 writeRequestTuples:(id)arg3 ;
-(void)_handleRemoveAction:(id)arg1 message:(id)arg2 ;
-(BOOL)_fixupActions;
-(HMFMessage *)executionMessage;
-(void)_removeDonatedIntent;
-(void)_handleAddActionRequest:(id)arg1 ;
-(void)_handleRemoveActionRequest:(id)arg1 ;
-(void)_handleUpdateActionRequest:(id)arg1 ;
-(id)_addCharacteristicWriteActionModelWithUUID:(id)arg1 message:(id)arg2 ;
-(id)_addMediaPlaybackActionModelWithUUID:(id)arg1 message:(id)arg2 ;
-(void)sendNotificationWithAction:(id)arg1 message:(id)arg2 requiresSPIEntitlement:(BOOL)arg3 ;
-(void)_handleAddNewAction:(id)arg1 message:(id)arg2 ;
-(id)actionWithUUID:(id)arg1 ;
-(void)_removeAction:(id)arg1 message:(id)arg2 ;
-(void)_updateWriteAction:(id)arg1 forMessage:(id)arg2 ;
-(void)_updatePlaybackAction:(id)arg1 forMessage:(id)arg2 ;
-(void)_logDuetRoomEvent;
-(NSString *)serializedIdentifier;
-(HMFTimer *)executionTimeout;
-(NSDate *)executionStart;
-(NSDictionary *)executionInitialStates;
-(void)setExecutionMessage:(HMFMessage *)arg1 ;
-(void)setExecutionStart:(NSDate *)arg1 ;
-(void)setExecutionTimeout:(HMFTimer *)arg1 ;
-(void)setExecutionInitialStates:(NSDictionary *)arg1 ;
-(id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)_logDuetEvent:(id)arg1 endDate:(id)arg2 message:(id)arg3 ;
-(void)handleExecutionCompletedWithOverallError:(id)arg1 response:(id)arg2 ;
-(void)_issueReadRequests;
-(void)_issueWriteRequests:(id)arg1 ;
-(void)_executeMediaPlaybackActions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_executeGenericActions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_logExecuteAction:(id)arg1 ;
-(void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2 ;
-(void)_handleAddCharactersiticWriteActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_handleAddMediaPlaybackActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_handleAddShortcutActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2 ;
-(id)allCharacteristicsInActionsForServices:(id)arg1 ;
-(id)_getActionsForActionSetObject;
@end

