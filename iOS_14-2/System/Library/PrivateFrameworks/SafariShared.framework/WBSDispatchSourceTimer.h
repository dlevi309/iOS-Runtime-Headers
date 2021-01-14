/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WBSDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	BOOL _repeats;
	double _interval;
	double _startDelay;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double startDelay;                      //@synthesize startDelay=_startDelay - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                           //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy,readonly) id handler;                        //@synthesize handler=_handler - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)scheduledTimerWithInterval:(double)arg1 repeats:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
+(id)scheduledRepeatingTimerWithStartDelay:(double)arg1 interval:(double)arg2 handler:(/*^block*/id)arg3 ;
-(double)interval;
-(id)_initWithStartDelay:(double)arg1 interval:(double)arg2 repeats:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)resetFireDate;
-(BOOL)repeats;
-(BOOL)isValid;
-(void)schedule;
-(double)startDelay;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
-(void)_scheduleTimer;
@end

