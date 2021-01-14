/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


@protocol HDMenstrualCyclesPluginServerInterface <NSObject>
@required
-(void)remote_fetchScheduledNotificationsWithCompletion:(/*^block*/id)arg1;
-(void)remote_saveDaySummaries:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)remote_saveMenstrualFlowByDayIndex:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_saveLastMenstrualPeriodWithDayIndexRange:(SCD_Struct_HD0)arg1 completion:(/*^block*/id)arg2;
-(void)remote_savePeriodNotYetStartedWithCompletion:(/*^block*/id)arg1;
-(void)remote_savePeriodNotYetEndedWithCompletion:(/*^block*/id)arg1;
-(void)remote_savePeriodStartedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)remote_savePeriodEndedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2;

@end

