/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface INWatchdogTimer : NSObject {

	double _interval;
	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _isStopped;
	double _remainingInterval;
	double _startTime;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(BOOL)isCanceled;
-(BOOL)_cancelIfNotAlreadyCanceled;
-(void)start;
-(BOOL)cancelIfNotAlreadyCanceled;
-(void)_start;
-(void)stop;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(BOOL)_isCanceled;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(void)_cancel;
-(void)_stop;
-(void)_reset;
-(void)cancel;
-(void)dealloc;
@end

