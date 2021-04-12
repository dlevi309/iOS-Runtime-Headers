/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory {

	double _damping;
	double _mass;
	double _stiffness;
	double _velocity;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double mass;                   //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double velocity;               //@synthesize velocity=_velocity - In the implementation block
+(void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(/*^block*/id)arg5 options:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_newSpringAnimationForKeyPath:(id)arg1 ;
@end

