/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKDimension.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, HKBaseUnit, HKUnit;

@interface _HKBaseDimension : _HKDimension <_HKFactor> {

	NSString* _name;
	HKBaseUnit* _reducibleBaseUnit;
	HKUnit* _reducedUnit;
	double _reductionCoefficient;

}

@property (nonatomic,retain) HKBaseUnit * reducibleBaseUnit;              //@synthesize reducibleBaseUnit=_reducibleBaseUnit - In the implementation block
@property (nonatomic,retain) HKUnit * reducedUnit;                        //@synthesize reducedUnit=_reducedUnit - In the implementation block
@property (assign,nonatomic) double reductionCoefficient;                 //@synthesize reductionCoefficient=_reductionCoefficient - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)time;
+(id)frequency;
+(id)_uniquedDimensionWithName:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)temperature;
+(id)mass;
+(id)electricPotentialDifference;
+(id)pressure;
+(id)length;
+(id)_uniquedDefinedDimensionWithName:(id)arg1 ;
+(id)equivalents;
+(id)conductance;
+(id)nonConvertibleMole;
+(id)hearingSensitivity;
+(id)nullDimension;
+(id)nonConvertibleIU;
+(id)soundPressureLevel;
+(id)volume;
+(id)titer;
+(id)energy;
-(HKUnit *)reducedUnit;
-(id)unitString;
-(id)dimension;
-(void)setReducedUnit:(HKUnit *)arg1 ;
-(HKBaseUnit *)reducibleBaseUnit;
-(double)reductionCoefficient;
-(void)setReducibleBaseUnit:(HKBaseUnit *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(BOOL)canBeReduced;
-(void)setReductionCoefficient:(double)arg1 ;
-(unsigned long long)hash;
-(id)_initWithName:(id)arg1 ;
-(id)_baseDimensions;
-(BOOL)isEqual:(id)arg1 ;
@end

