/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _HKFactorization, _HKDimension, NSString;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {

	_HKFactorization* _dimensionReduction;
	_HKFactorization* _baseUnitReduction;
	os_unfair_lock_s _dimensionReductionLock;
	double _reducedProportionalSize;
	double _scaleOffset;

}

@property (nonatomic,readonly) _HKFactorization * _baseUnits; 
@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) double scaleOffset;                         //@synthesize scaleOffset=_scaleOffset - In the implementation block
@property (readonly) NSString * unitString; 
+(BOOL)supportsSecureCoding;
+(id)voltUnit;
+(id)moles;
+(id)pascalUnit;
+(id)titerUnit;
+(id)siemenUnit;
+(id)calorieUnit;
+(id)_prefixStringForMetricPrefix:(long long)arg1 ;
+(id)moleUnitWithMolarMass:(double)arg1 ;
+(id)secondUnitWithMetricPrefix:(long long)arg1 ;
+(id)jouleUnitWithMetricPrefix:(long long)arg1 ;
+(id)_voltBaseUnit;
+(id)_internationalUnitWithMassEquivalent;
+(id)_internationalUnitWithVolumeEquivalent;
+(id)equivalentsUnit;
+(id)_unitForStringPrewarmCache;
+(id)internationalUnit;
+(id)smallCalorieUnit;
+(id)cupImperialUnit;
+(id)fluidOunceImperialUnit;
+(id)literUnitWithMetricPrefix:(long long)arg1 ;
+(id)siemenUnitWithMetricPrefix:(long long)arg1 ;
+(id)millimeterOfMercuryUnit;
+(id)pintImperialUnit;
+(id)kilojoulesUnit;
+(id)centimeterOfWaterUnit;
+(id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2 ;
+(id)atmosphereUnit;
+(id)inchesOfMercuryUnit;
+(id)perMilleUnit;
+(id)hertzUnitWithMetricPrefix:(long long)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2 ;
+(void)_prewarmUnitForStringCache;
+(id)_internationalUnitWithMassEquivalent:(double)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2 ;
+(id)_countPerSecondUnit;
+(id)_internationalUnitWithVolumeEquivalent:(double)arg1 ;
+(id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2 ;
+(id)unitFromMassFormatterUnit:(long long)arg1 ;
+(long long)massFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromLengthFormatterUnit:(long long)arg1 ;
+(long long)lengthFormatterUnitFromUnit:(id)arg1 ;
+(BOOL)_isValidUnitString:(id)arg1 ;
+(id)unitFromEnergyFormatterUnit:(long long)arg1 ;
+(long long)energyFormatterUnitFromUnit:(id)arg1 ;
+(id)yardUnit;
+(id)inchUnit;
+(id)gramUnitWithMetricPrefix:(long long)arg1 ;
+(id)countUnit;
+(id)footUnit;
+(id)mileUnit;
+(id)hourUnit;
+(id)dayUnit;
+(id)gramUnit;
+(id)milliseconds;
+(id)decibelAWeightedSoundPressureLevelUnit;
+(id)hertzUnit;
+(id)pascalUnitWithMetricPrefix:(long long)arg1 ;
+(id)kelvinUnit;
+(id)literUnit;
+(id)cupUSUnit;
+(id)meterUnit;
+(id)jouleUnit;
+(id)pintUSUnit;
+(id)secondUnit;
+(id)stoneUnit;
+(id)poundUnit;
+(id)ounceUnit;
+(id)_heightUnitForLocale:(id)arg1 ;
+(id)_distanceUnitForLocale:(id)arg1 ;
+(id)_personMassUnitForLocale:(id)arg1 ;
+(id)_temperatureUnitForLocale:(id)arg1 ;
+(id)_foodEnergyUnitForLocale:(id)arg1 ;
+(id)minuteUnit;
+(id)voltUnitWithMetricPrefix:(long long)arg1 ;
+(id)kilocalorieUnit;
+(id)_nullUnit;
+(id)unitFromString:(id)arg1 ;
+(id)degreeCelsiusUnit;
+(id)degreeFahrenheitUnit;
+(id)fluidOunceUSUnit;
+(id)meterUnitWithMetricPrefix:(long long)arg1 ;
+(id)largeCalorieUnit;
+(id)decibelHearingLevelUnit;
+(id)percentUnit;
+(id)_foundationBaseUnits;
+(id)_countPerMinuteUnit;
-(NSString *)unitString;
-(_HKDimension *)dimension;
-(id)init;
-(double)scaleOffset;
-(id)unitDividedByUnit:(id)arg1 ;
-(id)unitMultipliedByUnit:(id)arg1 ;
-(id)unitRaisedToPower:(long long)arg1 ;
-(double)_convertToBaseUnit:(double)arg1 ;
-(double)_convertFromBaseUnit:(double)arg1 ;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg1 ;
-(double)_reducedProportionalSize;
-(id)reciprocalUnit;
-(BOOL)_isMetricDistance;
-(id)_baseUnitReduction;
-(BOOL)_isCompatibleWithDimension:(id)arg1 ;
-(id)_baseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_HKFactorization *)_baseUnits;
-(id)description;
-(id)_dimensionReduction;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isNull;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2 ;
-(BOOL)_isCompatibleWithUnit:(id)arg1 ;
-(id)_foundationUnit;
@end

