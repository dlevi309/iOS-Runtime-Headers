/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface MTExponentialBackOffTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	double _initialTime;
	unsigned long long _currentBackoff;
	unsigned long long _backoffFactor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double initialTime;                               //@synthesize initialTime=_initialTime - In the implementation block
@property (assign,nonatomic) unsigned long long currentBackoff;                //@synthesize currentBackoff=_currentBackoff - In the implementation block
@property (assign,nonatomic) unsigned long long backoffFactor;                 //@synthesize backoffFactor=_backoffFactor - In the implementation block
+(id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 ;
+(id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
+(id)timerWithInitialTime:(double)arg1 fireBlock:(/*^block*/id)arg2 ;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(void)start;
-(id)block;
-(void)reset;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)_cancel;
-(double)initialTime;
-(id)initWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)timerFinished;
-(void)setInitialTime:(double)arg1 ;
-(unsigned long long)currentBackoff;
-(void)setCurrentBackoff:(unsigned long long)arg1 ;
-(unsigned long long)backoffFactor;
-(void)setBackoffFactor:(unsigned long long)arg1 ;
@end

