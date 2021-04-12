/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncManagerPipelineTask.h>

@class HDCloudSyncShareSetupMetadata, HDCloudSyncPipelineStageAcceptShares, NSArray;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {

	HDCloudSyncShareSetupMetadata* _shareSetupMetadata;
	HDCloudSyncPipelineStageAcceptShares* _acceptSharesPipelineStage;

}

@property (nonatomic,copy,readonly) NSArray * acceptedShares; 
-(id)pipelineForRepository:(id)arg1 ;
-(NSArray *)acceptedShares;
-(id)initWithManager:(id)arg1 context:(id)arg2 shareSetupMetadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)requiresExistingShareOwnerParticipant;
@end

