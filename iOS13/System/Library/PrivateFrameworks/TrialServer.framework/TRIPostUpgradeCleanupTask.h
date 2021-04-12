/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>

@class NSMutableSet;

@interface TRIPostUpgradeCleanupTask : TRIBaseTask {

	NSMutableSet* _invalidExperimentIds;

}
+(id)task;
-(int)run;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(BOOL)validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 ;
-(BOOL)validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 ;
@end

