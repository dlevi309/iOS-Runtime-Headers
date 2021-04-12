/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@interface TRIAssetCleanupTask : TRIExperimentBaseTask
+(id)task;
+(id)taskWithExperimentId:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(BOOL)removeExperimentArtifact:(id)arg1 ;
-(BOOL)removeTreatmentPathsWithExperiment:(id)arg1 ;
-(BOOL)removeExperiment:(id)arg1 ;
-(int)cleanupWithExperiment:(id)arg1 ;
-(int)cleanupWithExperimentId:(id)arg1 ;
@end

