/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ProxyAnalyticsDelegate <NSObject>
@optional
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2;
-(void)performAppPeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)proxyAnalyticsTrainAndScoreInterrupted;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)performPersistentStoreHealthCheckComplete:(id)arg1 error:(id)arg2;
-(void)performAppTrackingPeriodicTasksComplete:(id)arg1 error:(id)arg2;

@end

