/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMFMessageDispatcher, NSObject, HMDEventTrigger, HMDDevice, NSSet;

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	NSUUID* _sessionID;
	NSString* _logString;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDEventTrigger* _eventTrigger;
	NSUUID* _eventTriggerUUID;
	HMDDevice* _currentDevice;

}

@property (nonatomic,readonly) NSUUID * sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * logString;                                          //@synthesize logString=_logString - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher;                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDEventTrigger * eventTrigger;                           //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,readonly) NSUUID * eventTriggerUUID;                                     //@synthesize eventTriggerUUID=_eventTriggerUUID - In the implementation block
@property (nonatomic,readonly) HMDDevice * currentDevice;                                     //@synthesize currentDevice=_currentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)dumpState;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(HMDDevice *)currentDevice;
-(NSString *)logString;
-(id)logIdentifier;
-(NSString *)description;
-(HMDEventTrigger *)eventTrigger;
-(void)setEventTrigger:(HMDEventTrigger *)arg1 ;
-(void)dealloc;
-(NSUUID *)eventTriggerUUID;
-(BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 ;
-(BOOL)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

