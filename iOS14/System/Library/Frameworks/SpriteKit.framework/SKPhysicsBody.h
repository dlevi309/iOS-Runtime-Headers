/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	BOOL _dynamic;
	BOOL _usesPreciseCollisionDetection;
	BOOL _allowsRotation;
	BOOL _pinned;
	BOOL _resting;
	BOOL _affectedByGravity;
	unsigned _fieldBitMask;
	unsigned _categoryBitMask;
	unsigned _collisionBitMask;
	unsigned _contactTestBitMask;
	double _friction;
	double _charge;
	double _restitution;
	double _linearDamping;
	double _angularDamping;
	double _density;
	double _mass;
	double _area;
	NSArray* _joints;
	SKNode* _node;
	double _angularVelocity;
	CGVector _velocity;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection;              //@synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                             //@synthesize allowsRotation=_allowsRotation - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                     //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isResting,nonatomic) BOOL resting;                   //@synthesize resting=_resting - In the implementation block
@property (assign,nonatomic) double friction;                                 //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double charge;                                   //@synthesize charge=_charge - In the implementation block
@property (assign,nonatomic) double restitution;                              //@synthesize restitution=_restitution - In the implementation block
@property (assign,nonatomic) double linearDamping;                            //@synthesize linearDamping=_linearDamping - In the implementation block
@property (assign,nonatomic) double angularDamping;                           //@synthesize angularDamping=_angularDamping - In the implementation block
@property (assign,nonatomic) double density;                                  //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) double mass;                                     //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) double area;                                   //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) BOOL affectedByGravity;                          //@synthesize affectedByGravity=_affectedByGravity - In the implementation block
@property (assign,nonatomic) unsigned fieldBitMask;                           //@synthesize fieldBitMask=_fieldBitMask - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                        //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
@property (assign,nonatomic) unsigned collisionBitMask;                       //@synthesize collisionBitMask=_collisionBitMask - In the implementation block
@property (assign,nonatomic) unsigned contactTestBitMask;                     //@synthesize contactTestBitMask=_contactTestBitMask - In the implementation block
@property (nonatomic,readonly) NSArray * joints;                              //@synthesize joints=_joints - In the implementation block
@property (nonatomic,__weak,readonly) SKNode * node;                          //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGVector velocity;                               //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double angularVelocity;                          //@synthesize angularVelocity=_angularVelocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 accuracy:(float)arg4 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 ;
+(id)bodyWithEdgeLoopFromRect:(CGRect)arg1 ;
+(id)bodyWithTexture:(id)arg1 size:(CGSize)arg2 ;
-(void)setVelocity:(CGVector)arg1 ;
-(double)friction;
-(BOOL)pinned;
-(double)charge;
-(double)density;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)isDynamic;
-(CGVector)velocity;
-(double)mass;
-(SKNode *)node;
-(double)area;
-(void)setDensity:(double)arg1 ;
-(double)angularVelocity;
-(BOOL)allowsRotation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFriction:(double)arg1 ;
-(BOOL)affectedByGravity;
-(void)setMass:(double)arg1 ;
-(BOOL)usesPreciseCollisionDetection;
-(NSArray *)joints;
-(void)setResting:(BOOL)arg1 ;
-(unsigned)collisionBitMask;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(BOOL)isResting;
-(void)setCharge:(double)arg1 ;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)setAngularVelocity:(double)arg1 ;
-(double)angularDamping;
-(void)setLinearDamping:(double)arg1 ;
-(void)setAngularDamping:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)restitution;
-(void)setDynamic:(BOOL)arg1 ;
-(unsigned)fieldBitMask;
-(double)linearDamping;
-(void)applyImpulse:(CGVector)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyForce:(CGVector)arg1 ;
-(unsigned)contactTestBitMask;
-(void)applyForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(id)allContactedBodies;
@end

