/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL __implicit;
	SKPhysicsBody* bodyA;
	SKPhysicsBody* bodyB;
	double reactionTorque;
	CGVector reactionForce;

}

@property (assign,nonatomic) BOOL _implicit;                        //@synthesize _implicit=__implicit - In the implementation block
@property (nonatomic,retain) SKPhysicsBody * bodyA; 
@property (nonatomic,retain) SKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_implicit;
-(id)initWithCoder:(id)arg1 ;
-(void)set_implicit:(BOOL)arg1 ;
-(void)setBodyA:(SKPhysicsBody *)arg1 ;
-(void)setBodyB:(SKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
@end

