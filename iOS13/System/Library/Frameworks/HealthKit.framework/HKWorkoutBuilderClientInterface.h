/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKWorkoutBuilderClientInterface <NSObject>
@required
-(void)clientRemote_didUpdateStatistics:(id)arg1;
-(void)clientRemote_didUpdateMetadata:(id)arg1;
-(void)clientRemote_didUpdateEvents:(id)arg1;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
-(void)clientRemote_didFinishRecovery;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
-(void)clientRemote_finishedWorkout:(id)arg1;
-(void)clientRemote_didFailWithError:(id)arg1;

@end

