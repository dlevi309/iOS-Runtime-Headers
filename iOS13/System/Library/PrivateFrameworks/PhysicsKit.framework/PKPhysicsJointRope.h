/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRope : PKPhysicsJoint {

	unsigned* _jointDef : 2RopeJointDef;
	unsigned* _joint : 2RopeJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) double maxLength; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
-(unsigned*)_joint;
-(BOOL)isEqualToRopeJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
@end

