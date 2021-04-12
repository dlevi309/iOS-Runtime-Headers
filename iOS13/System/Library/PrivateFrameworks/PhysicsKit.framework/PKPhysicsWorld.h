/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface PKPhysicsWorld : NSObject <NSSecureCoding> {

	unsigned* _world : 2World;
	unsigned _gravity : 2Vec2;
	BOOL _doSleep;
	double _accumulatedDt;
	PKContactListener* _contactListener;
	float _speed;
	NSMutableArray* _bodies;
	NSMutableArray* _joints;
	NSMutableArray* _postStepBlocks;
	PKDebugDrawPacket* drawPacket;

}

@property (assign,nonatomic) BOOL _doSleep; 
@property (nonatomic,retain) NSMutableArray * _bodies; 
@property (nonatomic,readonly) PKCAether* aether; 
@property (nonatomic,readonly) unsigned* _world : 2World; 
@property (assign,nonatomic) unsigned _gravity : 2Vec2; 
@property (assign,nonatomic) CGVector gravity; 
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double velocityThreshold; 
@property (assign,nonatomic) id<PKPhysicsContactDelegate> contactDelegate; 
+(BOOL)supportsSecureCoding;
+(id)world;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGVector)gravity;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)addField:(id)arg1 ;
-(unsigned*)_world;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(id)collisionDelegate;
-(void)setCollisionDelegate:(id)arg1 ;
-(id<PKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<PKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(NSMutableArray *)_bodies;
-(void)debugDraw:(float)arg1 matrix:(_GLKMatrix4)arg2 showsPhysics:(BOOL)arg3 showsOutlineInterior:(BOOL)arg4 showsFields:(BOOL)arg5 ;
-(const PKDebugDrawPacket*)debugDrawPacket;
-(void)removeField:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(unsigned)_gravity;
-(void)_runBlockOutsideOfTimeStep:(/*^block*/id)arg1 ;
-(void)removeAllJoints;
-(id)joints;
-(void)setVelocityThreshold:(double)arg1 ;
-(id)bodies;
-(PKCAether*)aether;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(void)removeAllBodies;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(CGVector)sampleFields:(CGPoint)arg1 ;
-(3)sampleFieldsAt:;
-(void)__init__;
-(void)removeAllFields;
-(double)velocityThreshold;
-(id)sampleFields:(CGRect)arg1 categories:(unsigned)arg2 dataSize:(CGSize)arg3 ;
-(CGVector)evalForce:(unsigned)arg1 point:(CGPoint)arg2 ;
-(BOOL)_doSleep;
-(void)set_bodies:(NSMutableArray *)arg1 ;
-(void)set_doSleep:(BOOL)arg1 ;
-(BOOL)isEqualToWorld:(id)arg1 ;
-(void)set_gravity:(unsigned)arg1 ;
@end

