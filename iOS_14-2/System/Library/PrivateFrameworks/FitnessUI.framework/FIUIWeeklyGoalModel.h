/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;

}
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveNewWeeklyGoals:(id)arg1 ;
@end

