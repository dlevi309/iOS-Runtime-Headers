/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	double _delaySetAtTime;
	double _nextFireDelay;
	CLSilo* _silo;
	id<CLTimerScheduler> _scheduler;
	/*^block*/id _handler;
	double _fireInterval;

}

@property (assign,nonatomic) double nextFireTime; 
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireDelay;              //@synthesize nextFireDelay=_nextFireDelay - In the implementation block
@property (assign,nonatomic) double fireInterval;               //@synthesize fireInterval=_fireInterval - In the implementation block
-(double)nextFireTime;
-(void)setHandler:(id)arg1 ;
-(double)nextFireDelay;
-(void)setFireInterval:(double)arg1 ;
-(void)setNextFireDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(void)updateScheduler;
-(void)setNextFireTime:(double)arg1 ;
-(void)setNextFireDelay:(double)arg1 ;
-(double)nextFireDelayRaw;
-(void)invalidate;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)dbgAssertInside;
-(double)fireInterval;
-(id)handler;
-(void)shouldFire;
@end

