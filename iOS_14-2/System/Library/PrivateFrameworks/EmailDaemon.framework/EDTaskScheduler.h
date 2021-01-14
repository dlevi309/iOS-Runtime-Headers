/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface EDTaskScheduler : NSObject {

	BOOL _observeForNetworkReachability;
	BOOL _isReachable;
	BOOL _pendingWaitingForNetwork;
	double _initialDelay;
	double _maxBackOffInterval;
	double _backoffMultiplier;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _executionQueue;
	double _backOffInterval;
	/*^block*/id _task;
	/*^block*/id _canceledCallback;
	/*^block*/id _work;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;                //@synthesize timerSource=_timerSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (assign,nonatomic) double backOffInterval;                                   //@synthesize backOffInterval=_backOffInterval - In the implementation block
@property (assign,nonatomic) BOOL isReachable;                                         //@synthesize isReachable=_isReachable - In the implementation block
@property (assign,nonatomic) BOOL pendingWaitingForNetwork;                            //@synthesize pendingWaitingForNetwork=_pendingWaitingForNetwork - In the implementation block
@property (nonatomic,copy) id task;                                                    //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id canceledCallback;                                        //@synthesize canceledCallback=_canceledCallback - In the implementation block
@property (nonatomic,copy) id work;                                                    //@synthesize work=_work - In the implementation block
@property (assign,nonatomic) double initialDelay;                                      //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double maxBackOffInterval;                                //@synthesize maxBackOffInterval=_maxBackOffInterval - In the implementation block
@property (assign,nonatomic) double backoffMultiplier;                                 //@synthesize backoffMultiplier=_backoffMultiplier - In the implementation block
@property (assign,nonatomic) BOOL observeForNetworkReachability;                       //@synthesize observeForNetworkReachability=_observeForNetworkReachability - In the implementation block
-(NSObject*<OS_dispatch_source>)timerSource;
-(id)work;
-(void)setWork:(id)arg1 ;
-(BOOL)isReachable;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(void)_stopObservingNetworkReachability;
-(id)task;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)canceledCallback;
-(void)setBackOffInterval:(double)arg1 ;
-(void)setIsReachable:(BOOL)arg1 ;
-(double)backOffInterval;
-(double)backoffMultiplier;
-(void)setBackoffMultiplier:(double)arg1 ;
-(void)_incrementBackoffInterval;
-(void)setMaxBackOffInterval:(double)arg1 ;
-(void)setTask:(id)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithExecutionQueue:(id)arg1 ;
-(double)maxBackOffInterval;
-(void)rescheduleTask;
-(void)setObserveForNetworkReachability:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(BOOL)pendingWaitingForNetwork;
-(void)_cancelTimer;
-(void)setPendingWaitingForNetwork:(BOOL)arg1 ;
-(void)_reportReachabilityChange:(id)arg1 ;
-(void)_doScheduleTask:(/*^block*/id)arg1 canceledCallback:(/*^block*/id)arg2 ;
-(void)scheduleTask:(/*^block*/id)arg1 canceledCallback:(/*^block*/id)arg2 ;
-(void)_startObservingNetworkReachability;
-(void)setCanceledCallback:(id)arg1 ;
-(BOOL)observeForNetworkReachability;
-(void)dealloc;
@end

