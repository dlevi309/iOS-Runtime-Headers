/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _DASActivityBackgroundTasksScheduler <NSObject>
@required
-(id)submitTaskRequest:(id)arg1;
-(void)setBackgroundTasksSchedulerDelegate:(id)arg1;
-(void)cancelAllTaskRequests;
-(void)completeTaskRequest:(id)arg1;
-(void)cancelTaskRequestWithIdentifier:(id)arg1;
-(void)getPendingTaskRequestsWithCompletionHandler:(/*^block*/id)arg1;

@end

