/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFScheduler : NSObject
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)mainThreadScheduler;
+(id)globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1 ;
+(id)globalAsyncScheduler;
+(id)dispatchQueueSchedulerWithQueue:(id)arg1 ;
+(id)onScheduler:(id)arg1 performWithObject:(id)arg2 ;
+(id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)immediateScheduler;
@end

