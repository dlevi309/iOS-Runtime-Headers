/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _DASActivitySchedulerIntrospecting <NSObject>
@required
-(id)scoresForActivityWithName:(id)arg1;
-(id)currentPredictions;
-(BOOL)deferActivities:(id)arg1;
-(id)policies;
-(id)statistics;
-(id)clasStatus;
-(id)allBudgets;
-(void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;
-(id)runningGroupActivities;
-(void)forceRunActivities:(id)arg1;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;
-(id)runningActivities;
-(id)blockingPoliciesWithParameters:(id)arg1;
-(id)activityRunStatistics;
-(void)enterTestModeWithParameters:(id)arg1;
-(id)submittedActivities;
-(id)delayedRunningActivities;
-(void)pauseWithParameters:(id)arg1;
-(double)remainingBalanceForBudgetWithName:(id)arg1;

@end

