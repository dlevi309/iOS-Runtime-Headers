/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLength:(double)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(unsigned*)_joint;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(void)encodeWithCoder:(id)arg1 ;
-(void)create;
-(double)length;
-(void)setCollideConnected:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToDistanceJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(BOOL)collideConnected;
@end

