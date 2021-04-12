/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class _HKMobileAssetDownloadManager;

@interface ACHMobileAssetProvider : NSObject {

	_HKMobileAssetDownloadManager* _mobileAssetDownloadManager;

}

@property (nonatomic,retain) _HKMobileAssetDownloadManager * mobileAssetDownloadManager;              //@synthesize mobileAssetDownloadManager=_mobileAssetDownloadManager - In the implementation block
-(id)init;
-(id)initWithMobileAssetDownloadManager:(id)arg1 ;
-(void)_fetchAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)_compatibilityVersionQueryParameters;
-(_HKMobileAssetDownloadManager *)mobileAssetDownloadManager;
-(void)_removeAssets:(id)arg1 ;
-(void)_downloadAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_processAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_assetsGroupedByUniqueNameAndType:(id)arg1 ;
-(void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)availableAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setMobileAssetDownloadManager:(_HKMobileAssetDownloadManager *)arg1 ;
@end

