/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)length;
+(id)time;
+(id)mass;
+(id)frequency;
+(id)volume;
+(id)temperature;
+(id)pressure;
+(id)_uniquedDefinedDimensionWithName:(id)arg1 ;
+(id)_uniquedDimensionWithName:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)energy;
+(id)conductance;
+(id)nonConvertibleMole;
+(id)nonConvertibleIU;
+(id)equivalents;
+(id)hearingSensitivity;
+(id)soundPressureLevel;
+(id)titer;
+(id)nullDimension;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)_initWithName:(id)arg1 ;
-(id)unitString;
-(id)_baseDimensions;
-(BOOL)canBeReduced;
-(HKUnit *)reducedUnit;
-(void)setReducibleBaseUnit:(HKBaseUnit *)arg1 ;
-(void)setReducedUnit:(HKUnit *)arg1 ;
-(HKBaseUnit *)reducibleBaseUnit;
-(double)reductionCoefficient;
-(void)setReductionCoefficient:(double)arg1 ;
@end

