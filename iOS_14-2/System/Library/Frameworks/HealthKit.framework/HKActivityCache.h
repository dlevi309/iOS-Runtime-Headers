/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, HKQuantity, NSDate, NSArray;

@interface HKActivityCache : HKSample <NSCopying> {

	long long _cacheIndex;
	NSDateComponents* _dateComponents;
	long long _stepCount;
	long long _pushCount;
	long long _wheelchairUse;
	double _deepBreathingDuration;
	HKQuantity* _energyBurned;
	double _moveMinutes;
	double _briskMinutes;
	double _activeHours;
	HKQuantity* _energyBurnedGoal;
	NSDate* _energyBurnedGoalDate;
	double _moveMinutesGoal;
	NSDate* _moveMinutesGoalDate;
	double _briskMinutesGoal;
	NSDate* _briskMinutesGoalDate;
	double _activeHoursGoal;
	NSDate* _activeHoursGoalDate;
	HKQuantity* _walkingAndRunningDistance;
	long long _flightsClimbed;
	NSArray* _dailyEnergyBurnedStatistics;
	NSArray* _dailyMoveMinutesStatistics;
	NSArray* _dailyBriskMinutesStatistics;
	long long _activityMoveMode;
	unsigned long long _knownFields;
	long long _sequence;

}

@property (setter=_setCacheIndex:) long long cacheIndex; 
@property (setter=_setSequence:) long long sequence;                                                          //@synthesize sequence=_sequence - In the implementation block
@property (setter=_setEnergyBurned:,retain) HKQuantity * energyBurned; 
@property (setter=_setMoveMinutes:) double moveMinutes; 
@property (setter=_setBriskMinutes:) double briskMinutes; 
@property (setter=_setActiveHours:) double activeHours; 
@property (setter=_setEnergyBurnedGoal:,retain) HKQuantity * energyBurnedGoal; 
@property (setter=_setMoveMinutesGoal:) double moveMinutesGoal; 
@property (setter=_setBriskMinutesGoal:) double briskMinutesGoal; 
@property (setter=_setActiveHoursGoal:) double activeHoursGoal; 
@property (setter=_setStepCount:) long long stepCount; 
@property (setter=_setDeepBreathingDuration:) double deepBreathingDuration; 
@property (setter=_setWalkingAndRunningDistance:,retain) HKQuantity * walkingAndRunningDistance; 
@property (setter=_setPushCount:) long long pushCount; 
@property (setter=_setWheelchairUse:) long long wheelchairUse; 
@property (setter=_setFlightsClimbed:) long long flightsClimbed; 
@property (setter=_setDailyEnergyBurnedStatistics:,copy) NSArray * dailyEnergyBurnedStatistics; 
@property (setter=_setDailyMoveMinutesStatistics:,copy) NSArray * dailyMoveMinutesStatistics; 
@property (setter=_setDailyBriskMinutesStatistics:,copy) NSArray * dailyBriskMinutesStatistics; 
@property (setter=_setActivityMoveMode:) long long activityMoveMode; 
@property (readonly) NSDateComponents * dateComponents; 
@property (readonly) BOOL hasDateComponents; 
@property (readonly) BOOL hasEnergyBurned; 
@property (readonly) BOOL hasMoveMinutes; 
@property (readonly) BOOL hasBriskMinutes; 
@property (readonly) BOOL hasActiveHours; 
@property (readonly) NSDate * energyBurnedGoalDate; 
@property (readonly) BOOL hasEnergyBurnedGoal; 
@property (readonly) NSDate * moveMinutesGoalDate; 
@property (readonly) BOOL hasMoveMinutesGoal; 
@property (readonly) BOOL hasBriskMinutesGoal; 
@property (readonly) NSDate * briskMinutesGoalDate;                                                           //@synthesize briskMinutesGoalDate=_briskMinutesGoalDate - In the implementation block
@property (readonly) BOOL hasBriskMinutesGoalDate; 
@property (readonly) BOOL hasActiveHoursGoal; 
@property (readonly) NSDate * activeHoursGoalDate;                                                            //@synthesize activeHoursGoalDate=_activeHoursGoalDate - In the implementation block
@property (readonly) BOOL hasActiveHoursGoalDate; 
@property (readonly) BOOL hasStepCount; 
@property (readonly) BOOL hasWalkingAndRunningDistance; 
@property (readonly) BOOL hasPushCount; 
@property (readonly) BOOL hasWheelchairUse; 
@property (readonly) BOOL hasDeepBreathingDuration; 
@property (readonly) BOOL hasFlightsClimbed; 
@property (readonly) BOOL hasDailyEnergyBurnedStatistics; 
@property (readonly) BOOL hasDailyMoveMinutesStatistics; 
@property (readonly) BOOL hasDailyBriskMinutesStatistics; 
@property (readonly) unsigned long long knownFields; 
+(BOOL)supportsSecureCoding;
+(id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8 ;
+(BOOL)_isConcreteObjectClass;
+(id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 metadata:(id)arg5 ;
+(id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5 ;
-(long long)pushCount;
-(long long)wheelchairUse;
-(long long)activityMoveMode;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)energyBurned;
-(HKQuantity *)energyBurnedGoal;
-(double)briskMinutes;
-(double)briskMinutesGoal;
-(double)activeHours;
-(double)activeHoursGoal;
-(void)_setPushCount:(long long)arg1 ;
-(HKQuantity *)walkingAndRunningDistance;
-(void)_setWheelchairUse:(long long)arg1 ;
-(double)energyBurnedGoalPercentage;
-(double)briskMinutesGoalPercentage;
-(double)activeHoursGoalPercentage;
-(long long)sequence;
-(NSDateComponents *)dateComponents;
-(long long)cacheIndex;
-(void)reset;
-(long long)stepCount;
-(id)initWithCoder:(id)arg1 ;
-(id)_valueDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setEnergyBurned:(id)arg1 ;
-(void)_setEnergyBurnedGoal:(id)arg1 ;
-(BOOL)hasEnergyBurned;
-(void)_setWalkingAndRunningDistance:(id)arg1 ;
-(double)_energyBurnedInKilocalories;
-(BOOL)hasEnergyBurnedGoal;
-(double)_energyBurnedGoalInKilocalories;
-(BOOL)hasMoveMinutes;
-(BOOL)hasMoveMinutesGoal;
-(BOOL)hasBriskMinutes;
-(BOOL)hasBriskMinutesGoal;
-(BOOL)hasActiveHours;
-(BOOL)hasActiveHoursGoal;
-(BOOL)hasStepCount;
-(BOOL)hasPushCount;
-(BOOL)hasWalkingAndRunningDistance;
-(double)_walkingAndRunningDistanceInMeters;
-(BOOL)hasFlightsClimbed;
-(BOOL)hasDeepBreathingDuration;
-(double)moveMinutes;
-(double)moveMinutesGoal;
-(double)deepBreathingDuration;
-(long long)flightsClimbed;
-(BOOL)hasWheelchairUse;
-(void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2 ;
-(void)_setMoveMinutesGoal:(double)arg1 date:(id)arg2 ;
-(void)_setBriskMinutesGoal:(double)arg1 date:(id)arg2 ;
-(void)_setActiveHoursGoal:(double)arg1 date:(id)arg2 ;
-(void)_setMoveMinutes:(double)arg1 ;
-(void)_setBriskMinutes:(double)arg1 ;
-(void)_setActiveHours:(double)arg1 ;
-(void)_setStepCount:(long long)arg1 ;
-(void)_setDeepBreathingDuration:(double)arg1 ;
-(void)_setCacheIndex:(long long)arg1 ;
-(NSDate *)energyBurnedGoalDate;
-(NSDate *)moveMinutesGoalDate;
-(void)_setBriskMinutesGoal:(double)arg1 ;
-(void)_setActiveHoursGoal:(double)arg1 ;
-(void)_setFlightsClimbed:(long long)arg1 ;
-(NSArray *)dailyEnergyBurnedStatistics;
-(void)_setDailyEnergyBurnedStatistics:(id)arg1 ;
-(NSArray *)dailyMoveMinutesStatistics;
-(void)_setActivityMoveMode:(long long)arg1 ;
-(void)_setDailyMoveMinutesStatistics:(id)arg1 ;
-(NSArray *)dailyBriskMinutesStatistics;
-(void)_setDailyBriskMinutesStatistics:(id)arg1 ;
-(void)_setSequence:(long long)arg1 ;
-(void)_setActiveHoursGoalDateOnly:(id)arg1 ;
-(void)_setBriskMinutesGoalDateOnly:(id)arg1 ;
-(BOOL)hasBriskMinutesGoalDate;
-(BOOL)hasActiveHoursGoalDate;
-(BOOL)_isEqualToActivityCache:(id)arg1 ;
-(BOOL)hasDateComponents;
-(void)_setEnergyBurnedGoalOnly:(id)arg1 ;
-(void)_setEnergyBurnedGoalDateOnly:(id)arg1 ;
-(void)_setMoveMinutesGoal:(double)arg1 ;
-(void)_setMoveMinutesGoalOnly:(double)arg1 ;
-(void)_setMoveMinutesGoalDateOnly:(id)arg1 ;
-(void)_setBriskMinutesGoalOnly:(double)arg1 ;
-(void)_setActiveHoursGoalOnly:(double)arg1 ;
-(double)moveMinutesGoalPercentage;
-(BOOL)hasDailyEnergyBurnedStatistics;
-(BOOL)hasDailyMoveMinutesStatistics;
-(BOOL)hasDailyBriskMinutesStatistics;
-(unsigned long long)knownFields;
-(NSDate *)briskMinutesGoalDate;
-(NSDate *)activeHoursGoalDate;
@end

