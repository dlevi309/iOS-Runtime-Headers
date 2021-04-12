/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskPersisting
@required
-(id)tasks;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2;
-(id)idForTask:(id)arg1;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
-(BOOL)removeTaskWithId:(id)arg1 cleanupBlock:(/*^block*/id)arg2;
-(BOOL)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
-(id)taskIdsWithTag:(id)arg1;
-(id)directDependenciesOfTaskWithId:(id)arg1;
-(id)tasksDependentOnTask:(id)arg1;

@end

