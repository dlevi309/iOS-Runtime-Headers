/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVelocity:(double)arg1 ;
-(double)stiffness;
-(double)durationForEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)velocity;
-(double)mass;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(void)setMass:(double)arg1 ;
-(id)_newSpringAnimationForKeyPath:(id)arg1 ;
@end

