/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint {

	unsigned* _jointDef : 2DistanceJointDef;
	unsigned* _joint : 2DistanceJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) BOOL collideConnected; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(double)length;
-(void)setLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setCollideConnected:(BOOL)arg1 ;
-(unsigned*)_joint;
-(BOOL)isEqualToDistanceJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(BOOL)collideConnected;
@end

