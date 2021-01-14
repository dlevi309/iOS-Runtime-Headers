/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@class NSTimer;

@interface ICBackoffTimer : NSObject {

	id _userInfo;
	double _initialTimeInterval;
	id _target;
	SEL _selector;
	unsigned long long _backoffCount;
	double _maxTimeInterval;
	NSTimer* _timer;

}

@property (assign,nonatomic) double initialTimeInterval;                   //@synthesize initialTimeInterval=_initialTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) id target;                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                 //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long backoffCount;              //@synthesize backoffCount=_backoffCount - In the implementation block
@property (assign,nonatomic) double maxTimeInterval;                       //@synthesize maxTimeInterval=_maxTimeInterval - In the implementation block
@property (retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
-(void)setTarget:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSTimer *)timer;
-(SEL)selector;
-(id)userInfo;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)setSelector:(SEL)arg1 ;
-(void)fire;
-(BOOL)isScheduled;
-(void)invalidate;
-(id)target;
-(void)fire:(id)arg1 ;
-(void)scheduleToFire;
-(double)nextTimeInterval;
-(id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)setInitialTimeInterval:(double)arg1 ;
-(void)setMaxTimeInterval:(double)arg1 ;
-(void)setBackoffCount:(unsigned long long)arg1 ;
-(double)initialTimeInterval;
-(unsigned long long)backoffCount;
-(double)maxTimeInterval;
-(void)dealloc;
@end

