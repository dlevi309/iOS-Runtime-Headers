/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings {

	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _initialVelocity;
	BOOL _hasCalculatedDuration;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
+(BOOL)supportsSecureCoding;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(double)epsilon;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isSpringAnimation;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(double)initialVelocity;
-(void)_setDuration:(double)arg1 ;
-(void)_setTimingFunction:(id)arg1 ;
-(void)_setSpeed:(float)arg1 ;
-(void)_setEpsilon:(double)arg1 ;
-(id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9 ;
-(id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 ;
-(BOOL)_hasCalculatedDuration;
-(void)_setMass:(double)arg1 ;
-(void)_setStiffness:(double)arg1 ;
-(void)_setDamping:(double)arg1 ;
-(void)_setInitialVelocity:(double)arg1 ;
@end

