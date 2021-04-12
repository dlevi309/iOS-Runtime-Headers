/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint {

	unsigned* _jointDef : 2RevoluteJointDef;
	unsigned* _joint : 2RevoluteJoint;
	CGPoint _anchor;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) double lowerAngleLimit; 
@property (assign,nonatomic) double upperAngleLimit; 
@property (assign,nonatomic) double frictionTorque; 
@property (assign,nonatomic) double rotationSpeed; 
@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(CGPoint)anchor;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)frictionTorque;
-(unsigned*)_joint;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(BOOL)shouldEnableLimits;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
-(BOOL)isEqualToRevoluteJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
@end

