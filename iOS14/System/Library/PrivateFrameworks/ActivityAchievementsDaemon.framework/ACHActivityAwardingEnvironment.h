/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHActivityAwardingDataProvider, ACHActivityAwardingDateCache;

@interface ACHActivityAwardingEnvironment : NSObject {

	BOOL _valueForKeyLoggingEnabled;
	unsigned long long _experienceType;
	ACHActivityAwardingDataProvider* _dataProvider;
	ACHActivityAwardingDateCache* _dateCache;

}

@property (nonatomic,retain) ACHActivityAwardingDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingDateCache * dateCache;                    //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic) BOOL valueForKeyLoggingEnabled;                              //@synthesize valueForKeyLoggingEnabled=_valueForKeyLoggingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long experienceType;                           //@synthesize experienceType=_experienceType - In the implementation block
-(void)setDataProvider:(ACHActivityAwardingDataProvider *)arg1 ;
-(id)initWithDataProvider:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(ACHActivityAwardingDateCache *)dateCache;
-(ACHActivityAwardingDataProvider *)dataProvider;
-(void)setDateCache:(ACHActivityAwardingDateCache *)arg1 ;
-(unsigned long long)experienceType;
-(void)setExperienceType:(unsigned long long)arg1 ;
-(id)currentMoveStreak;
-(id)bestMoveStreak;
-(id)bestMoveValue;
-(id)bestMoveTimeValue;
-(id)currentExerciseStreak;
-(id)bestExerciseStreak;
-(id)bestExerciseValue;
-(id)currentStandStreak;
-(id)bestStandStreak;
-(id)bestStandValue;
-(void)setCurrentDateComponents:(id)arg1 ;
-(id)dayOfWeekForToday;
-(id)dayOfWeekForLastDayOfFitnessWeek;
-(id)numberOfDaysInThisMonth;
-(id)dayOfMonthForToday;
-(BOOL)valueForKeyLoggingEnabled;
-(id)todayMoveValue;
-(id)todayMoveGoal;
-(id)yesterdayMoveValue;
-(long long)todayActivityMoveMode;
-(id)todayMoveTimeValue;
-(id)todayMoveTimeGoal;
-(id)yesterdayMoveTimeValue;
-(id)todayExerciseValue;
-(id)todayExerciseGoal;
-(id)yesterdayExerciseValue;
-(id)todayStandValue;
-(id)todayStandGoal;
-(id)yesterdayStandValue;
-(id)previousBestMoveGoal;
-(id)bestMoveGoal;
-(id)totalDaysOfMoveHistory;
-(id)totalMoveGoalsMet;
-(id)previousBestMoveStreak;
-(id)currentMovePercentage;
-(id)previousMovePercentage;
-(id)todayAgnosticMoveValue;
-(id)todayAgnosticMoveGoal;
-(id)previousBestMoveTimeGoal;
-(id)bestMoveTimeGoal;
-(id)currentMoveTimePercentage;
-(id)previousMoveTimePercentage;
-(id)previousBestExerciseGoal;
-(id)bestExerciseGoal;
-(id)totalDaysOfExerciseHistory;
-(id)totalExerciseGoalsMet;
-(id)previousBestExerciseStreak;
-(id)currentExercisePercentage;
-(id)previousExercisePercentage;
-(id)previousBestStandGoal;
-(id)bestStandGoal;
-(id)totalDaysOfStandHistory;
-(id)totalStandGoalsMet;
-(id)previousBestStandStreak;
-(id)currentStandPercentage;
-(id)previousStandPercentage;
-(id)currentStreakForAllActivity;
-(id)requiredDaysOfActivityHistoryForRecords;
-(id)requiredDaysOfActivityHistoryForStreaks;
-(void)setValueForKeyLoggingEnabled:(BOOL)arg1 ;
@end

