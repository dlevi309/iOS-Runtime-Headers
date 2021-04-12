/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {

	float _minValue;
	float _maxValue;
	BOOL _horizontal;
	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;

}

@property (assign,nonatomic) float value;                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * positive;               //@synthesize positive=_positive - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * negative;               //@synthesize negative=_negative - In the implementation block
@property (assign,getter=isHorizontal,nonatomic) BOOL horizontal;              //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                             //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(GCControllerButtonInput *)negative;
-(void)setValue:(float)arg1 ;
-(id)description;
-(id)initWithCollection:(id)arg1 ;
-(BOOL)isHorizontal;
-(float)maxValue;
-(void)setNegative:(GCControllerButtonInput *)arg1 ;
-(BOOL)_setValue:(float)arg1 ;
-(float)minValue;
-(float)value;
-(void)setPositive:(GCControllerButtonInput *)arg1 ;
-(GCControllerButtonInput *)positive;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)valueChangedHandler;
-(int)getAndResetTimesPressed;
-(id)initWithCollection:(id)arg1 horizontal:(BOOL)arg2 ;
-(void)setMinValue:(float)arg1 andMaxValue:(float)arg2 ;
@end

