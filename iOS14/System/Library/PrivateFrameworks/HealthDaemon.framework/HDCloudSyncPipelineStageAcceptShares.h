/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class HDCloudSyncShareSetupMetadata, NSArray;

@interface HDCloudSyncPipelineStageAcceptShares : HDCloudSyncPipelineStage {

	HDCloudSyncShareSetupMetadata* _share;
	NSArray* _acceptedShares;

}

@property (nonatomic,copy,readonly) HDCloudSyncShareSetupMetadata * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,copy,readonly) NSArray * acceptedShares;                           //@synthesize acceptedShares=_acceptedShares - In the implementation block
-(HDCloudSyncShareSetupMetadata *)share;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 sharingResult:(id)arg3 ;
-(NSArray *)acceptedShares;
@end

