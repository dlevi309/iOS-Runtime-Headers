/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerAngleLimit;
	double _upperAngleLimit;
	double _frictionTorque;
	double _rotationSpeed;
	CGPoint _anchor;

}

@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableLimits;              //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerAngleLimit;               //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;               //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
@property (assign,nonatomic) double frictionTorque;                //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) double rotationSpeed;                 //@synthesize rotationSpeed=_rotationSpeed - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(CGPoint)anchor;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)frictionTorque;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(BOOL)shouldEnableLimits;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
@end

