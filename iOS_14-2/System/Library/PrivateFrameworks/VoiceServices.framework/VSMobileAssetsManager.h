/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface VSMobileAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> _assetQueryQueue;
	NSCache* _cachedVoiceSelections;
	NSCache* _cachedVoiceResources;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;              //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
@property (nonatomic,retain) NSCache * cachedVoiceSelections;                           //@synthesize cachedVoiceSelections=_cachedVoiceSelections - In the implementation block
@property (nonatomic,retain) NSCache * cachedVoiceResources;                            //@synthesize cachedVoiceResources=_cachedVoiceResources - In the implementation block
+(id)sharedManager;
+(id)pickCorrectAssetFromLocalAssets:(id)arg1 ;
+(id)preinstallAssetsDirectory;
+(id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2 ;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)bundleIdentifierForVoiceType:(long long)arg1 ;
+(void)amendVoice:(id)arg1 withDefaultSettingsFrom:(id)arg2 ;
+(BOOL)isVoiceAssetWellDefined:(id)arg1 ;
+(id)getLatestAssetFromArray:(id)arg1 ;
+(id)downloadOptionsWithBattery:(BOOL)arg1 ;
+(id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
+(long long)typeFromBundleIdentifier:(id)arg1 ;
+(void)amendVoiceWithDefaultSettings:(id)arg1 ;
-(void)resetCache;
-(id)voiceAssetWithName:(id)arg1 localOnly:(BOOL)arg2 outError:(id*)arg3 ;
-(id)voiceDataFromAsset:(id)arg1 ;
-(id)voiceDataWithBundleIdentifier:(id)arg1 attributes:(id)arg2 voicePathCallback:(/*^block*/id)arg3 ;
-(id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(id)init;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_purgeAsset:(id)arg1 ;
-(id)voiceAssetFromPreinstallMetadata:(id)arg1 ;
-(void)cancelDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_installedVoiceResourceAssetForLanguage:(id)arg1 ;
-(id)installedLocalVoices;
-(void)migrateAssets;
-(id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
-(BOOL)cancelDownloads:(id)arg1 error:(id*)arg2 ;
-(void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(void)downloadVoiceResourceCatalogWithCompletion:(/*^block*/id)arg1 ;
-(id)_builtInVoiceForLanguage:(id)arg1 ;
-(void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSCache *)cachedVoiceResources;
-(id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)installedVoiceResources;
-(void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(void)purgeAsset:(id)arg1 ;
-(id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(void)resetResourcesCache;
-(id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
-(void)migrateAssetIfNeededWithAssetType:(id)arg1 ;
-(id)_getResults:(id)arg1 ;
-(id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(void)removeVoiceAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadVoiceAsset:(id)arg1 options:(id)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1 ;
-(void)downloadVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSCache *)cachedVoiceSelections;
-(void)amendVoiceWithDefaultSettings:(id)arg1 ;
-(void)cancelResourceDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)selectVoiceResourceAssetForLanguage:(id)arg1 ;
-(id)preinstallAssetsMetadata;
-(id)downloadCatalog:(id)arg1 options:(id)arg2 ;
-(id)builtInVoices;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(void)setCachedVoiceSelections:(NSCache *)arg1 ;
-(void)removeVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)inactiveVoiceAssets;
-(void)cleanOldVoiceResources;
-(void)downloadVoiceResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)cleanUnusedVoiceAssets;
-(void)amendVoiceAssetWithLatestKnownData:(id)arg1 ;
-(id)activeVoiceAssets;
-(void)setCachedVoiceResources:(NSCache *)arg1 ;
@end

