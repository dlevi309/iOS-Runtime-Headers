/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {

	BSTimer* _slowPressTimer;
	BOOL _bioUnlockOccurred;
	BOOL _buttonIsDown;
	BOOL _fingerIsOn;
	BOOL _timerFired;
	double _slowPressDuration;

}

@property (setter=_setSlowPressTimer:,getter=_slowPressTimer,nonatomic,retain) BSTimer * slowPressTimer;              //@synthesize slowPressTimer=_slowPressTimer - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                                                //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
-(void)menuButtonUp;
-(id)init;
-(id)description;
-(void)_timerFired;
-(void)menuButtonDown;
-(void)_cancelTimer;
-(void)_startTimer;
-(BOOL)bioUnlock;
-(void)screenOff;
-(id)succinctDescriptionBuilder;
-(void)fingerOff;
-(double)slowPressDuration;
-(BOOL)_isTimerRunning;
-(BOOL)_isPrimed;
-(void)_evaluateUnlock;
-(void)setSlowPressDuration:(double)arg1 ;
-(id)_slowPressTimer;
-(void)_setSlowPressTimer:(id)arg1 ;
@end

