/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol OS_dispatch_queue;
@class MSASServerSideModel, NSObject, MSTimerGate;

@interface MSASGroupedQueue : NSObject {

	BOOL _isShuttingDown;
	BOOL _isAssertingBusyAssertion;
	int _maxGroupedCallbackEventBatchCount;
	MSASServerSideModel* _model;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;
	double _maxGroupedCallbackEventIdleInterval;
	double _maxGroupedCallbackEventStaleness;
	MSTimerGate* _idleTimerGate;
	MSTimerGate* _stalenessTimerGate;

}

@property (nonatomic,retain) MSTimerGate * idleTimerGate;                             //@synthesize idleTimerGate=_idleTimerGate - In the implementation block
@property (nonatomic,retain) MSTimerGate * stalenessTimerGate;                        //@synthesize stalenessTimerGate=_stalenessTimerGate - In the implementation block
@property (assign,nonatomic,__weak) MSASServerSideModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) int maxGroupedCallbackEventBatchCount;                   //@synthesize maxGroupedCallbackEventBatchCount=_maxGroupedCallbackEventBatchCount - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventIdleInterval;              //@synthesize maxGroupedCallbackEventIdleInterval=_maxGroupedCallbackEventIdleInterval - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventStaleness;                 //@synthesize maxGroupedCallbackEventStaleness=_maxGroupedCallbackEventStaleness - In the implementation block
@property (nonatomic,readonly) BOOL isAssertingBusyAssertion;                         //@synthesize isAssertingBusyAssertion=_isAssertingBusyAssertion - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                     //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MSASServerSideModel *)model;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)setModel:(MSASServerSideModel *)arg1 ;
-(BOOL)isShuttingDown;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(int)maxGroupedCallbackEventBatchCount;
-(void)setMaxGroupedCallbackEventBatchCount:(int)arg1 ;
-(double)maxGroupedCallbackEventIdleInterval;
-(void)setMaxGroupedCallbackEventIdleInterval:(double)arg1 ;
-(double)maxGroupedCallbackEventStaleness;
-(void)setMaxGroupedCallbackEventStaleness:(double)arg1 ;
-(BOOL)hasEnqueuedItems;
-(void)workQueueFlushQueue;
-(void)assertBusyAssertion;
-(void)deassertBusyAssertion;
-(void)workQueueAssertBusyAssertion;
-(void)workQueueDeassertBusyAssertion;
-(BOOL)isAssertingBusyAssertion;
-(BOOL)memberQueueIsAssertingBusyAssertion;
-(void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1 ;
-(void)shutDownFlush:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)flushQueueCompletionBlock:(/*^block*/id)arg1 ;
-(void)workQueueRestartIdleTimer;
-(void)workQueueClearIdleTimer;
-(void)workQueueRestartStalenessTimer;
-(void)workQueueClearStalenessTimer;
-(void)workQueueDidEnqueueFirstItem;
-(void)workQueueDidEnqueueSubsequentItem;
-(MSTimerGate *)idleTimerGate;
-(void)setIdleTimerGate:(MSTimerGate *)arg1 ;
-(MSTimerGate *)stalenessTimerGate;
-(void)setStalenessTimerGate:(MSTimerGate *)arg1 ;
@end

