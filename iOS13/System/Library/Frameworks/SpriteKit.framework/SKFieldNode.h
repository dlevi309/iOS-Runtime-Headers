/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKTexture, SKRegion;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	BOOL _exclusive;
	float _animationSpeed;
	float _smoothness;
	SKTexture* _texture;
	SKRegion* _region;

}

@property (nonatomic,retain) SKRegion * region;                              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness;                               //@synthesize smoothness=_smoothness - In the implementation block
@property (assign,nonatomic) float animationSpeed;                           //@synthesize animationSpeed=_animationSpeed - In the implementation block
@property (nonatomic,retain) SKTexture * texture;                            //@synthesize texture=_texture - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dragField;
+(id)vortexField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)velocityFieldWithTexture:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(SKRegion *)region;
-()direction;
-(void)setDirection:;
-(void)setTexture:(SKTexture *)arg1 ;
-(float)falloff;
-(void)setFalloff:(float)arg1 ;
-(SKTexture *)texture;
-(void)setExclusive:(BOOL)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id)field;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(void)setRegion:(SKRegion *)arg1 ;
-(void)setStrength:(float)arg1 ;
-(float)strength;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(float)smoothness;
-(float)animationSpeed;
-(BOOL)isExclusive;
-(void)setPhysicsField:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
@end

