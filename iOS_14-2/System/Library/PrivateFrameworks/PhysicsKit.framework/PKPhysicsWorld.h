/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpeed:(double)arg1 ;
-(unsigned*)_world;
-(NSMutableArray *)_bodies;
-(void)debugDraw:(float)arg1 matrix:(_GLSKMatrix4)arg2 showsPhysics:(BOOL)arg3 showsOutlineInterior:(BOOL)arg4 showsFields:(BOOL)arg5 ;
-(id)init;
-(double)speed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(unsigned)_gravity;
-(id)joints;
-(id)collisionDelegate;
-(void)setCollisionDelegate:(id)arg1 ;
-(id)bodies;
-(PKCAether*)aether;
-(void)addJoint:(id)arg1 ;
-(id<PKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<PKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copy;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(const PKDebugDrawPacket*)debugDrawPacket;
-(void)_runBlockOutsideOfTimeStep:(/*^block*/id)arg1 ;
-(void)addField:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(void)removeField:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)gravity;
-(void)dealloc;
-(void)removeAllJoints;
-(void)removeAllBodies;
-(void)setVelocityThreshold:(double)arg1 ;
-(BOOL)hasBodies;
-(BOOL)hasFields;
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

