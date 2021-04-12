/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDTriggerEventProtocol.h>

@class NSString, HMPresenceEventActivation, NSMutableDictionary, NSMutableArray, HMDEventTriggerExecutionSession, NSUUID, NSSet;

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol> {

	BOOL _currentStatus;
	NSString* _presenceType;
	HMPresenceEventActivation* _activation;
	NSMutableDictionary* _users;
	NSMutableArray* _userUUIDs;
	HMDEventTriggerExecutionSession* _executionSession;

}

@property (nonatomic,retain) NSString * presenceType;                                                //@synthesize presenceType=_presenceType - In the implementation block
@property (nonatomic,readonly) HMPresenceEventActivation * activation;                               //@synthesize activation=_activation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * users;                                          //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) NSMutableArray * userUUIDs;                                           //@synthesize userUUIDs=_userUUIDs - In the implementation block
@property (assign,nonatomic) BOOL currentStatus;                                                     //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic,__weak) HMDEventTriggerExecutionSession * executionSession;              //@synthesize executionSession=_executionSession - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(NSMutableDictionary *)users;
-(void)setCurrentStatus:(BOOL)arg1 ;
-(BOOL)currentStatus;
-(NSString *)presenceType;
-(HMPresenceEventActivation *)activation;
-(unsigned long long)activationGranularity;
-(void)setPresenceType:(NSString *)arg1 ;
-(id)metricData;
-(id)emptyModelObject;
-(void)_registerForMessages;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(BOOL)removeUser:(id)arg1 ;
-(void)_addUser:(id)arg1 ;
-(NSMutableArray *)userUUIDs;
-(void)_updateUsers:(id)arg1 payload:(id)arg2 home:(id)arg3 ;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(id)createClientPayload;
-(id)createDaemonPayload;
-(id)presenceTypeForClient;
-(void)_handleHomePresenceUpdate:(id)arg1 ;
-(void)setExecutionSession:(HMDEventTriggerExecutionSession *)arg1 ;
-(void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1 ;
-(BOOL)evaluateWithHomePresenceUpdate:(id)arg1 ;
-(HMDEventTriggerExecutionSession *)executionSession;
-(BOOL)evaluateWithUserPresence:(id)arg1 ;
-(BOOL)evaluateWithHomePresence:(id)arg1 ;
-(id)thisUser;
-(void)_removeAllUsers;
-(void)_updatePresenceType:(id)arg1 payload:(id)arg2 ;
-(id)presenceMetricData;
-(void)didEndExecutionSession:(id)arg1 ;
-(id)createPresenceEventPayload:(BOOL)arg1 ;
-(BOOL)compatibleWithUser:(id)arg1 ;
@end

