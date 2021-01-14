/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@interface HDCloudSyncPipelineStageDescribe : HDCloudSyncPipelineStage {

	/*^block*/id _descriptionHandler;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)_cloudSyncContainerDescriptionFromCloudState:(id)arg1 configuration:(id)arg2 ;
-(id)_descriptionForContainer:(id)arg1 configuration:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 descriptionHandler:(/*^block*/id)arg3 ;
@end

