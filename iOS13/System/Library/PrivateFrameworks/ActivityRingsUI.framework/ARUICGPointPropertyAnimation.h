/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_startValue;
-(id)_endValue;
-(id)_currentValue;
-(CGPoint)currentValue;
-(CGPoint)startValue;
-(void)_updateWithProgress:(float)arg1 ;
-(CGPoint)endValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
@end

