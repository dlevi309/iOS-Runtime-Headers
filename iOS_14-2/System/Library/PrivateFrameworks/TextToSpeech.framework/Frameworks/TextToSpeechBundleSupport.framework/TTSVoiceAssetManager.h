/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {

	NSMutableDictionary* _resourceCache;

}
+(id)sharedInstance;
+(id)_nonLocalMobileAssetQueue;
+(long long)_downloadCatalogForAssetType:(id)arg1 ;
+(id)queryForVoiceResourceAsset:(id)arg1 localOnly:(BOOL)arg2 ;
+(id)_getLatestAssetFromArray:(id)arg1 ;
+(id)voiceResourceFromAsset:(id)arg1 voiceType:(long long)arg2 ;
+(id)voiceResourceAssetForLanguage:(id)arg1 voiceType:(long long)arg2 ;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 ;
-(id)_voiceAssetQueryResultsPredicateForLanguage:(id)arg1 voiceType:(long long)arg2 ;
-(BOOL)_assetExistsOnDisk:(id)arg1 ;
-(id)_voiceAssetForMAAsset:(id)arg1 voiceType:(long long)arg2 ;
-(id)getPreinstalledGryphonAssetsForLanguage:(id)arg1 ;
-(id)getPreinstalledNeuralAssetsForLanguage:(id)arg1 ;
-(id)convertVSVoiceAssetSelectionsToTTSVoiceAssets:(id)arg1 language:(id)arg2 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(/*^block*/id)arg4 ;
@end

