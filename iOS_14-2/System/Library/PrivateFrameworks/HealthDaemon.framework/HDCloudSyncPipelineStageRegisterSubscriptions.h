/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSDictionary;

@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage {

	BOOL _includeSecondaryContainers;
	NSDictionary* _subscriptions;

}

@property (nonatomic,copy,readonly) NSDictionary * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (assign,nonatomic) BOOL includeSecondaryContainers;                  //@synthesize includeSecondaryContainers=_includeSecondaryContainers - In the implementation block
-(NSDictionary *)subscriptions;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(BOOL)includeSecondaryContainers;
-(void)setIncludeSecondaryContainers:(BOOL)arg1 ;
-(id)_operationForContainer:(id)arg1 configuration:(id)arg2 cloudState:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 subscriptions:(id)arg3 ;
@end

