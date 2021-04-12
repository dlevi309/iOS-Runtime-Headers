/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSDateInterval;

@interface REUpNextTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastFireDate;
	NSDateInterval* _fireInterval;
	double _rate;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _dispatch_timer;

}

@property (retain) NSObject*<OS_dispatch_source> dispatch_timer;              //@synthesize dispatch_timer=_dispatch_timer - In the implementation block
@property (nonatomic,readonly) NSDateInterval * fireInterval;                 //@synthesize fireInterval=_fireInterval - In the implementation block
@property (nonatomic,readonly) double rate;                                   //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) id block;                                      //@synthesize block=_block - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
+(id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithFireDate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithFireInterval:(id)arg1 atRate:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)block;
-(void)_rescheduleTimer;
-(BOOL)isValid;
-(double)rate;
-(void)invalidate;
-(NSDateInterval *)fireInterval;
-(void)dealloc;
-(id)initWithDateInterval:(id)arg1 rate:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setDispatch_timer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_scheduleTimerWithInterval:(id)arg1 rate:(double)arg2 ;
-(NSObject*<OS_dispatch_source>)dispatch_timer;
-(void)_handleTimer;
-(BOOL)_isNowRepeatingTimerWithCurrentDate:(id)arg1 ;
@end

