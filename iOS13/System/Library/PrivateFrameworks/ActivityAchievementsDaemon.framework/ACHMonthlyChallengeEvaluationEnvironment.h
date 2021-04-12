/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHMonthlyChallengeDataSource, ACHDateComponentInterval, NSCalendar;

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject {

	ACHMonthlyChallengeDataSource* _dataSource;
	ACHDateComponentInterval* _dateComponentInterval;
	NSCalendar* _calendar;

}

@property (assign,nonatomic,__weak) ACHMonthlyChallengeDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ACHDateComponentInterval * dateComponentInterval;                     //@synthesize dateComponentInterval=_dateComponentInterval - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double numberOfDaysClosingAllThreeRingsInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingMoveRingInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingExerciseRingInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingStandRingInCurrentMonth; 
@property (nonatomic,readonly) double totalEnergyBurnInCurrentMonth; 
@property (nonatomic,readonly) double totalExerciseMinutesInCurrentMonth; 
@property (nonatomic,readonly) double numberOfWorkoutsCompletedInCurrentMonth; 
@property (nonatomic,readonly) double totalWalkingRunningDistanceInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysDoublingMoveGoalInCurrentMonth; 
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(ACHMonthlyChallengeDataSource *)dataSource;
-(void)setDataSource:(ACHMonthlyChallengeDataSource *)arg1 ;
-(id)initWithMonthlyChallengeDataSource:(id)arg1 dateComponentInterval:(id)arg2 calendar:(id)arg3 ;
-(double)_valueForMonthlyChallengeType:(unsigned long long)arg1 ;
-(ACHDateComponentInterval *)dateComponentInterval;
-(double)numberOfDaysClosingAllThreeRingsInCurrentMonth;
-(double)numberOfDaysClosingMoveRingInCurrentMonth;
-(double)numberOfDaysClosingExerciseRingInCurrentMonth;
-(double)numberOfDaysClosingStandRingInCurrentMonth;
-(double)totalEnergyBurnInCurrentMonth;
-(double)totalExerciseMinutesInCurrentMonth;
-(double)numberOfWorkoutsCompletedInCurrentMonth;
-(double)totalWalkingRunningDistanceInCurrentMonth;
-(double)numberOfDaysDoublingMoveGoalInCurrentMonth;
-(void)setDateComponentInterval:(ACHDateComponentInterval *)arg1 ;
@end

