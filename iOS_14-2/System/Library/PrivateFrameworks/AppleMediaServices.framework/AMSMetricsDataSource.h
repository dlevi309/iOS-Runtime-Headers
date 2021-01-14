/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSMetricsDataSource
@required
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)didFinishBatching;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;
-(void)cancel;

@end

