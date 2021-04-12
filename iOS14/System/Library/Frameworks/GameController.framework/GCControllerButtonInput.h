/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement {

	int _pressCounter;
	BOOL _touched;
	BOOL _touchedAndValueDistinct;
	BOOL _nonAnalog;
	float _deadzone;
	float _value;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;
	/*^block*/id _touchedChangedHandler;

}

@property (assign,getter=areTouchedAndValueDistinct,nonatomic) BOOL touchedAndValueDistinct;              //@synthesize touchedAndValueDistinct=_touchedAndValueDistinct - In the implementation block
@property (assign) BOOL nonAnalog;                                                                        //@synthesize nonAnalog=_nonAnalog - In the implementation block
@property (assign,nonatomic) float deadzone;                                                              //@synthesize deadzone=_deadzone - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                                        //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,copy) id pressedChangedHandler;                                                      //@synthesize pressedChangedHandler=_pressedChangedHandler - In the implementation block
@property (nonatomic,copy) id touchedChangedHandler;                                                      //@synthesize touchedChangedHandler=_touchedChangedHandler - In the implementation block
@property (nonatomic,readonly) float value;                                                               //@synthesize value=_value - In the implementation block
@property (getter=isPressed,nonatomic,readonly) BOOL pressed; 
@property (getter=isTouched,nonatomic,readonly) BOOL touched;                                             //@synthesize touched=_touched - In the implementation block
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setValue:(float)arg1 ;
-(id)description;
-(BOOL)isPressed;
-(BOOL)_setValue:(float)arg1 ;
-(float)value;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)valueChangedHandler;
-(int)getAndResetTimesPressed;
-(id)initWithDescriptionName:(id)arg1 ;
-(void)setNonAnalog:(BOOL)arg1 ;
-(float)deadzone;
-(BOOL)nonAnalog;
-(BOOL)_setTouched:(BOOL)arg1 queue:(id)arg2 ;
-(BOOL)_setTouched:(BOOL)arg1 ;
-(void)setDeadzone:(float)arg1 ;
-(id)pressedChangedHandler;
-(void)setPressedChangedHandler:(id)arg1 ;
-(id)touchedChangedHandler;
-(void)setTouchedChangedHandler:(id)arg1 ;
-(BOOL)isTouched;
-(BOOL)areTouchedAndValueDistinct;
-(void)setTouchedAndValueDistinct:(BOOL)arg1 ;
@end

