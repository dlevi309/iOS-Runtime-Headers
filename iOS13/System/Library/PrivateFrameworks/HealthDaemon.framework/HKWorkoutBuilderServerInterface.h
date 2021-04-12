/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKWorkoutBuilderServerInterface <NSObject>
@required
-(void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_addSamples:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_addWorkoutEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_addMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateDevice:(id)arg1;
-(void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
-(void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
-(void)remote_addDataSourcesWithIdentifiers:(id)arg1;
-(void)remote_removeDataSourcesWithIdentifiers:(id)arg1;
-(void)remote_recoverWithCompletion:(/*^block*/id)arg1;
-(void)remote_setShouldCollectEvents:(BOOL)arg1;

@end

