/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSMetricsDataSource
@required
-(void)cancel;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;

@end

