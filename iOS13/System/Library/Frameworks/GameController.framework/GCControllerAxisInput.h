/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {

	BOOL _flipped;
	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;

}

@property (assign,nonatomic) float value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * positive;              //@synthesize positive=_positive - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * negative;              //@synthesize negative=_negative - In the implementation block
@property (assign,getter=isFlipped,nonatomic) BOOL flipped;                   //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                            //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(BOOL)isFlipped;
-(BOOL)_setValue:(float)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setNegative:(GCControllerButtonInput *)arg1 ;
-(GCControllerButtonInput *)negative;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 ;
-(GCControllerButtonInput *)positive;
-(void)setPositive:(GCControllerButtonInput *)arg1 ;
@end

