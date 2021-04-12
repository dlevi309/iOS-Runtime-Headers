/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHActivityAwardingDataProvider, ACHActivityAwardingDateCache;

@interface ACHActivityAwardingEnvironment : NSObject {

	BOOL _valueForKeyLoggingEnabled;
	ACHActivityAwardingDataProvider* _dataProvider;
	ACHActivityAwardingDateCache* _dateCache;

}

@property (nonatomic,retain) ACHActivityAwardingDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingDateCache * dateCache;                    //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic) BOOL valueForKeyLoggingEnabled;                              //@synthesize valueForKeyLoggingEnabled=_valueForKeyLoggingEnabled - In the implementation block
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(ACHActivityAwardingDateCache *)dateCache;
-(void)setDataProvider:(ACHActivityAwardingDataProvider *)arg1 ;
-(ACHActivityAwardingDataProvider *)dataProvider;
-(id)initWithDataProvider:(id)arg1 ;
-(id)currentMoveStreak;
-(id)bestMoveStreak;
-(id)bestMoveValue;
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
-(void)setDateCache:(ACHActivityAwardingDateCache *)arg1 ;
@end

