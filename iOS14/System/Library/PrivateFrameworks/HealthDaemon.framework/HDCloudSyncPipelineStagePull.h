/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSError;

@interface HDCloudSyncPipelineStagePull : HDCloudSyncPipelineStage {

	long long _queue_pullOperationFailureCount;
	NSError* _queue_firstPullOperationError;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)_recordSuccessfulPull;
-(void)_generateRestoreEventSyncCompleteWithProfile:(id)arg1 pullCompleteDate:(id)arg2 ;
@end

