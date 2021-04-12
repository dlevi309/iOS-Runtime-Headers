/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerElement.h>

@class NSString;

@interface GCControllerButtonInput : GCControllerElement {

	NSString* _descriptionName;
	int _pressCounter;
	BOOL _nonAnalog;
	float _value;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;

}

@property (assign) BOOL nonAnalog;                                         //@synthesize nonAnalog=_nonAnalog - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                         //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,copy) id pressedChangedHandler;                       //@synthesize pressedChangedHandler=_pressedChangedHandler - In the implementation block
@property (nonatomic,readonly) float value;                                //@synthesize value=_value - In the implementation block
@property (getter=isPressed,nonatomic,readonly) BOOL pressed; 
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(BOOL)isPressed;
-(BOOL)_setValue:(float)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)initWithDescriptionName:(id)arg1 ;
-(void)setNonAnalog:(BOOL)arg1 ;
-(BOOL)nonAnalog;
-(id)pressedChangedHandler;
-(void)setPressedChangedHandler:(id)arg1 ;
@end

