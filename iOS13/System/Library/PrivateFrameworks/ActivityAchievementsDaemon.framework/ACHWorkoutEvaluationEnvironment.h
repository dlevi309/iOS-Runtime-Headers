/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject {

	ACHWorkoutEvaluationWorkoutProperties* _workout;
	unsigned long long _numberOfFirstPartyWorkoutsOver5MinutesWithType;
	unsigned long long _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
	double _bestKilocaloriesForType;

}

@property (nonatomic,readonly) ACHWorkoutEvaluationWorkoutProperties * workout;                                                 //@synthesize workout=_workout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;                               //@synthesize numberOfFirstPartyWorkoutsOver5MinutesWithType=_numberOfFirstPartyWorkoutsOver5MinutesWithType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;              //@synthesize numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek=_numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek - In the implementation block
@property (nonatomic,readonly) double bestKilocaloriesForType;                                                                  //@synthesize bestKilocaloriesForType=_bestKilocaloriesForType - In the implementation block
-(id)valueForUndefinedKey:(id)arg1 ;
-(unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
-(id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4 ;
-(ACHWorkoutEvaluationWorkoutProperties *)workout;
-(unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesWithType;
-(double)bestKilocaloriesForType;
@end

