/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)succinctDescriptionBuilder;
-(void)_startTimer;
-(void)_timerFired;
-(void)_cancelTimer;
-(void)screenOff;
-(void)setSlowPressDuration:(double)arg1 ;
-(double)slowPressDuration;
-(BOOL)bioUnlock;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOff;
-(BOOL)_isTimerRunning;
-(BOOL)_isPrimed;
-(void)_evaluateUnlock;
-(id)_slowPressTimer;
-(void)_setSlowPressTimer:(id)arg1 ;
@end

