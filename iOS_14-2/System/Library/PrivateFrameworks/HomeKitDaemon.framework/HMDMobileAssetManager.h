/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDMobileAssetManagerDelegate, OS_dispatch_queue;
@class NSBackgroundActivityScheduler, NSObject;

@interface HMDMobileAssetManager : NSObject {

	BOOL _indexDownloaded;
	id<HMDMobileAssetManagerDelegate> _delegate;
	NSBackgroundActivityScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign) BOOL indexDownloaded;                                                     //@synthesize indexDownloaded=_indexDownloaded - In the implementation block
@property (nonatomic,readonly) NSBackgroundActivityScheduler * scheduler;                    //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMDMobileAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateMetadata;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id<HMDMobileAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDMobileAssetManagerDelegate>)arg1 ;
-(NSBackgroundActivityScheduler *)scheduler;
-(void)handleMetadataAssetUpdated;
-(void)_handleMetadataAssetUpdated;
-(void)setIndexDownloaded:(BOOL)arg1 ;
-(void)_downloadNewAsset:(id)arg1 availableVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3 ;
-(void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2 ;
-(void)_downloadCatalogAndUpdateMetadataIfAble;
-(BOOL)indexDownloaded;
-(void)purgeAllInstalledAssets;
@end

