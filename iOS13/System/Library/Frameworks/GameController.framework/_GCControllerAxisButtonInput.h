/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerButtonInput.h>

@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput {

	BOOL _positive;
	GCControllerAxisInput* _axis;

}

@property (assign,nonatomic,__weak) GCControllerAxisInput * axis;              //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,nonatomic,readonly) BOOL positive;                //@synthesize positive=_positive - In the implementation block
-(id)description;
-(float)value;
-(id)collection;
-(GCControllerAxisInput *)axis;
-(void)setAxis:(GCControllerAxisInput *)arg1 ;
-(BOOL)_setValue:(float)arg1 ;
-(BOOL)isPositive;
-(BOOL)isAnalog;
-(BOOL)_setValueFromAxisButton:(float)arg1 queue:(id)arg2 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)initWithAxis:(id)arg1 positive:(BOOL)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 ;
@end

