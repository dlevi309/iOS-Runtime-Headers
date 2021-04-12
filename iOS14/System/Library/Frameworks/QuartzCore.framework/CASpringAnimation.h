/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) double velocity; 
@property (assign) double mass; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (assign) double initialVelocity; 
@property (readonly) double settlingDuration; 
+(id)defaultValueForKey:(id)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(double)stiffness;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(double)durationForEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)initialVelocity;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(double)velocity;
-(double)mass;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(double)_timeFunction:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)settlingDuration;
@end

