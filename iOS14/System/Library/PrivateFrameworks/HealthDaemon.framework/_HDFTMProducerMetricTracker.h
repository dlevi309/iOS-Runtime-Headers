/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)pause;
-(void)_startTimer;
-(void)invalidate;
-(void)resume;
-(id)initWithTimeoutHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)metricReceived;
-(BOOL)metricAvailable;
@end

