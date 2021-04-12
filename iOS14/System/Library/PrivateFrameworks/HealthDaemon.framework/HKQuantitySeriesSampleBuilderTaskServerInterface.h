/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_insertQuantitySeries:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_discardWithCompletion:(/*^block*/id)arg1;

@end

