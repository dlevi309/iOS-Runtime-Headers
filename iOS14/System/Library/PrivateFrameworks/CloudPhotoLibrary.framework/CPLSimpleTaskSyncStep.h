/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep {

	Class _taskClass;
	CPLEngineSyncTask* _currentTask;

}

@property (nonatomic,readonly) Class taskClass;                              //@synthesize taskClass=_taskClass - In the implementation block
@property (nonatomic,readonly) CPLEngineSyncTask * currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
-(id)newTask;
-(CPLEngineSyncTask *)currentTask;
-(id)descriptionForTasks;
-(BOOL)launchNecessaryTasks;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)moveTasksToBackground;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 taskClass:(Class)arg3 ;
-(Class)taskClass;
@end

