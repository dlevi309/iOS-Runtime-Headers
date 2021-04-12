/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_insertQuantitySeries:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_discardWithCompletion:(/*^block*/id)arg1;

@end

