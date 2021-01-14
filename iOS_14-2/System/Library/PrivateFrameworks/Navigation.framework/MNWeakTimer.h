/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSTimer;

@interface MNWeakTimer : NSObject {

	id _target;
	SEL _selector;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setTarget:(id)arg1 ;
-(NSTimer *)timer;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)invalidate;
-(void)_timerDidFire;
-(id)target;
-(void)dealloc;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
@end

