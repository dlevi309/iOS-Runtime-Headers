/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _DASActivitySchedulerIntrospecting <NSObject>
@required
-(id)policies;
-(id)submittedActivities;
-(void)forceRunActivities:(id)arg1;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;
-(void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;
-(void)enterTestModeWithParameters:(id)arg1;
-(id)runningActivities;
-(id)delayedRunningActivities;
-(id)runningGroupActivities;
-(BOOL)deferActivities:(id)arg1;
-(id)scoresForActivityWithName:(id)arg1;
-(id)activityRunStatistics;
-(id)currentPredictions;
-(double)remainingBalanceForBudgetWithName:(id)arg1;
-(id)blockingPoliciesWithParameters:(id)arg1;
-(void)pauseWithParameters:(id)arg1;

@end

