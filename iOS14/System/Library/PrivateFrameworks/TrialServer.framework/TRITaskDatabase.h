/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/TRITaskPersisting.h>

@protocol TRITaskSetProviding;
@class TRIDatabase;

@interface TRITaskDatabase : NSObject <TRITaskPersisting> {

	TRIDatabase* _db;
	id<TRITaskSetProviding> _taskSetProvider;

}
-(id)tasks;
-(id)init;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)idForTask:(id)arg1 ;
-(BOOL)_checkTaskId:(id)arg1 IsPresent:(BOOL*)arg2 transaction:(id)arg3 ;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5 ;
-(BOOL)removeTaskWithId:(id)arg1 cleanupBlock:(/*^block*/id)arg2 ;
-(BOOL)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3 ;
-(id)taskIdsWithTag:(id)arg1 ;
-(id)directDependenciesOfTaskWithId:(id)arg1 ;
-(id)tasksDependentOnTask:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 taskSetProvider:(id)arg2 ;
@end

