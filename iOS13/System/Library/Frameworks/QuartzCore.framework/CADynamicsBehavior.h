/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs; 
@property (copy) NSArray * forceFields; 
@property (assign) double timeStep; 
@property (assign) double minimumTimeStep; 
@property (assign) double stoppedVelocity; 
@property (assign) double stoppedAngularVelocity; 
@property (assign) double springScale; 
@property (assign) double drag; 
@property (assign) double angularDrag; 
@property (assign) BOOL reactsToCollisions; 
@property (assign) double collisionInterval; 
+(id)defaultValueForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSArray *)springs;
-(void)setSprings:(NSArray *)arg1 ;
-(NSArray *)forceFields;
-(void)setForceFields:(NSArray *)arg1 ;
-(double)timeStep;
-(void)setTimeStep:(double)arg1 ;
-(double)minimumTimeStep;
-(void)setMinimumTimeStep:(double)arg1 ;
-(double)stoppedVelocity;
-(void)setStoppedVelocity:(double)arg1 ;
-(double)stoppedAngularVelocity;
-(void)setStoppedAngularVelocity:(double)arg1 ;
-(double)collisionInterval;
-(void)setCollisionInterval:(double)arg1 ;
-(double)springScale;
-(void)setSpringScale:(double)arg1 ;
-(double)drag;
-(void)setDrag:(double)arg1 ;
-(double)angularDrag;
-(void)setAngularDrag:(double)arg1 ;
-(BOOL)reactsToCollisions;
-(void)setReactsToCollisions:(BOOL)arg1 ;
@end

