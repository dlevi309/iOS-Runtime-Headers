/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSBounceSettings : PTSettings {

	double _gravity;
	double _velocity;
	double _elasticity;
	double _friction;
	double _resistance;
	double _multiplier;
	double _minVelocityToAssist;
	double _maxVelocityToAssist;
	double _maxVelocityAssistance;

}

@property (assign) double gravity;                            //@synthesize gravity=_gravity - In the implementation block
@property (assign) double velocity;                           //@synthesize velocity=_velocity - In the implementation block
@property (assign) double elasticity;                         //@synthesize elasticity=_elasticity - In the implementation block
@property (assign) double friction;                           //@synthesize friction=_friction - In the implementation block
@property (assign) double resistance;                         //@synthesize resistance=_resistance - In the implementation block
@property (assign) double multiplier;                         //@synthesize multiplier=_multiplier - In the implementation block
@property (assign) double minVelocityToAssist;                //@synthesize minVelocityToAssist=_minVelocityToAssist - In the implementation block
@property (assign) double maxVelocityToAssist;                //@synthesize maxVelocityToAssist=_maxVelocityToAssist - In the implementation block
@property (assign) double maxVelocityAssistance;              //@synthesize maxVelocityAssistance=_maxVelocityAssistance - In the implementation block
-(void)setVelocity:(double)arg1 ;
-(void)setDefaultValues;
-(double)friction;
-(double)velocity;
-(void)setFriction:(double)arg1 ;
-(double)multiplier;
-(double)elasticity;
-(double)resistance;
-(void)setMultiplier:(double)arg1 ;
-(void)setGravity:(double)arg1 ;
-(double)gravity;
-(void)setElasticity:(double)arg1 ;
-(void)setResistance:(double)arg1 ;
-(void)setMinVelocityToAssist:(double)arg1 ;
-(void)setMaxVelocityToAssist:(double)arg1 ;
-(void)setMaxVelocityAssistance:(double)arg1 ;
-(double)minVelocityToAssist;
-(double)maxVelocityToAssist;
-(double)maxVelocityAssistance;
@end

