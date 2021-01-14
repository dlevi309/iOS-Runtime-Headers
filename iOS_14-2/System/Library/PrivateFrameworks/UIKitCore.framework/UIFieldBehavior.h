/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class PKPhysicsField, UIRegion, NSArray;

@interface UIFieldBehavior : UIDynamicBehavior {

	PKPhysicsField* _field;
	SCD_Struct_UI34 _fieldFlags;
	UIRegion* _region;

}

@property (nonatomic,readonly) PKPhysicsField * _field; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) UIRegion * region;                      //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) double minimumRadius; 
@property (assign,nonatomic) CGVector direction; 
@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)_isPrimitiveBehavior;
+(id)dragField;
+(id)radialGravityFieldWithPosition:(CGPoint)arg1 ;
+(id)linearGravityFieldWithVector:(CGVector)arg1 ;
+(id)velocityFieldWithVector:(CGVector)arg1 ;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)electricField;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)fieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)vortexField;
+(id)springField;
+(id)magneticField;
-(void)removeItem:(id)arg1 ;
-(CGVector)direction;
-(double)strength;
-(void)addItem:(id)arg1 ;
-(CGPoint)position;
-(PKPhysicsField *)_field;
-(UIRegion *)region;
-(double)falloff;
-(void)setStrength:(double)arg1 ;
-(void)setRegion:(UIRegion *)arg1 ;
-(double)minimumRadius;
-(id)init;
-(void)setDirection:(CGVector)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_changedParameter;
-(NSArray *)items;
-(void)setMinimumRadius:(double)arg1 ;
-(id)_initWithField:(id)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(void)_associate;
-(double)smoothness;
-(void)setPosition:(CGPoint)arg1 ;
-(void)_dissociate;
-(void)setFalloff:(double)arg1 ;
-(BOOL)isEnabled;
-(void)setSmoothness:(double)arg1 ;
-(void)_addFieldItem:(id)arg1 ;
-(double)animationSpeed;
@end

