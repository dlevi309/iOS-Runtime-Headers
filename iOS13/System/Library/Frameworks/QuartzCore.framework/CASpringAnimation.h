/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(double)initialVelocity;
-(void)setInitialVelocity:(double)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
-(double)settlingDuration;
-(float)_solveForInput:(float)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(double)_timeFunction:(double)arg1 ;
@end

