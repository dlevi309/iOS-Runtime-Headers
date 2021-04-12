/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAxis:(GCControllerAxisInput *)arg1 ;
-(GCControllerAxisInput *)axis;
-(id)collection;
-(BOOL)_setValue:(float)arg1 ;
-(float)value;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 queue:(id)arg2 ;
-(BOOL)_commitPendingValueOnQueue:(id)arg1 ;
-(id)initWithAxis:(id)arg1 positive:(BOOL)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 ;
-(void)_setPendingValue:(float)arg1 ;
-(BOOL)isPositive;
@end

