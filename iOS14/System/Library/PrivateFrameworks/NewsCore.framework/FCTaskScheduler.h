/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCTaskScheduler : NSObject
+(void)scheduleLowPriorityBlock:(/*^block*/id)arg1 ;
+(void)scheduleLowPriorityOperation:(id)arg1 ;
+(void)scheduleLowPriorityBlockForMainThread:(/*^block*/id)arg1 ;
+(void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+(void)pushHighPriorityTaskInFlight;
+(void)popHighPriorityTaskInFlight;
+(void)executeOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(id)lowPriorityOperationQueue;
+(void)scheduleOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(void)disableOptionalPrefetching;
+(id)backgroundDownloadOperationQueue;
+(id)lowPriorityQueue;
@end

