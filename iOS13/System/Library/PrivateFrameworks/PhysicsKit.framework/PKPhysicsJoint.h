/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL _inUse;
	BOOL _implicit;
	unsigned* _baseJoint : 2Joint;
	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;

}

@property (assign,nonatomic) unsigned* _joint : 2Joint; 
@property (nonatomic,readonly) unsigned* _jointDef : 2JointDef; 
@property (nonatomic,retain) PKPhysicsBody * bodyA;                          //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * bodyB;                          //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(BOOL)_implicit;
-(unsigned*)_joint;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(BOOL)_inUse;
-(void)set_implicit:(BOOL)arg1 ;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
-(void)set_inUse:(BOOL)arg1 ;
-(BOOL)isEqualToJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
@end

