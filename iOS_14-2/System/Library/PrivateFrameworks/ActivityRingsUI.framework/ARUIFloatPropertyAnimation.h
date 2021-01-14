/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_endValue;
-(float)endValue;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_startValue;
-(float)currentValue;
-(id)_currentValue;
-(float)startValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
@end

