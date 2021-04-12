/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@interface FMScheduler : NSObject
+(id)mainThreadScheduler;
+(id)globalAsyncScheduler;
+(id)immediateScheduler;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1 ;
+(id)schedulerWithDispatchQueue:(id)arg1 ;
@end

