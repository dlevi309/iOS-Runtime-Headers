/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint {

	double _damping;
	double _frequency;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(void)setDamping:(double)arg1 ;
-(double)damping;
@end

