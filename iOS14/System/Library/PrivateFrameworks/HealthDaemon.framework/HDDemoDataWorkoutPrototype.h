/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject {

	unsigned long long _workoutActivityType;
	unsigned long long _goalType;
	HKQuantity* _goal;
	double _startTimeOffsetInDay;
	double _duration;
	double _totalEnergyBurnedInKcal;
	double _totalDistanceWalkingInMiles;
	double _totalDistanceCyclingInMiles;
	double _totalDistanceSwimmingInYards;
	double _swimmingSegmentDistanceInYards;
	long long _totalSwimmingSegments;
	long long _numLapsPerSegment;
	double _swimTimePerSegment;
	double _restTimePerSegment;
	long long _swimmingStrokeStyle;

}

@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                         //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,retain) HKQuantity * goal;                                   //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) double startTimeOffsetInDay;                         //@synthesize startTimeOffsetInDay=_startTimeOffsetInDay - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double totalEnergyBurnedInKcal;                      //@synthesize totalEnergyBurnedInKcal=_totalEnergyBurnedInKcal - In the implementation block
@property (assign,nonatomic) double totalDistanceWalkingInMiles;                  //@synthesize totalDistanceWalkingInMiles=_totalDistanceWalkingInMiles - In the implementation block
@property (assign,nonatomic) double totalDistanceCyclingInMiles;                  //@synthesize totalDistanceCyclingInMiles=_totalDistanceCyclingInMiles - In the implementation block
@property (assign,nonatomic) double totalDistanceSwimmingInYards;                 //@synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards - In the implementation block
@property (assign,nonatomic) double swimmingSegmentDistanceInYards;               //@synthesize swimmingSegmentDistanceInYards=_swimmingSegmentDistanceInYards - In the implementation block
@property (assign,nonatomic) long long totalSwimmingSegments;                     //@synthesize totalSwimmingSegments=_totalSwimmingSegments - In the implementation block
@property (assign,nonatomic) long long numLapsPerSegment;                         //@synthesize numLapsPerSegment=_numLapsPerSegment - In the implementation block
@property (assign,nonatomic) double swimTimePerSegment;                           //@synthesize swimTimePerSegment=_swimTimePerSegment - In the implementation block
@property (assign,nonatomic) double restTimePerSegment;                           //@synthesize restTimePerSegment=_restTimePerSegment - In the implementation block
@property (assign,nonatomic) long long swimmingStrokeStyle;                       //@synthesize swimmingStrokeStyle=_swimmingStrokeStyle - In the implementation block
+(id)HIITPrototype;
+(id)functionalStrengthTrainingPrototype;
+(id)pickRandomWorkoutFrom:(id)arg1 ;
+(id)dancePrototype;
+(id)yogaPrototype;
+(id)swimmingPrototype;
+(id)runningPrototype;
+(id)walkingPrototype;
+(id)coolDownPrototype;
+(id)ellipticalPrototype;
+(id)coreTrainingPrototype;
+(id)hikingPrototype;
+(id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 ;
+(id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 distanceSwimmingSegment:(double)arg10 totalSwimmingSegments:(long long)arg11 numLapsPerSegment:(long long)arg12 swimTimePerSegment:(double)arg13 restTimePerSegment:(double)arg14 swimmingStrokeStyle:(long long)arg15 ;
+(id)thirdPartyWorkoutPrototype;
+(id)yogaAndRunningPrototypes;
-(HKQuantity *)goal;
-(void)setDuration:(double)arg1 ;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(unsigned long long)workoutActivityType;
-(void)setGoalType:(unsigned long long)arg1 ;
-(double)duration;
-(void)setSwimmingStrokeStyle:(long long)arg1 ;
-(long long)swimmingStrokeStyle;
-(double)startTimeOffsetInDay;
-(void)setStartTimeOffsetInDay:(double)arg1 ;
-(double)totalEnergyBurnedInKcal;
-(void)setTotalEnergyBurnedInKcal:(double)arg1 ;
-(double)totalDistanceWalkingInMiles;
-(void)setTotalDistanceWalkingInMiles:(double)arg1 ;
-(double)totalDistanceCyclingInMiles;
-(void)setTotalDistanceCyclingInMiles:(double)arg1 ;
-(double)totalDistanceSwimmingInYards;
-(void)setTotalDistanceSwimmingInYards:(double)arg1 ;
-(double)swimmingSegmentDistanceInYards;
-(void)setSwimmingSegmentDistanceInYards:(double)arg1 ;
-(long long)totalSwimmingSegments;
-(void)setTotalSwimmingSegments:(long long)arg1 ;
-(long long)numLapsPerSegment;
-(void)setNumLapsPerSegment:(long long)arg1 ;
-(double)swimTimePerSegment;
-(void)setSwimTimePerSegment:(double)arg1 ;
-(double)restTimePerSegment;
-(void)setRestTimePerSegment:(double)arg1 ;
@end
