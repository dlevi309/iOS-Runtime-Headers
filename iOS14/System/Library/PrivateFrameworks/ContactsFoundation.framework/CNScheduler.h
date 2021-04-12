/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNScheduler : NSObject
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)mainThreadScheduler;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1 ;
+(id)globalAsyncScheduler;
+(id)synchronousSerialDispatchQueueWithName:(id)arg1 ;
+(id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg1 ;
+(id)offMainThreadScheduler;
+(id)inlineScheduler;
+(id)immediateScheduler;
@end

