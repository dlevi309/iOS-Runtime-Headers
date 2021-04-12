/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/CloudSync.healthplugin/CloudSync
*/

#import <HealthExperience/HealthExperience.AsyncOperation.h>

@interface CloudSync.CloudSyncFeedItemGenerator : HealthExperience.AsyncOperation {

	 $__lazy_storage_$_alertBackoffAlgorithm;
	 $__lazy_storage_$_appFirstLaunchDateProvider;
	 $__lazy_storage_$_cloudSyncResolutionInfoStore;
	 context;
	 observer;
	 cancellationLock;

}
-(id)init;
-(void)cancel;
-(void)main;
-(void)didDismissCloudSyncAlert:(id)arg1 ;
-(void)didCancelICloudStorageUpgrade:(id)arg1 ;
@end

