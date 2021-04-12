/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;

}
-(id)init;
-(id)initWithHealthStore:(id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveNewWeeklyGoals:(id)arg1 ;
@end

