/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTTranslationService
@required
-(void)clearCaches;
-(void)startSpeechTranslationWithContext:(id)arg1;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;
-(void)cleanup;
-(void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)addSpeechAudioData:(id)arg1;
-(void)_offlineLanguageStatus:(/*^block*/id)arg1;
-(void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)_purgeAllAssets:(/*^block*/id)arg1;
-(void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)_updateAllAssets:(/*^block*/id)arg1;
-(void)_getAssetSize:(/*^block*/id)arg1;
-(void)availableLocalePairsForTask:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(/*^block*/id)arg3;
-(void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(/*^block*/id)arg3;
-(void)languageForText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)languagesForText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)preheatWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)logWithRequestData:(id)arg1;
-(void)translate:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)provideFeedback:(id)arg1 withContext:(id)arg2;
-(void)startInstallRequest:(id)arg1;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endAudio;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)installedLocales:(/*^block*/id)arg1;

@end

