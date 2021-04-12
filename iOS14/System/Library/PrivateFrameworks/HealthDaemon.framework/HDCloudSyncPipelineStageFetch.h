/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSString;

@interface HDCloudSyncPipelineStageFetch : HDCloudSyncPipelineStage {

	NSString* _zoneOwnerName;
	BOOL _shouldFetchSubscriptions;

}

@property (assign,nonatomic) BOOL shouldFetchSubscriptions;              //@synthesize shouldFetchSubscriptions=_shouldFetchSubscriptions - In the implementation block
-(void)main;
-(void)setShouldFetchSubscriptions:(BOOL)arg1 ;
-(id)_zoneOwnerNameWithError:(id*)arg1 ;
-(BOOL)shouldFetchSubscriptions;
@end

