/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerElement.h>

@class NSString, GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad : GCControllerElement {

	NSString* _descriptionName;
	BOOL _wasZeroed;
	int _timesPressed;
	BOOL _nonAnalog;
	/*^block*/id _valueChangedHandler;
	GCControllerAxisInput* _xAxis;
	GCControllerAxisInput* _yAxis;

}

@property (nonatomic,retain) GCControllerAxisInput * xAxis;                  //@synthesize xAxis=_xAxis - In the implementation block
@property (nonatomic,retain) GCControllerAxisInput * yAxis;                  //@synthesize yAxis=_yAxis - In the implementation block
@property (assign) BOOL nonAnalog;                                           //@synthesize nonAnalog=_nonAnalog - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                           //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * up; 
@property (nonatomic,readonly) GCControllerButtonInput * down; 
@property (nonatomic,readonly) GCControllerButtonInput * left; 
@property (nonatomic,readonly) GCControllerButtonInput * right; 
-(id)description;
-(GCControllerButtonInput *)left;
-(GCControllerButtonInput *)right;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerAxisInput *)xAxis;
-(GCControllerAxisInput *)yAxis;
-(GCControllerButtonInput *)up;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(id)valueChangedHandler;
-(GCControllerButtonInput *)down;
-(void)_fireValueChangedWithQueue:(id)arg1 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 descriptionName:(id)arg3 ;
-(void)setNonAnalog:(BOOL)arg1 ;
-(BOOL)nonAnalog;
-(void)_fireValueChanged;
-(void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 ;
-(void)setXAxis:(GCControllerAxisInput *)arg1 ;
-(void)setYAxis:(GCControllerAxisInput *)arg1 ;
@end

