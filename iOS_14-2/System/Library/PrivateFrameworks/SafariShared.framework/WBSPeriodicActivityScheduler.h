/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_performActivity;
-(id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_scheduleActivityWithInterval:(double)arg1 ;
-(void)invalidate;
-(void)_timerDidFire:(id)arg1 ;
@end

