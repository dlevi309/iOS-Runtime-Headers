/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMapTable, NSArray;

@interface UIDynamicItemBehavior : UIDynamicBehavior {

	BOOL _useDefaultViewPropertiesApplier;
	struct {
		unsigned elasticityChanged : 1;
		unsigned frictionChanged : 1;
		unsigned densityChanged : 1;
		unsigned resistanceChanged : 1;
		unsigned angularResistanceChanged : 1;
		unsigned rotationEnabledChanged : 1;
		unsigned useDefaultViewPropertiesApplierChanged : 1;
		unsigned chargeChanged : 1;
		unsigned dynamicChanged : 1;
	}  _stateFlags;
	NSMapTable* _cachedAngularVelocities;
	NSMapTable* _cachedLinearVelocities;
	BOOL _anchored;
	BOOL _allowsRotation;
	double _elasticity;
	double _friction;
	double _density;
	double _resistance;
	double _angularResistance;
	double _charge;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) double elasticity;                            //@synthesize elasticity=_elasticity - In the implementation block
@property (assign,nonatomic) double friction;                              //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double density;                               //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) double resistance;                            //@synthesize resistance=_resistance - In the implementation block
@property (assign,nonatomic) double angularResistance;                     //@synthesize angularResistance=_angularResistance - In the implementation block
@property (assign,nonatomic) double charge;                                //@synthesize charge=_charge - In the implementation block
@property (assign,getter=isAnchored,nonatomic) BOOL anchored;              //@synthesize anchored=_anchored - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                          //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(BOOL)_isPrimitiveBehavior;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(double)friction;
-(double)charge;
-(double)density;
-(id)init;
-(void)setDensity:(double)arg1 ;
-(BOOL)allowsRotation;
-(void)setFriction:(double)arg1 ;
-(NSArray *)items;
-(id)description;
-(void)setCharge:(double)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(double)angularResistance;
-(void)_configureBody:(id)arg1 forView:(id)arg2 ;
-(CGPoint)linearVelocityForItem:(id)arg1 ;
-(void)addLinearVelocity:(CGPoint)arg1 forItem:(id)arg2 ;
-(void)setAngularResistance:(double)arg1 ;
-(void)_setPosition:(CGPoint)arg1 forItem:(id)arg2 ;
-(CGPoint)_positionForItem:(id)arg1 ;
-(double)_angleForItem:(id)arg1 ;
-(void)_setAngle:(double)arg1 forItem:(id)arg2 ;
-(void)addAngularVelocity:(double)arg1 forItem:(id)arg2 ;
-(double)angularVelocityForItem:(id)arg1 ;
-(double)_elasticityForItem:(id)arg1 ;
-(double)_frictionForItem:(id)arg1 ;
-(double)_densityForItem:(id)arg1 ;
-(double)_resistanceForItem:(id)arg1 ;
-(double)_angularResistanceForItem:(id)arg1 ;
-(BOOL)_rotationEnabledForItem:(id)arg1 ;
-(void)applyImpulse:(CGPoint)arg1 toItem:(id)arg2 ;
-(BOOL)useDefaultViewPropertiesApplier;
-(void)setUseDefaultViewPropertiesApplier:(BOOL)arg1 ;
-(void)_associate;
-(double)elasticity;
-(double)resistance;
-(BOOL)isAnchored;
-(void)_dissociate;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)setAnchored:(BOOL)arg1 ;
-(double)_massForItem:(id)arg1 ;
-(void)setElasticity:(double)arg1 ;
-(void)setResistance:(double)arg1 ;
@end

