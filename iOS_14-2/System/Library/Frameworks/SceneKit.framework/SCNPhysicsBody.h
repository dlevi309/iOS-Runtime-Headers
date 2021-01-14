/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	SCNNode* _node;
	double _mass;
	double _charge;
	double _friction;
	double _restitution;
	double _rollingFriction;
	double _continuousCollisionDetectionThreshold;
	SCNPhysicsShape* _physicsShape;
	long long _type;
	double _damping;
	SCNVector4 _angularVelocity;
	double _angularDamping;
	SCNVector3 _velocityFactor;
	SCNVector3 _angularVelocityFactor;
	SCNVector3 _velocity;
	BOOL _ignoreGravity;
	double _linearRestingThreshold;
	double _angularRestingThreshold;
	BOOL _explicitMomentOfInertia;
	SCNVector3 _momentOfInertia;
	SCNVector3 _centerOfMassOffset;
	unsigned long long _categoryBitMask;
	unsigned long long _collisionBitMask;
	unsigned long long _contactTestBitMask;
	BOOL _allowsResting;
	BOOL _isDefaultShape;
	btRigidBody* _body;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) SCNVector3 momentOfInertia; 
@property (assign,nonatomic) BOOL usesDefaultMomentOfInertia; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double rollingFriction; 
@property (nonatomic,retain) SCNPhysicsShape * physicsShape; 
@property (nonatomic,readonly) BOOL isResting; 
@property (assign,nonatomic) BOOL allowsResting; 
@property (assign,nonatomic) SCNVector3 velocity; 
@property (assign,nonatomic) SCNVector4 angularVelocity; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) SCNVector3 velocityFactor; 
@property (assign,nonatomic) SCNVector3 angularVelocityFactor; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) unsigned long long collisionBitMask; 
@property (assign,nonatomic) unsigned long long contactTestBitMask; 
@property (assign,getter=isAffectedByGravity,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) double continuousCollisionDetectionThreshold;                   //@synthesize continuousCollisionDetectionThreshold=_continuousCollisionDetectionThreshold - In the implementation block
@property (assign,nonatomic) SCNVector3 centerOfMassOffset; 
@property (assign,nonatomic) double linearRestingThreshold; 
@property (assign,nonatomic) double angularRestingThreshold; 
+(BOOL)supportsSecureCoding;
+(id)kinematicBody;
+(id)dynamicBody;
+(id)bodyWithType:(long long)arg1 shape:(id)arg2 ;
+(id)staticBody;
-(void)setVelocity:(SCNVector3)arg1 ;
-(double)friction;
-(double)charge;
-(void)resetTransform;
-(SCNVector3)velocity;
-(double)mass;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(btRigidBody*)_handle;
-(SCNVector4)angularVelocity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFriction:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setResting:(BOOL)arg1 ;
-(unsigned long long)collisionBitMask;
-(void)setCollisionBitMask:(unsigned long long)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)setContactTestBitMask:(unsigned long long)arg1 ;
-(void)_activate;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(BOOL)isResting;
-(void)setCharge:(double)arg1 ;
-(id)copy;
-(void)setAngularVelocity:(SCNVector4)arg1 ;
-(id)_owner;
-(double)angularDamping;
-(void)setAngularDamping:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(double)restitution;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setOwner:(id)arg1 ;
-(void)dealloc;
-(void)applyForce:(SCNVector3)arg1 impulse:(BOOL)arg2 ;
-(void)resetToTransform:(SCNMatrix4)arg1 ;
-(void)_removeOwner;
-(C3DSceneRef)sceneRef;
-(btRigidBody*)_createBody;
-(id)initWithType:(long long)arg1 shape:(id)arg2 ;
-(void)setLinearRestingThreshold:(double)arg1 ;
-(void)setAngularRestingThreshold:(double)arg1 ;
-(btCollisionShape*)_shapeHandleWithShape:(id)arg1 owner:(id)arg2 ;
-(void)moveToTransform:(SCNMatrix4)arg1 ;
-(SCNPhysicsShape *)physicsShape;
-(double)rollingFriction;
-(void)setRollingFriction:(double)arg1 ;
-(double)linearRestingThreshold;
-(double)angularRestingThreshold;
-(SCNVector3)velocityFactor;
-(void)setVelocityFactor:(SCNVector3)arg1 ;
-(SCNVector3)angularVelocityFactor;
-(void)setAngularVelocityFactor:(SCNVector3)arg1 ;
-(unsigned long long)contactTestBitMask;
-(BOOL)allowsResting;
-(void)setAllowsResting:(BOOL)arg1 ;
-(BOOL)isAffectedByGravity;
-(BOOL)usesDefaultMomentOfInertia;
-(void)setUsesDefaultMomentOfInertia:(BOOL)arg1 ;
-(SCNVector3)momentOfInertia;
-(void)setMomentOfInertia:(SCNVector3)arg1 ;
-(SCNVector3)centerOfMassOffset;
-(void)setCenterOfMassOffset:(SCNVector3)arg1 ;
-(double)continuousCollisionDetectionThreshold;
-(void)setContinuousCollisionDetectionThreshold:(double)arg1 ;
-(void)setPhysicsShape:(SCNPhysicsShape *)arg1 ;
-(void)_didDecodeSCNPhysicsBody:(id)arg1 ;
-(BOOL)respondsToCollision;
-(void)setLinearSleepingThreshold:(double)arg1 ;
-(double)linearSleepingThreshold;
-(void)setAngularSleepingThreshold:(double)arg1 ;
-(double)angularSleepingThreshold;
-(double)continuousCollisionDetection;
-(void)applyForce:(SCNVector3)arg1 atPosition:(SCNVector3)arg2 impulse:(BOOL)arg3 ;
-(void)applyTorque:(SCNVector4)arg1 impulse:(BOOL)arg2 ;
-(void)clearAllForces;
-(void)moveToPosition:(SCNVector3)arg1 ;
-(void)rotateToAxisAngle:(SCNVector4)arg1 ;
-(void)_ownerWillDie;
@end

