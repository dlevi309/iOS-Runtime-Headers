/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(BOOL)didEnd;
-(id)init;
-(BOOL)didBegin;
-(void)setDidEnd:(BOOL)arg1 ;
-(void)setContactPoint:(CGPoint)arg1 ;
-(CGPoint)contactPoint;
-(CGVector)contactNormal;
-(double)collisionImpulse;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(void)setDidBegin:(BOOL)arg1 ;
-(void)setContactNormal:(CGVector)arg1 ;
-(void)setCollisionImpulse:(double)arg1 ;
@end

