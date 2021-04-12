/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableSample, NSString;

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying> {

	double _activeHours;
	double _activeHoursGoal;
	double _briskMinutes;
	double _briskMinutesGoal;
	long long _cacheIndex;
	double _deepBreathingDuration;
	double _energyBurned;
	double _energyBurnedGoal;
	double _energyBurnedGoalDate;
	long long _flightsClimbed;
	long long _pushCount;
	long long _sequence;
	long long _stepCount;
	double _walkingAndRunningDistance;
	long long _wheelchairUse;
	NSMutableArray* _dailyBriskMinutesStatistics;
	NSMutableArray* _dailyEnergyBurnedStatistics;
	HDCodableSample* _sample;
	SCD_Struct_HD46 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                                  //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasCacheIndex; 
@property (assign,nonatomic) long long cacheIndex;                                      //@synthesize cacheIndex=_cacheIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) double energyBurned;                                       //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) double briskMinutes;                                       //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHours; 
@property (assign,nonatomic) double activeHours;                                        //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) BOOL hasStepCount; 
@property (assign,nonatomic) long long stepCount;                                       //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) double energyBurnedGoal;                                   //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistance; 
@property (assign,nonatomic) double walkingAndRunningDistance;                          //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoalDate; 
@property (assign,nonatomic) double energyBurnedGoalDate;                               //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeepBreathingDuration; 
@property (assign,nonatomic) double deepBreathingDuration;                              //@synthesize deepBreathingDuration=_deepBreathingDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPushCount; 
@property (assign,nonatomic) long long pushCount;                                       //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) BOOL hasFlightsClimbed; 
@property (assign,nonatomic) long long flightsClimbed;                                  //@synthesize flightsClimbed=_flightsClimbed - In the implementation block
@property (assign,nonatomic) BOOL hasWheelchairUse; 
@property (assign,nonatomic) long long wheelchairUse;                                   //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (nonatomic,retain) NSMutableArray * dailyEnergyBurnedStatistics;              //@synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * dailyBriskMinutesStatistics;              //@synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics - In the implementation block
@property (assign,nonatomic) BOOL hasSequence; 
@property (assign,nonatomic) long long sequence;                                        //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutesGoal; 
@property (assign,nonatomic) double briskMinutesGoal;                                   //@synthesize briskMinutesGoal=_briskMinutesGoal - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHoursGoal; 
@property (assign,nonatomic) double activeHoursGoal;                                    //@synthesize activeHoursGoal=_activeHoursGoal - In the implementation block
+(Class)dailyEnergyBurnedStatisticsType;
+(Class)dailyBriskMinutesStatisticsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSequence:(long long)arg1 ;
-(long long)sequence;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)stepCount;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(long long)wheelchairUse;
-(void)setEnergyBurned:(double)arg1 ;
-(void)setEnergyBurnedGoal:(double)arg1 ;
-(void)setBriskMinutes:(double)arg1 ;
-(void)setBriskMinutesGoal:(double)arg1 ;
-(void)setActiveHours:(double)arg1 ;
-(void)setActiveHoursGoal:(double)arg1 ;
-(void)setStepCount:(long long)arg1 ;
-(void)setWalkingAndRunningDistance:(double)arg1 ;
-(void)setPushCount:(long long)arg1 ;
-(void)setWheelchairUse:(long long)arg1 ;
-(double)energyBurned;
-(double)energyBurnedGoal;
-(double)briskMinutes;
-(double)briskMinutesGoal;
-(double)activeHours;
-(double)activeHoursGoal;
-(double)walkingAndRunningDistance;
-(long long)pushCount;
-(BOOL)hasEnergyBurned;
-(BOOL)hasEnergyBurnedGoal;
-(BOOL)hasBriskMinutes;
-(BOOL)hasBriskMinutesGoal;
-(BOOL)hasActiveHours;
-(BOOL)hasActiveHoursGoal;
-(BOOL)hasStepCount;
-(BOOL)hasPushCount;
-(BOOL)hasWalkingAndRunningDistance;
-(BOOL)hasDeepBreathingDuration;
-(BOOL)hasFlightsClimbed;
-(double)deepBreathingDuration;
-(long long)flightsClimbed;
-(BOOL)hasWheelchairUse;
-(double)energyBurnedGoalDate;
-(NSMutableArray *)dailyEnergyBurnedStatistics;
-(NSMutableArray *)dailyBriskMinutesStatistics;
-(long long)cacheIndex;
-(void)setCacheIndex:(long long)arg1 ;
-(void)setHasPushCount:(BOOL)arg1 ;
-(BOOL)hasSample;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(void)setHasBriskMinutesGoal:(BOOL)arg1 ;
-(void)setHasActiveHours:(BOOL)arg1 ;
-(void)setHasActiveHoursGoal:(BOOL)arg1 ;
-(void)setHasWalkingAndRunningDistance:(BOOL)arg1 ;
-(void)setHasStepCount:(BOOL)arg1 ;
-(void)setHasWheelchairUse:(BOOL)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setHasSequence:(BOOL)arg1 ;
-(BOOL)hasSequence;
-(void)setEnergyBurnedGoalDate:(double)arg1 ;
-(void)setFlightsClimbed:(long long)arg1 ;
-(void)setDeepBreathingDuration:(double)arg1 ;
-(void)addDailyEnergyBurnedStatistics:(id)arg1 ;
-(void)addDailyBriskMinutesStatistics:(id)arg1 ;
-(id)decodedEnergyBurnedQuantity;
-(id)decodedWalkingAndRunningDistanceQuantity;
-(id)decodedEnergyBurnedGoalQuantity;
-(BOOL)hasEnergyBurnedGoalDate;
-(id)_decodeCodableActivityStatisticsQuantityInfos:(id)arg1 ;
-(unsigned long long)dailyEnergyBurnedStatisticsCount;
-(void)clearDailyEnergyBurnedStatistics;
-(id)dailyEnergyBurnedStatisticsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dailyBriskMinutesStatisticsCount;
-(void)clearDailyBriskMinutesStatistics;
-(id)dailyBriskMinutesStatisticsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCacheIndex:(BOOL)arg1 ;
-(BOOL)hasCacheIndex;
-(void)setHasEnergyBurnedGoalDate:(BOOL)arg1 ;
-(void)setHasDeepBreathingDuration:(BOOL)arg1 ;
-(void)setHasFlightsClimbed:(BOOL)arg1 ;
-(void)setDailyEnergyBurnedStatistics:(NSMutableArray *)arg1 ;
-(void)setDailyBriskMinutesStatistics:(NSMutableArray *)arg1 ;
@end

