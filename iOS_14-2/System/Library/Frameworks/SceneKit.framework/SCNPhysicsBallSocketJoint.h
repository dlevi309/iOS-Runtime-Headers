/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {

	SCD_Struct_SC119 _definition;
	btPoint2PointConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNVector3 anchorA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNVector3 anchorB; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
+(id)jointWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNVector3)anchorA;
-(SCNVector3)anchorB;
-(void)dealloc;
-(void)setAnchorA:(SCNVector3)arg1 ;
-(void)setAnchorB:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(id)initWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
-(id)initWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
@end
