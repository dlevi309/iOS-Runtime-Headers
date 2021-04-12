/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@interface WFDrawerAnimation : NSObject {

	unsigned long long _type;
	SCD_Union_WF7 _typeParameters;
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

