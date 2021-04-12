/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class _HKExpiringCompletionTimer, NSObject;

@interface _HDFTMProducerMetricTracker : NSObject {

	_HKExpiringCompletionTimer* _timer;
	/*^block*/id _timeoutHandler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _metricAvailable;

}

@property (nonatomic,readonly) BOOL metricAvailable;              //@synthesize metricAvailable=_metricAvailable - In the implementation block
-(void)invalidate;
-(void)pause;
-(void)resume;
-(void)_startTimer;
-(id)initWithTimeoutHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)metricReceived;
-(BOOL)metricAvailable;
@end

