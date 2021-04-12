/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class FIUIUnitManager;

@interface FIUIFormattingManager : NSObject {

	FIUIUnitManager* _unitManager;

}

@property (nonatomic,readonly) FIUIUnitManager * unitManager;              //@synthesize unitManager=_unitManager - In the implementation block
+(id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 ;
+(id)percentStringWithNumber:(id)arg1 ;
+(id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 roundingMode:(unsigned long long)arg3 ;
+(id)localizedShortCadenceUnitStringForActivityType:(unsigned long long)arg1 ;
+(id)localizedShortPowerUnitString;
-(id)decimalSeparator;
-(FIUIUnitManager *)unitManager;
-(id)localizedStringWithActiveEnergy:(id)arg1 ;
-(id)localizedShortActiveEnergyUnitString;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 ;
-(id)localizedDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 ;
-(id)localizedPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(id)localizedShortUnitStringForDistanceType:(unsigned long long)arg1 ;
-(id)localizedSpeedUnitString;
-(id)stringWithDuration:(double)arg1 durationFormat:(unsigned long long)arg2 ;
-(id)localizedStringWithActiveEnergy:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(id)localizedSwimmingPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(id)localizedStrokeCountStringWithCount:(long long)arg1 overDistance:(id)arg2 paceFormat:(long long)arg3 ;
-(double)roundedDailyMoveGoalForCalories:(double)arg1 ;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 decimalPrecision:(unsigned long long)arg4 roundingMode:(unsigned long long)arg5 ;
-(id)_localizedStringWithDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 unitStyle:(long long)arg3 decimalPrecision:(unsigned long long)arg4 roundingMode:(unsigned long long)arg5 ;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 decimalPrecision:(unsigned long long)arg4 ;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 roundingMode:(unsigned long long)arg4 ;
-(id)_stringByReplacingThirtyThreeAndAThirdIfNeeded:(id)arg1 distanceInMeters:(double)arg2 distanceUnit:(unsigned long long)arg3 ;
-(unsigned long long)_naturalScaleUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 textCase:(unsigned long long)arg2 ;
-(id)applyTextCase:(unsigned long long)arg1 toString:(id)arg2 ;
-(id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 ;
-(id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 textCase:(unsigned long long)arg3 ;
-(double)speedPerHourWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(id)localizedPaceUnitStringWithDistanceType:(unsigned long long)arg1 distanceUnit:(unsigned long long)arg2 ;
-(id)localizedSpeedUnitStringForActivityType:(id)arg1 ;
-(id)localizedSpeedUnitStringForDistanceUnit:(unsigned long long)arg1 ;
-(id)localizedPaceUnitStringWithDistanceType:(unsigned long long)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(long long)arg3 ;
-(id)localizedStringWithEnergy:(id)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)_energyBurnedUnitStringForUnit:(id)arg1 useShortString:(BOOL)arg2 ;
-(id)localizationKeyForEnergyBaseKey:(id)arg1 ;
-(id)localizedLongActiveEnergyUnitStringWithTextCase:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveGoalTypeForWorkout:(id)arg1 ;
-(id)_localizedTimeDescriptionForWorkout:(id)arg1 withValue:(id*)arg2 appendActivityType:(BOOL)arg3 activityTypeString:(id)arg4 ;
-(id)_localizedEnergyDescriptionForWorkout:(id)arg1 withValue:(id*)arg2 appendActivityType:(BOOL)arg3 activityTypeString:(id)arg4 ;
-(BOOL)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg1 ;
-(id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)_localizedKeyMetricDistanceStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)_localizedKeyMetricDurationStringWithWorkout:(id)arg1 ;
-(id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)localizedNaturalScaleStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 usedUnit:(unsigned long long*)arg4 ;
-(id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 requirePositiveValue:(BOOL)arg3 ;
-(id)localizedStringWithBeatsPerMinute:(double)arg1 requirePositiveValue:(BOOL)arg2 ;
-(id)localizedHeartRateUnitString;
-(id)initWithUnitManager:(id)arg1 ;
-(id)localizationKeyForDistanceBaseKey:(id)arg1 distanceType:(unsigned long long)arg2 ;
-(id)localizedPaceAndUnitStringForSpeed:(double)arg1 activityType:(id)arg2 ;
-(id)localizedPowerUnitStringForPower:(double)arg1 ;
-(id)localizedShortTypeDistinguishingUnitStringForPowerType:(unsigned long long)arg1 unitString:(id)arg2 ;
-(id)localizedDistinguishingPaceUnitStringWithMetricType:(unsigned long long)arg1 distanceType:(unsigned long long)arg2 distanceUnit:(unsigned long long)arg3 paceFormat:(long long)arg4 abbreviated:(BOOL)arg5 ;
-(unsigned long long)userDistanceUnitForSwimmingLapLength;
-(id)localizedStringWithPersonHeight:(id)arg1 unitStyle:(long long)arg2 ;
-(double)energyBurnedInUserUnitForCalories:(double)arg1 ;
-(double)caloriesForEnergyBurnedInUserUnit:(double)arg1 ;
-(id)localizedStringWithBriskMinutes:(id)arg1 ;
-(id)localizedStringWithActiveHours:(id)arg1 ;
-(id)localizedStringWithEnergyInCalories:(double)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)localizedShortTypeDistinguishingUnitStringForEnergyType:(unsigned long long)arg1 ;
-(id)localizedLongActiveEnergyUnitString;
-(id)localizedGoalDescriptionForWorkout:(id)arg1 withValue:(id*)arg2 appendActivityType:(BOOL)arg3 ;
-(id)localizedGoalDescriptionForGoalType:(unsigned long long)arg1 goalValue:(double)arg2 activityType:(id)arg3 ;
-(id)localizedKeyMetricStringForWorkout:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(id)localizedShareTextWithWorkout:(id)arg1 shareValue:(id)arg2 ;
-(id)localizedPaceValueForSplit:(id)arg1 activityType:(id)arg2 ;
-(id)localizedTitleForSplit:(id)arg1 unit:(id)arg2 lapIndex:(long long)arg3 useShortFormat:(BOOL)arg4 ;
-(id)localizedStringWithHeartRate:(id)arg1 ;
-(id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(id)localizedStringWithBeatsPerMinute:(double)arg1 ;
-(id)localizedInSessionDescriptionForElevation:(unsigned long long)arg1 ;
-(id)localizedInSessionDescriptionForGroundElevation:(unsigned long long)arg1 ;
@end

