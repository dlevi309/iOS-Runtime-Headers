/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)cancel;
-(double)delay;
-(void)setUserInfo:(id)arg1 ;
-(NSDate *)_startDate;
-(BOOL)_canceled;
-(void)touch;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)unschedule;
-(BOOL)scheduled;
-(void)timerFired:(id)arg1 ;
-(void)touchWithDelay:(double)arg1 ;
@end

