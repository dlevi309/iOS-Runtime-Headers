/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSQueryPerformerProtocol, OS_dispatch_source, OS_dispatch_queue, OS_os_log;
@class NSObject, CLSGeoServiceThread;

@interface CLSQueryHandler : NSObject {

	id<CLSQueryPerformerProtocol> _query;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _retryLevel;
	double _nextRetryTime;
	BOOL _alreadyLaunched;
	BOOL _didQueryFinish;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_os_log> _loggingConnection;
	BOOL _simulatesTimeout;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	CLSGeoServiceThread* _geoServiceThread;
	double _timeoutInterval;
	double _numberOfRetries;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CLSGeoServiceThread * geoServiceThread;                        //@synthesize geoServiceThread=_geoServiceThread - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) double numberOfRetries;                                        //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)_heartBeat;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setNumberOfRetries:(double)arg1 ;
-(double)timeoutInterval;
-(void)_cancel;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(void)_forwardToGeoThread;
-(void)_startQuery;
-(CLSGeoServiceThread *)geoServiceThread;
-(void)setGeoServiceThread:(CLSGeoServiceThread *)arg1 ;
-(BOOL)isSimulatingTimeout;
-(double)numberOfRetries;
-(id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3 ;
-(void)cacheItems;
-(void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2 ;
-(unsigned long long)_cacheMapItems:(id)arg1 ;
@end

