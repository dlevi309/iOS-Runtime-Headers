/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDDatabaseTransactionContext, HDProfile, ACHWorkoutUtility, ACHActivitySummaryUtility;

@interface ACHMonthlyChallengeDataSource : NSObject {

	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	ACHWorkoutUtility* _workoutUtility;
	ACHActivitySummaryUtility* _activitySummaryUtility;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHWorkoutUtility * workoutUtility;                              //@synthesize workoutUtility=_workoutUtility - In the implementation block
@property (assign,nonatomic,__weak) ACHActivitySummaryUtility * activitySummaryUtility;              //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext;                           //@synthesize databaseContext=_databaseContext - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(ACHWorkoutUtility *)workoutUtility;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(HDProfile *)profile;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(HDDatabaseTransactionContext *)databaseContext;
-(void)setWorkoutUtility:(ACHWorkoutUtility *)arg1 ;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3 ;
-(long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1 ;
-(double)caloriesDuringDateComponentInterval:(id)arg1 ;
-(double)moveTimeDuringDateComponentInterval:(id)arg1 ;
-(double)exerciseMinutesDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1 ;
-(long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1 ;
-(id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3 ;
@end

