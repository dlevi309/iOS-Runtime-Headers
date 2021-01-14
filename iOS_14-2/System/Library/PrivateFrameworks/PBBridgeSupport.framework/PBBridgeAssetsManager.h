/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PBBridgeAssetsManager : NSObject {

	/*^block*/id _assetDownloadCompletion;
	/*^block*/id _allAssetsDownloadCompletion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id assetDownloadCompletion;                        //@synthesize assetDownloadCompletion=_assetDownloadCompletion - In the implementation block
@property (nonatomic,copy) id allAssetsDownloadCompletion;                    //@synthesize allAssetsDownloadCompletion=_allAssetsDownloadCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginPullingAssetsForAdvertisingName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginPullingAssetsForDeviceAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)hardwareGenerationForProductType:(id)arg1 ;
-(id)_gatherQueries:(id)arg1 withAtlas:(id)arg2 ;
-(void)_beginDownloadsForAssets:(id)arg1 ;
-(void)_runMultipleAssetQueries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_assetQueryForDeviceAttributes:(unsigned long long)arg1 deviceAttributes:(id)arg2 atlasDetails:(id)arg3 ;
-(void)_checkAssetDownloadStateWithAssets:(id)arg1 ;
-(void)beginPullingAssetsForDeviceMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 branding:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginPullingAssetsForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeAllAssetsLocalOnly:(BOOL)arg1 ;
-(id)_assetQueryForType:(unsigned long long)arg1 forDevice:(id)arg2 atlasDetails:(id)arg3 ;
-(id)assetDownloadCompletion;
-(void)setAssetDownloadCompletion:(id)arg1 ;
-(id)allAssetsDownloadCompletion;
-(void)setAllAssetsDownloadCompletion:(id)arg1 ;
@end

