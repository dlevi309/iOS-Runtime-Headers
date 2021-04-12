/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTAssetProcessor, RTDefaultsManager, RTXPCActivityManager;

@interface RTAssetManager : RTService {

	RTAssetProcessor* _assetProcessor;
	RTDefaultsManager* _defaultsManager;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) RTAssetProcessor * assetProcessor;                      //@synthesize assetProcessor=_assetProcessor - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
-(id)init;
-(BOOL)nonUserInitiatedDownloadsAllowed;
-(void)_shutdown;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 assetProcessor:(id)arg2 xpcActivityManager:(id)arg3 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(id)defaultXPCActivityCriteria;
-(void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_finalizeAssetUpdateOperationWithError:(id)arg1 ;
-(void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultCatalogDownloadOptions;
-(void)_handleCatalogDownloadWithType:(id)arg1 downloadResult:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleMetadataQueryResult:(long long)arg1 assetQuery:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)latestAssetFromAssets:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultAssetDownloadOptions;
-(void)_handleAssetDownloadResult:(long long)arg1 asset:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_installAsset:(id)arg1 fileManager:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceUpdateAssetMetadataWithHandler:(/*^block*/id)arg1 ;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTAssetProcessor *)assetProcessor;
-(void)setAssetProcessor:(RTAssetProcessor *)arg1 ;
@end

