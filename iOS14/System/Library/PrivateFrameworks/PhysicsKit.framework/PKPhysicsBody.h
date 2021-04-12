/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class PKPhysicsWorld, NSMutableArray, SKNode, NSArray;

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	id<NSObject> _representedObject;
	unsigned* _bodyDef : 2BodyDef;
	unsigned* _body : 2Body;
	PKCFieldRef _field;
	int _dynamicType;
	vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >* _shapes;
	PKPhysicsWorld* _world;
	NSMutableArray* _joints;
	BOOL _inUse;
	int _shapeType;
	shared_ptr<PKPath>* _pathPtr;
	shared_ptr<QuadTree>* _quadTree;
	CGPoint _p0;
	CGPoint _p1;
	CGSize _size;
	double _radius;
	double _edgeRadius;
	CGImageRef _mask;
	shared_ptr<PKPath>* _outline;
	BOOL _isPinned;
	BOOL _allowsRotation;
	/*^block*/id _postStepBlock;

}

@property (nonatomic,__weak,readonly) SKNode * node; 
@property (nonatomic,readonly) vector<PKPhysicsShape ** _shapes; 
@property (assign,nonatomic) unsigned* _bodyDef : 2BodyDef; 
@property (assign,nonatomic) unsigned* _body : 2Body; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double rotation; 
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic; 
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection; 
@property (assign,nonatomic) BOOL allowsRotation; 
@property (assign,nonatomic) BOOL pinned; 
@property (assign,nonatomic) shared_ptr<PKPath>* outline; 
@property (nonatomic,readonly) PKPath* volume; 
@property (assign,getter=isResting,nonatomic) BOOL resting; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double linearDamping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) double density; 
@property (assign,nonatomic) double mass; 
@property (nonatomic,readonly) double area; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) unsigned fieldBitMask; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic) unsigned collisionBitMask; 
@property (assign,nonatomic) unsigned contactTestBitMask; 
@property (nonatomic,readonly) NSArray * joints; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
@property (nonatomic,copy) id postStepBlock;                                     //@synthesize postStepBlock=_postStepBlock - In the implementation block
@property (assign,nonatomic) CGVector velocity; 
@property (assign,nonatomic) double angularVelocity; 
+(BOOL)supportsSecureCoding;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 edgeRadius:(double)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(double)arg3 ;
+(id)bodyWithOutline:(shared_ptr<PKPath>*)arg1 offset:(CGPoint)arg2 ;
+(id)initWithQuadTree:(id)arg1 ;
+(id)initWithMarchingCubes:(PKCGrid=iiiRange=ffffff}vector<unsigned char, std::__1::allocator<unsigned char> >=**compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >=*}}vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >}vector<int, std::__1::allocator<int> >=iicompressed_pair<int *, std::__1::allocator<int> >=i}}vector<signed char, std::__1::allocator<signed char> >=**compressed_pair<signed char *, std::__1::allocator<signed char> >=*}}}Ref)arg1 pixelFrame:(CGRect)arg2 ;
-(SKNode *)node;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)_descriptionClassName;
-(void)setVelocity:(CGVector)arg1 ;
-(double)friction;
-(unsigned*)_body;
-(CGPoint)position;
-(BOOL)pinned;
-(id)_world;
-(double)charge;
-(void)setRadius:(double)arg1 ;
-(shared_ptr<PKPath>*)outline;
-(double)density;
-(id)_joints;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setRotation:(double)arg1 ;
-(BOOL)isDynamic;
-(CGVector)velocity;
-(double)mass;
-(id)init;
-(double)rotation;
-(double)area;
-(void)setDensity:(double)arg1 ;
-(BOOL)_inUse;
-(double)angularVelocity;
-(BOOL)allowsRotation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFriction:(double)arg1 ;
-(BOOL)affectedByGravity;
-(id)initWithBodies:(id)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)set_allowSleep:(BOOL)arg1 ;
-(id)initWithPolygonFromPath:(CGPathRef)arg1 ;
-(id)initWithCircleOfRadius:(double)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(id)initWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
-(id)initWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(id)initWithEdgeLoopFromPath:(CGPathRef)arg1 ;
-(BOOL)usesPreciseCollisionDetection;
-(NSArray *)joints;
-(void)setResting:(BOOL)arg1 ;
-(unsigned)collisionBitMask;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(double)radius;
-(BOOL)isResting;
-(id)description;
-(void)setPostStepBlock:(id)arg1 ;
-(void)setCharge:(double)arg1 ;
-(id)copy;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)setAngularVelocity:(double)arg1 ;
-(vector<PKPhysicsShape **)_shapes;
-(double)angularDamping;
-(void)setLinearDamping:(double)arg1 ;
-(void)setAngularDamping:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 ;
-(void)applyUnscaledForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledForce:(CGVector)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOutline:(shared_ptr<PKPath>*)arg1 ;
-(double)restitution;
-(void)setDynamic:(BOOL)arg1 ;
-(unsigned)fieldBitMask;
-(PKPath*)volume;
-(double)linearDamping;
-(void)applyImpulse:(CGVector)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<NSObject>)representedObject;
-(void)applyForce:(CGPoint)arg1 ;
-(unsigned)contactTestBitMask;
-(id)_descriptionClassName;
-(void)reapplyScale:(double)arg1 yScale:(double)arg2 ;
-(void)applyForce:(CGPoint)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(id)allContactedBodies;
-(id)initWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(float)arg3 ;
-(id)_descriptionFormat;
-(void)clearBox2DData;
-(BOOL)isEqualToBody:(id)arg1 ;
-(BOOL)_allowSleep;
-(id)postStepBlock;
-(unsigned*)_bodyDef;
-(shared_ptr<QuadTree>*)_quadTree;
-(void)set_world:(id)arg1 ;
-(void)set_joints:(id)arg1 ;
-(void)set_inUse:(BOOL)arg1 ;
-(void)set_bodyDef:(unsigned*)arg1 ;
-(void)set_body:(unsigned*)arg1 ;
@end

