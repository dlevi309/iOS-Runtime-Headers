/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <IOUSBHost/IOUSBHost-Structs.h>
@class NSData, IOUSBHostCIPortStateMachine, NSObject, IOUSBHostCIControllerStateMachine, NSUUID, IOUSBHostInterestNotifier, NSMutableData, NSRecursiveLock;

@interface IOUSBHostControllerInterface : NSObject {

	NSData* _capabilitiesData;
	IOUSBHostCIPortStateMachine* _portStateMachine[16];
	BOOL _interruptDeliveryPending;
	unsigned _ioConnect;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _interruptRateHz;
	IOUSBHostCIControllerStateMachine* _controllerStateMachine;
	const IOUSBHostCIMessage* _capabilities;
	NSUUID* _uuid;
	IONotificationPortRef _notificationPortRef;
	/*^block*/id _commandHandler;
	/*^block*/id _doorbellHandler;
	IOUSBHostInterestNotifier* _interestNotifier;
	NSMutableData* _doorbells;
	NSMutableData* _interrupts;
	NSRecursiveLock* _interruptProducerLock;
	unsigned long long _interruptProducerIndex;
	unsigned long long _interruptConsumerIndex;
	NSObject*<OS_dispatch_queue> _interruptQueue;
	unsigned long long _nextInterruptTime;
	NSObject*<OS_os_log> _log;
	IOUSBHostCIMessage _command;

}

@property (nonatomic,retain) IOUSBHostCIControllerStateMachine * controllerStateMachine;              //@synthesize controllerStateMachine=_controllerStateMachine - In the implementation block
@property (assign,nonatomic) const IOUSBHostCIMessage* capabilities;                                  //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned ioConnect;                                                      //@synthesize ioConnect=_ioConnect - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) IONotificationPortRef notificationPortRef;                               //@synthesize notificationPortRef=_notificationPortRef - In the implementation block
@property (nonatomic,copy) id commandHandler;                                                         //@synthesize commandHandler=_commandHandler - In the implementation block
@property (nonatomic,copy) id doorbellHandler;                                                        //@synthesize doorbellHandler=_doorbellHandler - In the implementation block
@property (nonatomic,retain) IOUSBHostInterestNotifier * interestNotifier;                            //@synthesize interestNotifier=_interestNotifier - In the implementation block
@property (assign) IOUSBHostCIMessage command;                                                        //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSMutableData * doorbells;                                               //@synthesize doorbells=_doorbells - In the implementation block
@property (nonatomic,retain) NSMutableData * interrupts;                                              //@synthesize interrupts=_interrupts - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * interruptProducerLock;                                 //@synthesize interruptProducerLock=_interruptProducerLock - In the implementation block
@property (assign) unsigned long long interruptProducerIndex;                                         //@synthesize interruptProducerIndex=_interruptProducerIndex - In the implementation block
@property (assign) unsigned long long interruptConsumerIndex;                                         //@synthesize interruptConsumerIndex=_interruptConsumerIndex - In the implementation block
@property (assign) BOOL interruptDeliveryPending;                                                     //@synthesize interruptDeliveryPending=_interruptDeliveryPending - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interruptQueue;                             //@synthesize interruptQueue=_interruptQueue - In the implementation block
@property (assign) unsigned long long nextInterruptTime;                                              //@synthesize nextInterruptTime=_nextInterruptTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) unsigned long long interruptRateHz;                                      //@synthesize interruptRateHz=_interruptRateHz - In the implementation block
-(NSUUID *)uuid;
-(const IOUSBHostCIMessage*)capabilities;
-(void)setCapabilities:(const IOUSBHostCIMessage*)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)destroy;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableData *)interrupts;
-(void)setInterrupts:(NSMutableData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setUuid:(NSUUID *)arg1 ;
-(IOUSBHostCIMessage)command;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCommand:(IOUSBHostCIMessage)arg1 ;
-(void)dealloc;
-(id)commandHandler;
-(void)setCommandHandler:(id)arg1 ;
-(BOOL)enqueueInterrupt:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)enqueueInterrupts:(const IOUSBHostCIMessage*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setInterruptRateHz:(unsigned long long)arg1 ;
-(void)setDoorbellHandler:(id)arg1 ;
-(void)setControllerStateMachine:(IOUSBHostCIControllerStateMachine *)arg1 ;
-(IOUSBHostCIControllerStateMachine *)controllerStateMachine;
-(void)setInterruptQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInterruptProducerLock:(NSRecursiveLock *)arg1 ;
-(NSObject*<OS_dispatch_queue>)interruptQueue;
-(NSRecursiveLock *)interruptProducerLock;
-(void)setDoorbells:(NSMutableData *)arg1 ;
-(NSMutableData *)doorbells;
-(void)setIoConnect:(unsigned)arg1 ;
-(unsigned)ioConnect;
-(void)setInterestNotifier:(IOUSBHostInterestNotifier *)arg1 ;
-(IOUSBHostInterestNotifier *)interestNotifier;
-(void)setNotificationPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)notificationPortRef;
-(BOOL)commandAsyncCallbackWithResult:(int)arg1 error:(id*)arg2 ;
-(BOOL)doorbellAsyncCallbacKWithResult:(int)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)enqueueInterrupts:(const IOUSBHostCIMessage*)arg1 count:(unsigned long long)arg2 expedite:(BOOL)arg3 error:(id*)arg4 ;
-(unsigned long long)interruptRateHz;
-(unsigned long long)interruptConsumerIndex;
-(unsigned long long)interruptProducerIndex;
-(id)descriptionForMessage:(const IOUSBHostCIMessage*)arg1 ;
-(void)setInterruptProducerIndex:(unsigned long long)arg1 ;
-(BOOL)interruptDeliveryPending;
-(unsigned long long)nextInterruptTime;
-(void)setInterruptDeliveryPending:(BOOL)arg1 ;
-(BOOL)deliverInterrupts;
-(void)setNextInterruptTime:(unsigned long long)arg1 ;
-(void)setInterruptConsumerIndex:(unsigned long long)arg1 ;
-(id)initWithCapabilities:(id)arg1 queue:(id)arg2 interruptRateHz:(unsigned long long)arg3 error:(id*)arg4 commandHandler:(/*^block*/id)arg5 doorbellHandler:(/*^block*/id)arg6 interestHandler:(/*function pointer*/void*)arg7 ;
-(BOOL)enqueueInterrupt:(const IOUSBHostCIMessage*)arg1 expedite:(BOOL)arg2 error:(id*)arg3 ;
-(id)getPortStateMachineForCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(const IOUSBHostCIMessage*)capabilitiesForPort:(unsigned long long)arg1 ;
-(id)doorbellHandler;
@end

