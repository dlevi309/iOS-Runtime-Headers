/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointPrismatic : PKPhysicsJoint {

	unsigned* _jointDef : 2PrismaticJointDef;
	unsigned* _joint : 2PrismaticJoint;
	CGPoint _anchor;
	CGVector _axis;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) double lowerDistanceLimit; 
@property (assign,nonatomic) double upperDistanceLimit; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(unsigned*)_joint;
-(void)encodeWithCoder:(id)arg1 ;
-(void)create;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setUpperDistanceLimit:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldEnableLimits;
-(double)lowerDistanceLimit;
-(double)upperDistanceLimit;
-(BOOL)isEqualToPrismaticJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
@end

