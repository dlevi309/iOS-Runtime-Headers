/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _DASActivityBackgroundTasksScheduler <NSObject>
@required
-(void)getPendingTaskRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)setBackgroundTasksSchedulerDelegate:(id)arg1;
-(id)submitTaskRequest:(id)arg1;
-(void)cancelTaskRequestWithIdentifier:(id)arg1;
-(void)cancelAllTaskRequests;
-(void)completeTaskRequest:(id)arg1;

@end

