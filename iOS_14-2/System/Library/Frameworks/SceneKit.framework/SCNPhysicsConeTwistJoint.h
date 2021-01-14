/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior {

	SCD_Struct_SC120 _definition;
	btConeTwistConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNMatrix4 frameA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNMatrix4 frameB; 
@property (assign,nonatomic) double maximumAngularLimit1; 
@property (assign,nonatomic) double maximumAngularLimit2; 
@property (assign,nonatomic) double maximumTwistAngle; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 frameA:(SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(SCNMatrix4)arg4 ;
+(id)jointWithBody:(id)arg1 frame:(SCNMatrix4)arg2 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
-(void)encodeWithCoder:(id)arg1 ;
-(SCNMatrix4)frameA;
-(SCNMatrix4)frameB;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setMaximumAngularLimit1:(double)arg1 ;
-(void)setMaximumAngularLimit2:(double)arg1 ;
-(void)setMaximumTwistAngle:(double)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(id)initWithBodyA:(id)arg1 frameA:(SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(SCNMatrix4)arg4 ;
-(id)initWithBody:(id)arg1 frame:(SCNMatrix4)arg2 ;
-(void)setFrameA:(SCNMatrix4)arg1 ;
-(void)setFrameB:(SCNMatrix4)arg1 ;
-(double)maximumAngularLimit1;
-(double)maximumAngularLimit2;
-(double)maximumTwistAngle;
@end

