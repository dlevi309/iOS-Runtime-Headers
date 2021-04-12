/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@interface WFDrawerAnimation : NSObject {

	unsigned long long _type;
	SCD_Union_WF42 _typeParameters;
	double _duration;
	double _delay;
	WFDrawerAnimation* _coordinatedUnitAnimation;

}

@property (nonatomic,readonly) WFDrawerAnimation * coordinatedUnitAnimation; 
+(id)animationWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3 ;
+(id)animationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 ;
+(id)animationUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2 ;
+(id)drawerReleaseAnimationWithInitialVelocity:(double)arg1 ;
-(id)description;
-(id)initWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 calculateCoordinatedAnimation:(BOOL)arg6 ;
-(id)initUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2 ;
-(WFDrawerAnimation *)coordinatedUnitAnimation;
-(void)applyWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

