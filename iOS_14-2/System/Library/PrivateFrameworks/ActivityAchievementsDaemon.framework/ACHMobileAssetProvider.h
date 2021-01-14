/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject {

	_HKMobileAssetDownloadManager* _mobileAssetDownloadManager;
	NSUserDefaults* _nanoUserDefaults;
	double _downloadDelayOverride;

}

@property (nonatomic,retain) _HKMobileAssetDownloadManager * mobileAssetDownloadManager;              //@synthesize mobileAssetDownloadManager=_mobileAssetDownloadManager - In the implementation block
@property (nonatomic,retain) NSUserDefaults * nanoUserDefaults;                                       //@synthesize nanoUserDefaults=_nanoUserDefaults - In the implementation block
@property (assign,nonatomic) double downloadDelayOverride;                                            //@synthesize downloadDelayOverride=_downloadDelayOverride - In the implementation block
-(id)init;
-(id)initWithMobileAssetDownloadManager:(id)arg1 ;
-(void)_fetchLocalAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadRemoteCatalogAndAssets;
-(double)_downloadDelay;
-(void)downloadRemoteCatalog;
-(id)_compatibilityVersionQueryParameters;
-(_HKMobileAssetDownloadManager *)mobileAssetDownloadManager;
-(void)_removeAssets:(id)arg1 ;
-(void)_processAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadRemoteAssets:(id)arg1 installedAssets:(id)arg2 ;
-(void)_downloadAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_assetsGroupedByUniqueNameAndType:(id)arg1 ;
-(void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)availableAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setMobileAssetDownloadManager:(_HKMobileAssetDownloadManager *)arg1 ;
-(NSUserDefaults *)nanoUserDefaults;
-(void)setNanoUserDefaults:(NSUserDefaults *)arg1 ;
-(double)downloadDelayOverride;
-(void)setDownloadDelayOverride:(double)arg1 ;
@end

