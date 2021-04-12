/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface WBSPeriodicActivityScheduler : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	double _interval;
	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;

}
-(id)init;
-(void)invalidate;
-(void)_timerDidFire:(id)arg1 ;
-(id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_scheduleActivityWithInterval:(double)arg1 ;
-(void)_performActivity;
@end

