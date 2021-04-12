/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior {

	SCD_Struct_SC12 _definition;
	btHingeConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNVector3 axisA; 
@property (assign,nonatomic) SCNVector3 anchorA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNVector3 axisB; 
@property (assign,nonatomic) SCNVector3 anchorB; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 axisA:(SCNVector3)arg2 anchorA:(SCNVector3)arg3 bodyB:(id)arg4 axisB:(SCNVector3)arg5 anchorB:(SCNVector3)arg6 ;
+(id)jointWithBody:(id)arg1 axis:(SCNVector3)arg2 anchor:(SCNVector3)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
-(id)initWithBodyA:(id)arg1 axisA:(SCNVector3)arg2 anchorA:(SCNVector3)arg3 bodyB:(id)arg4 axisB:(SCNVector3)arg5 anchorB:(SCNVector3)arg6 ;
-(id)initWithBody:(id)arg1 axis:(SCNVector3)arg2 anchor:(SCNVector3)arg3 ;
-(SCNVector3)axisA;
-(void)setAxisA:(SCNVector3)arg1 ;
-(SCNVector3)axisB;
-(void)setAxisB:(SCNVector3)arg1 ;
-(SCNVector3)anchorA;
-(void)setAnchorA:(SCNVector3)arg1 ;
-(SCNVector3)anchorB;
-(void)setAnchorB:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
@end

