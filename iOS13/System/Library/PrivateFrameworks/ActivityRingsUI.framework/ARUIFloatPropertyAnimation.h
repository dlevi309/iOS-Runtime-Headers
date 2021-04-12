/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUIFloatPropertyAnimation : ARUIAnimatableObjectPropertyAnimation {

	float _startValue;
	float _endValue;
	float _currentValue;

}

@property (nonatomic,readonly) float startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) float endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 customTimingFunction:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_startValue;
-(id)_endValue;
-(id)_currentValue;
-(float)currentValue;
-(float)startValue;
-(void)_updateWithProgress:(float)arg1 ;
-(float)endValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
@end

