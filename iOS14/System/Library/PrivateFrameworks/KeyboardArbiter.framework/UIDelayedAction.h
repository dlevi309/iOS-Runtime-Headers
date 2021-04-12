/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/


@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;
	NSDate* m_startDate;

}

@property (readonly) NSDate * _startDate; 
@property (readonly) BOOL _canceled; 
@property (retain) id target; 
@property (retain) id userInfo; 
-(void)setTarget:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)_canceled;
-(id)userInfo;
-(void)touch;
-(id)init;
-(NSDate *)_startDate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(void)timerFired:(id)arg1 ;
-(double)delay;
-(BOOL)scheduled;
-(void)touchWithDelay:(double)arg1 ;
-(id)target;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)unschedule;
-(void)cancel;
-(void)dealloc;
@end

