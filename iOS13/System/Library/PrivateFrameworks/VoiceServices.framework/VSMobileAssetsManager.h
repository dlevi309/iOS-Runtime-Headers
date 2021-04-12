/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VSMobileAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> _downloadQueue;
	NSObject*<OS_dispatch_queue> _assetQueryQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;              //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
+(id)sharedManager;
+(id)selectVoiceResourceAssetForLanguage:(id)arg1 ;
+(void)amendVoiceWithDefaultSettings:(id)arg1 ;
+(id)pickCorrectAssetFromLocalAssets:(id)arg1 ;
+(id)preinstallAssetsDirectory;
+(id)_languagesFromAttributes:(id)arg1 ;
+(id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2 ;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)bundleIdentifierForVoiceType:(long long)arg1 ;
+(id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
+(id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
+(id)installedVoiceResources;
+(BOOL)isVoiceAssetWellDefined:(id)arg1 ;
+(id)getLatestAssetFromArray:(id)arg1 ;
+(id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
-(id)init;
-(void)resetCache;
-(id)selectVoiceResourceAssetForLanguage:(id)arg1 ;
-(void)amendVoiceWithDefaultSettings:(id)arg1 ;
-(void)migrateAssetIfNeededWithAssetType:(id)arg1 ;
-(void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
-(id)voiceDataFromAsset:(id)arg1 ;
-(id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1 ;
-(id)preinstallAssetsMetadata;
-(id)voiceAssetFromPreinstallMetadata:(id)arg1 ;
-(id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)_builtInVoiceForLanguage:(id)arg1 ;
-(id)_getResults:(id)arg1 ;
-(id)_installedVoiceResourceAssetForLanguage:(id)arg1 ;
-(void)_purgeAsset:(id)arg1 ;
-(id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(id)activeVoiceAssets;
-(id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
-(id)inactiveVoiceAssets;
-(id)installedVoiceResources;
-(id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(void)downloadVoiceAsset:(id)arg1 discretionary:(BOOL)arg2 useBattery:(BOOL)arg3 progressUpdateHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(id)downloadCatalog:(id)arg1 options:(id)arg2 ;
-(void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)populateVoiceData:(id)arg1 fromAsset:(id)arg2 ;
-(void)migrateAssets;
-(id)builtInVoices;
-(id)cleanUnusedVoiceAssets;
-(void)cleanOldVoiceResources;
-(void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(void)downloadVoiceAsset:(id)arg1 discretionary:(BOOL)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(void)cancelDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeVoiceAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadVoiceResource:(id)arg1 discretionary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)voiceAssetWithName:(id)arg1 localOnly:(BOOL)arg2 outError:(id*)arg3 ;
-(void)purgeAsset:(id)arg1 ;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

