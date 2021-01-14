/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSQueryProtocol, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject {

	BOOL _simulatesTimeout;
	BOOL _alreadyLaunched;
	BOOL _didFinishQuery;
	id<CLSQueryProtocol> _query;
	/*^block*/id _cancellerBlock;
	/*^block*/id _completionBlock;
	double _timeoutInterval;
	double _numberOfRetries;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned long long _retryLevel;
	double _nextRetryTime;

}

@property (nonatomic,readonly) id<CLSQueryProtocol> query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) id cancellerBlock;                                      //@synthesize cancellerBlock=_cancellerBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double internalProgressTimeInterval;                           //@synthesize internalProgressTimeInterval=_internalProgressTimeInterval - In the implementation block
@property (assign,nonatomic) unsigned long long retryLevel;                                 //@synthesize retryLevel=_retryLevel - In the implementation block
@property (assign,nonatomic) double nextRetryTime;                                          //@synthesize nextRetryTime=_nextRetryTime - In the implementation block
@property (assign,nonatomic) BOOL alreadyLaunched;                                          //@synthesize alreadyLaunched=_alreadyLaunched - In the implementation block
@property (assign,nonatomic) BOOL didFinishQuery;                                           //@synthesize didFinishQuery=_didFinishQuery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                           //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;                       //@synthesize timerQueue=_timerQueue - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) double numberOfRetries;                                        //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
-(id<CLSQueryProtocol>)query;
-(id)completionBlock;
-(void)setNumberOfRetries:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleError:(id)arg1 ;
-(double)numberOfRetries;
-(double)timeoutInterval;
-(void)_cancel;
-(void)setTimeoutInterval:(double)arg1 ;
-(BOOL)isSimulatingTimeout;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(void)_heartBeat;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)cancel;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)launchQueryWithCancellerBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithQueryObject:(id)arg1 ;
-(void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2 ;
-(void)_startQuery;
-(id)cancellerBlock;
-(double)internalProgressTimeInterval;
-(void)setInternalProgressTimeInterval:(double)arg1 ;
-(unsigned long long)retryLevel;
-(void)setRetryLevel:(unsigned long long)arg1 ;
-(double)nextRetryTime;
-(void)setNextRetryTime:(double)arg1 ;
-(BOOL)alreadyLaunched;
-(void)setAlreadyLaunched:(BOOL)arg1 ;
-(BOOL)didFinishQuery;
-(void)setDidFinishQuery:(BOOL)arg1 ;
@end

