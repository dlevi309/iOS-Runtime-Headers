/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
*/

#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSPointerArray, AVSpeechSynthesizer, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSPointerArray* _delegates;
	AVSpeechSynthesizer* _samplePlayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)stopDownloadingAlternateVoice:(id)arg1 ;
-(id)_cachedAssetForVoiceId:(id)arg1 ;
-(void)cleanUpExtraInstalledAssetsIfNecessary:(id)arg1 ;
-(void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(id)init;
-(void)replaceTestAsset:(id)arg1 withAsset:(id)arg2 ;
-(void)deleteDownloadAlternateVoice:(id)arg1 ;
-(void)clientUpdateAvailableSpeechAssets;
-(BOOL)inUnitTestMode;
-(id)_assetTypeForVoiceId:(id)arg1 ;
-(void)startDownloadingAlternateVoice:(id)arg1 ;
-(BOOL)_voiceIdIsVocalizerVoice:(id)arg1 ;
-(void)updateAvailableSpeechAssetsSynchronously;
-(void)setSelectedIdsForTesting:(id)arg1 ;
-(id)_assetForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(long long)diskSizeForAsset:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(id)_allAssetsForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(void)playSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)assetsForTesting;
-(id)_currentDelegates;
-(id)mobileAssetDownloadQueue;
-(id)_mobileAssetDownloadOptions;
-(id)selectedIdsForTesting;
-(void)setAssetsForTesting:(id)arg1 ;
-(BOOL)allowedToDownloadVoiceAssets;
-(id)allInstalledAssetsForVoiceId:(id)arg1 ;
-(void)_updateAllowedToDownload;
-(void)removeSiriVoiceUsage:(id)arg1 ;
-(id)_assetUpdaterClient;
-(void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(id)_allInstalledAssetsForVoiceId:(id)arg1 ;
-(void)_startDownloadingAlternateVoice:(id)arg1 ;
-(id)mobileAssetWorkQueue;
-(id)assetForVoiceId:(id)arg1 ;
-(void)dealloc;
-(void)_handleAssetProgress:(id)arg1 voiceId:(id)arg2 diskSize:(long long)arg3 asset:(id)arg4 ;
@end

