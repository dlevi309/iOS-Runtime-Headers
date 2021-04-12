/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(BOOL)_isReadyToUse;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultDownloadOptions;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(id)installedAssetForLanguage:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_installedAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_assetQueryForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_filteredAssetsForAssets:(id)arg1 language:(id)arg2 supportPremium:(BOOL)arg3 ;
-(id)_installedAssetWithoutMetaDataForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 ;
-(void)_addKeyValuePairForQuery:(id*)arg1 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)assetForLanguage:(id)arg1 ;
@end

