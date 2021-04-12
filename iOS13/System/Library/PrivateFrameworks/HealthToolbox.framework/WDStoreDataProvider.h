/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, _HKMobileAssetDownloadManager, NSDictionary, NSObject;

@interface WDStoreDataProvider : NSObject {

	NSMutableDictionary* _storeDataByType;
	_HKMobileAssetDownloadManager* _downloadManager;
	NSMutableDictionary* _isRequestingAppsForType;
	BOOL _didSuccessfullyDownloadAssets;
	NSDictionary* _adamIdsByType;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSDictionary * adamIdsByType;                      //@synthesize adamIdsByType=_adamIdsByType - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL didSuccessfullyDownloadAssets;                //@synthesize didSuccessfullyDownloadAssets=_didSuccessfullyDownloadAssets - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_localeChanged:(id)arg1 ;
-(void)setDidSuccessfullyDownloadAssets:(BOOL)arg1 ;
-(void)setAdamIdsByType:(NSDictionary *)arg1 ;
-(void)purgeOldAppsInHealthAssets;
-(void)_downloadAssetsForCurrentLocale;
-(void)startDownloadAssetTimeoutTimer;
-(BOOL)didSuccessfullyDownloadAssets;
-(id)_allCompatabilityVersions;
-(id)_typeIdentifierForHKDisplayCategoryIdentifier:(long long)arg1 ;
-(NSDictionary *)adamIdsByType;
-(id)_matchOrderOfStoreResults:(id)arg1 withAdamIDList:(id)arg2 ;
-(id)typeIdentifierForHKDisplayType:(id)arg1 ;
-(void)_downloadStoreDataForIdentifierIfNecessary:(id)arg1 ;
-(id)typeIdentifierForHKDisplayCategory:(id)arg1 ;
-(void)_loadAppsInfoFromStoreForIdentifier:(id)arg1 onLoadingCompletion:(/*^block*/id)arg2 ;
-(BOOL)_hasLocalStoreDataForIdentifier:(id)arg1 ;
-(void)_storeDataForIdentifier:(id)arg1 onLoadingCompletion:(/*^block*/id)arg2 ;
-(void)downloadStoreDataForHKDisplayTypeIfNecessary:(id)arg1 ;
-(void)downloadStoreDataForHKCategoryIfNecessary:(id)arg1 ;
-(BOOL)hasLocalStoreDataForHKDisplayType:(id)arg1 ;
-(BOOL)hasLocalStoreDataForHKDisplayCategory:(id)arg1 ;
-(void)storeDataForHKDisplayType:(id)arg1 onLoadingCompletion:(/*^block*/id)arg2 ;
-(void)storeDataForHKDisplayCategory:(id)arg1 onLoadingCompletion:(/*^block*/id)arg2 ;
@end

