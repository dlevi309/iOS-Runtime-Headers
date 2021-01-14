/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation {

	CGPoint _startValue;
	CGPoint _endValue;
	CGPoint _currentValue;

}

@property (nonatomic,readonly) CGPoint startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) CGPoint endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CGPoint currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingCGPointValue:(CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_endValue;
-(CGPoint)endValue;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_startValue;
-(CGPoint)currentValue;
-(id)_currentValue;
-(CGPoint)startValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
@end

