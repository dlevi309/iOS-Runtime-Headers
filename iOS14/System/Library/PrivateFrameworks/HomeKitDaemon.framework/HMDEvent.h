/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue, HMDEventDelegate;
@class HMDEventTrigger, NSObject, HMFMessageDispatcher, HMDHome, NSUUID, NSString, NSSet;

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol> {

	BOOL _endEvent;
	HMDEventTrigger* _eventTrigger;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	id<HMDEventDelegate> _delegate;
	HMDHome* _home;
	NSUUID* _uuid;
	NSString* _triggerType;
	NSString* _logString;
	unsigned long long _activationType;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) id<HMDEventDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDEventTrigger * eventTrigger;                           //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * triggerType;                                        //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,retain) NSString * logString;                                            //@synthesize logString=_logString - In the implementation block
@property (getter=isEndEvent,nonatomic,readonly) BOOL endEvent;                               //@synthesize endEvent=_endEvent - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;                               //@synthesize activationType=_activationType - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_setup;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(id<HMDEventDelegate>)delegate;
-(unsigned long long)activationType;
-(id)dumpState;
-(void)setActivationType:(unsigned long long)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(BOOL)isActive;
-(NSString *)logString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDEventDelegate>)arg1 ;
-(NSString *)description;
-(HMDEventTrigger *)eventTrigger;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NSString *)triggerType;
-(void)setHome:(HMDHome *)arg1 ;
-(void)_updateTriggerType;
-(void)setEventTrigger:(HMDEventTrigger *)arg1 ;
-(BOOL)isEndEvent;
-(BOOL)isEqual:(id)arg1 ;
-(HMDHome *)home;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)setLogString:(NSString *)arg1 ;
@end

