/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(double)fireInterval;
-(void)setNextFireDelay:(double)arg1 ;
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)updateScheduler;
-(void)setNextFireDelay:(double)arg1 interval:(double)arg2 ;
-(double)nextFireDelay;
-(void)setFireInterval:(double)arg1 ;
-(double)nextFireDelayRaw;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
-(void)setNextFireTime:(double)arg1 ;
@end

