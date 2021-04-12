/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCTaskScheduler : NSObject
+(id)lowPriorityQueue;
+(id)lowPriorityOperationQueue;
+(void)scheduleLowPriorityBlock:(/*^block*/id)arg1 ;
+(void)scheduleLowPriorityBlockForMainThread:(/*^block*/id)arg1 ;
+(void)scheduleLowPriorityOperation:(id)arg1 ;
+(void)pushHighPriorityTaskInFlight;
+(void)popHighPriorityTaskInFlight;
+(void)scheduleOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(void)executeOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(void)disableOptionalPrefetching;
@end

