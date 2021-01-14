/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLPullFromTransportTask, CPLMinglePulledChangesTask;

@interface CPLPullFromTransportSyncStep : CPLSyncStep {

	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;

}
-(id)descriptionForTasks;
-(BOOL)launchNecessaryTasks;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)moveTasksToBackground;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
@end

