/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
@class NSObject, VTPolicy;

@interface VTAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	VTPolicy* _enablePolicy;

}
+(id)sharedInstance;
-(id)init;
-(void)_fetchRemoteMetaData;
-(BOOL)_isReadyToUse;
-(id)installedAssetForLanguage:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_installedAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_assetQueryForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_filteredAssetsForAssets:(id)arg1 language:(id)arg2 supportPremium:(BOOL)arg3 ;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(id)_installedAssetWithoutMetaDataForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_defaultDownloadOptions;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(void)_addKeyValuePairForQuery:(id*)arg1 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)assetForLanguage:(id)arg1 ;
@end

