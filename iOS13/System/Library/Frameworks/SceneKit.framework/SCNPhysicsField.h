/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {

	SCNVector3 _halfExtent;
	double _strength;
	double _falloffExponent;
	double _minimumDistance;
	BOOL _active;
	long long _scope;
	BOOL _usesEllipsoidalExtent;
	BOOL _exclusive;
	SCNVector3 _offset;
	SCNVector3 _direction;
	unsigned long long _categoryBitMask;
	SCNPhysicsWorld* _world;
	SCNNode* _node;
	c3dPhysicsField* _field;

}

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloffExponent; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive; 
@property (assign,nonatomic) SCNVector3 halfExtent; 
@property (assign,nonatomic) BOOL usesEllipsoidalExtent; 
@property (assign,nonatomic) long long scope; 
@property (assign,nonatomic) SCNVector3 offset; 
@property (assign,nonatomic) SCNVector3 direction; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
+(BOOL)supportsSecureCoding;
+(id)field;
+(id)dragField;
+(id)vortexField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)linearGravityField;
+(void)_setDisplayScaleFactor:(double)arg1 ;
+(double)_displayScaleFactor;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)_owner;
-(c3dPhysicsField*)_handle;
-(void)setOffset:(SCNVector3)arg1 ;
-(SCNVector3)direction;
-(void)setDirection:(SCNVector3)arg1 ;
-(SCNVector3)offset;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)_commonInit;
-(void)_setOwner:(id)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(BOOL)isExclusive;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumDistance;
-(void)_removeOwner;
-(c3dPhysicsField*)_createField;
-(void)_setupCommonProperties;
-(void)setHalfExtent:(SCNVector3)arg1 ;
-(void)setFalloffExponent:(double)arg1 ;
-(void)setUsesEllipsoidalExtent:(BOOL)arg1 ;
-(double)falloffExponent;
-(SCNVector3)halfExtent;
-(BOOL)usesEllipsoidalExtent;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(void)_willRemoveFromPhysicsWorld;
-(void)_setWorld:(id)arg1 ;
-(SCNVector3)evalAtLocation:(SCNVector3)arg1 ;
@end

