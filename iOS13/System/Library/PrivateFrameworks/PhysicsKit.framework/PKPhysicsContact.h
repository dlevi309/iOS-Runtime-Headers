/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {

	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;
	CGPoint _contactPoint;
	CGVector _contactNormal;
	double _impulse;
	BOOL _didBegin;
	BOOL _didEnd;

}

@property (assign) BOOL didBegin; 
@property (assign) BOOL didEnd; 
@property (nonatomic,readonly) PKPhysicsBody * bodyA; 
@property (nonatomic,readonly) PKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGPoint contactPoint; 
@property (nonatomic,readonly) CGVector contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
-(id)init;
-(BOOL)didBegin;
-(BOOL)didEnd;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
-(void)setDidEnd:(BOOL)arg1 ;
-(void)setContactPoint:(CGPoint)arg1 ;
-(CGVector)contactNormal;
-(double)collisionImpulse;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(void)setDidBegin:(BOOL)arg1 ;
-(void)setContactNormal:(CGVector)arg1 ;
-(void)setCollisionImpulse:(double)arg1 ;
@end

