/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)stop;
-(void)start;
-(void)_reset;
-(void)_start;
-(void)_stop;
-(void)_cancel;
-(BOOL)_isCanceled;
-(BOOL)isCanceled;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)_cancelIfNotAlreadyCanceled;
@end

