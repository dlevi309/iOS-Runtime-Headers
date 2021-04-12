/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {

	BOOL _timerOn;
	long long _delayIndex;
	unsigned long long _numberOfTouchesRequired;
	double _force;
	unsigned long long _changeCount;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;                //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType; 
@property (nonatomic,readonly) double _force;                                           //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long changeCount;                            //@synthesize changeCount=_changeCount - In the implementation block
+(double)delayForRepeatNumber:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)changeCount;
-(void)setView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setButtonType:(long long)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)_resetGestureRecognizer;
-(long long)_buttonType;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_clearTapTimer;
-(void)_beginPress;
-(void)_endPress;
-(void)_cancelPress;
-(void)_changePress;
-(void)_scheduleNextTimer;
-(void)_nextStep:(id)arg1 ;
-(void)_finishNextStep:(id)arg1 ;
-(double)_force;
@end

