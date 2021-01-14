/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)changeCount;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)_resetGestureRecognizer;
-(double)_force;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_nextStep:(id)arg1 ;
-(void)_finishNextStep:(id)arg1 ;
-(void)_scheduleNextTimer;
-(void)_clearTapTimer;
-(long long)_buttonType;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_endPress;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_beginPress;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_cancelPress;
-(void)_changePress;
-(void)dealloc;
@end

