/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskPersisting
@required
-(BOOL)removeTask:(id)arg1;
-(id)tasks;
-(id)tasksDependentOnTask:(id)arg1;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
-(id)taskIdsWithTag:(id)arg1;
-(BOOL)clearStartTimeForTaskId:(id)arg1;

@end

