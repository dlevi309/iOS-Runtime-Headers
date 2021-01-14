/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTTranslationEngine, OS_dispatch_queue;
@class _LTTextToSpeechCache, _LTServerSpeechSession, _LTServerSpeakSession, _LTLoggingRequestHandler, NSObject;

@interface _LTTranslationServer : NSObject {

	id<_LTTranslationEngine> _offlineCachedEngine;
	id<_LTTranslationEngine> _onlineCachedEngine;
	_LTTextToSpeechCache* _ttsCache;
	_LTServerSpeechSession* _speechSession;
	_LTServerSpeakSession* _speakSession;
	_LTLoggingRequestHandler* _logger;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)clearCaches;
-(id)init;
-(void)cleanup;
-(void)notifyOfMemoryPressure;
-(void)addSpeechAudioData:(id)arg1 ;
-(void)_offlineLanguageStatus:(/*^block*/id)arg1 ;
-(void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_purgeAllAssets:(/*^block*/id)arg1 ;
-(void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAllAssets:(/*^block*/id)arg1 ;
-(void)_getAssetSize:(/*^block*/id)arg1 ;
-(void)availableLocalePairsForTask:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)languageForText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)languagesForText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preheatWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_offlineEngineForContext:(id)arg1 error:(id*)arg2 ;
-(id)_onlineEngineForContext:(id)arg1 error:(id*)arg2 ;
-(id)_engineForContext:(id)arg1 error:(id*)arg2 ;
-(void)cancelExistingSessions;
-(void)_speechSessionCompleted;
-(void)startLoggingRequest:(id)arg1 ;
-(void)translateParagraphs:(id)arg1 withContext:(id)arg2 paragraphResult:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelSpeechSession;
-(void)cancelSpeechSessionWithID:(id)arg1 ;
-(void)cleanupOfflineEngine;
-(void)startInstallRequest:(id)arg1 delegate:(id)arg2 ;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endAudio;
-(id)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3 ;
-(void)installedLocales:(/*^block*/id)arg1 ;
@end

