/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseDatabase.h>
#import <libobjc.A.dylib/TRITaskPersisting.h>

@interface TRITaskDatabase : TRIBaseDatabase <TRITaskPersisting>
-(id)dependencies;
-(id)tags;
-(BOOL)removeTask:(id)arg1 ;
-(id)tasks;
-(id)migrations;
-(id)tasksDependentOnTask:(id)arg1 ;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5 ;
-(id)taskIdsWithTag:(id)arg1 ;
-(BOOL)clearStartTimeForTaskId:(id)arg1 ;
-(id)addTask:(id)arg1 startTime:(id)arg2 error:(id*)arg3 ;
-(BOOL)addTags:(id)arg1 toTaskId:(id)arg2 ;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 error:(id*)arg4 ;
-(BOOL)addDependencies:(id)arg1 toTask:(id)arg2 ;
-(id)encodeTask:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeDependenciesWithTaskId:(id)arg1 ;
-(BOOL)removeTagsWithTaskId:(id)arg1 ;
-(id)decodeTaskWithClassName:(id)arg1 data:(id)arg2 ;
-(id)addTask:(id)arg1 error:(id*)arg2 ;
@end

