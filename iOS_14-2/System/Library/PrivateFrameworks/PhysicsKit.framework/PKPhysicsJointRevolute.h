/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned*)_joint;
-(void)encodeWithCoder:(id)arg1 ;
-(void)create;
-(double)frictionTorque;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)anchor;
-(void)setRotationSpeed:(double)arg1 ;
-(double)rotationSpeed;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(BOOL)shouldEnableLimits;
-(BOOL)isEqualToRevoluteJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
@end

