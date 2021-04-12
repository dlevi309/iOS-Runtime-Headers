/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSString, NSObject, PFCoalescerContext;

@interface PFCoalescer : NSObject {

	long long _resetSequenceNumber;
	long long _lastUpdateResetSequenceNumber;
	BOOL _usesTarget;
	BOOL _initialDelayTimerIsArmed;
	double _initialDelay;
	NSString* _label;
	id _target;
	id _buffer;
	NSObject*<OS_dispatch_queue> _sourceQueue;
	id _targetQueue;
	long long _queueType;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _snapshotAndDrainHandler;
	/*^block*/id _action;
	PFCoalescerContext* _context;
	long long _state;
	NSObject*<OS_os_transaction> _transaction;
	unsigned long long _stateCaptureHandlerHandle;

}

@property (retain) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (__weak) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign) BOOL usesTarget;                                           //@synthesize usesTarget=_usesTarget - In the implementation block
@property (retain) id buffer;                                                 //@synthesize buffer=_buffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sourceQueue;                  //@synthesize sourceQueue=_sourceQueue - In the implementation block
@property (retain) id targetQueue;                                            //@synthesize targetQueue=_targetQueue - In the implementation block
@property (assign) long long queueType;                                       //@synthesize queueType=_queueType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;               //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> source;                      //@synthesize source=_source - In the implementation block
@property (copy) id snapshotAndDrainHandler;                                  //@synthesize snapshotAndDrainHandler=_snapshotAndDrainHandler - In the implementation block
@property (copy) id action;                                                   //@synthesize action=_action - In the implementation block
@property (retain) PFCoalescerContext * context;                              //@synthesize context=_context - In the implementation block
@property (assign) BOOL initialDelayTimerIsArmed;                             //@synthesize initialDelayTimerIsArmed=_initialDelayTimerIsArmed - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                  //@synthesize transaction=_transaction - In the implementation block
@property (assign) unsigned long long stateCaptureHandlerHandle;              //@synthesize stateCaptureHandlerHandle=_stateCaptureHandlerHandle - In the implementation block
@property (assign) double initialDelay;                                       //@synthesize initialDelay=_initialDelay - In the implementation block
+(id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(/*^block*/id)mutableCollectionBufferDrainer;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
+(id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(/*^block*/id)arg5 ;
+(id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
-(void)setTarget:(id)arg1 ;
-(double)initialDelay;
-(void)setTargetQueue:(id)arg1 ;
-(void)update:(/*^block*/id)arg1 ;
-(void)setInitialDelay:(double)arg1 ;
-(void)setBuffer:(id)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)targetQueue;
-(id)init;
-(id)stateInformation;
-(void)setSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_resetWhileLocked;
-(void)setStateCaptureHandlerHandle:(unsigned long long)arg1 ;
-(void)setInitialDelayTimerIsArmed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(NSObject*<OS_dispatch_queue>)sourceQueue;
-(id)action;
-(PFCoalescerContext *)context;
-(void)setAction:(id)arg1 ;
-(BOOL)initialDelayTimerIsArmed;
-(long long)queueType;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setQueueType:(long long)arg1 ;
-(void)update;
-(id)snapshotAndDrainHandler;
-(id)buffer;
-(void)setState:(long long)arg1 ;
-(void)setSnapshotAndDrainHandler:(id)arg1 ;
-(void)performEventActionWithTarget:(id)arg1 ;
-(void)reset;
-(long long)state;
-(void)setUsesTarget:(BOOL)arg1 ;
-(void)setupStateCaptureHandler;
-(BOOL)usesTarget;
-(unsigned long long)stateCaptureHandlerHandle;
-(id)target;
-(void)setLabel:(NSString *)arg1 ;
-(void)resetAndShutDown;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(void)setContext:(PFCoalescerContext *)arg1 ;
@end

