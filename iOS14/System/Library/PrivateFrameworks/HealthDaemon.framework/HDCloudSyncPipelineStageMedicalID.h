/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class _HKMedicalIDData, HDCloudSyncMedicalIDRecord;

@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {

	_HKMedicalIDData* _localMedicalIDData;
	_HKMedicalIDData* _cloudMedicalIDData;
	HDCloudSyncMedicalIDRecord* _medicalIDRecord;

}
-(void)main;
-(id)_compoundSyncOperationWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)_operationWithMostRecentCloudMedicalIDFromPrimaryFetchOperation:(id)arg1 secondaryFetchOperations:(id)arg2 ;
@end

