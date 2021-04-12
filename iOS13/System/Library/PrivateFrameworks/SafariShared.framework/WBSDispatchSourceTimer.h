/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WBSDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	BOOL _repeats;
	double _interval;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                           //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy,readonly) id handler;                        //@synthesize handler=_handler - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)scheduledTimerWithInterval:(double)arg1 repeats:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)handler;
-(BOOL)isValid;
-(double)interval;
-(BOOL)repeats;
-(void)schedule;
-(void)_scheduleTimer;
-(id)initWithInterval:(double)arg1 repeats:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)resetFireDate;
@end

