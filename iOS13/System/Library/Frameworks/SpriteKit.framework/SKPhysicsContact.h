/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject {

	SKPhysicsBody* _bodyA;
	SKPhysicsBody* _bodyB;
	double _collisionImpulse;
	CGPoint _contactPoint;
	CGVector _contactNormal;

}

@property (nonatomic,readonly) SKPhysicsBody * bodyA;                //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,readonly) SKPhysicsBody * bodyB;                //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGPoint contactPoint;                 //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,readonly) CGVector contactNormal;               //@synthesize contactNormal=_contactNormal - In the implementation block
@property (nonatomic,readonly) double collisionImpulse;              //@synthesize collisionImpulse=_collisionImpulse - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
-(CGVector)contactNormal;
-(double)collisionImpulse;
@end

