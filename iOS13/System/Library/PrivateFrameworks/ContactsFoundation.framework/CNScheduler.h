/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNScheduler : NSObject
+(id)mainThreadScheduler;
+(id)globalAsyncScheduler;
+(id)immediateScheduler;
+(id)synchronousSerialDispatchQueueWithName:(id)arg1 ;
+(id)inlineScheduler;
+(id)offMainThreadScheduler;
+(id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1 ;
@end

