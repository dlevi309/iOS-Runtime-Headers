/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTPreferences : NSObject
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
+(id)sharedPreferences;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(BOOL)corespeechDaemonEnabled;
-(BOOL)fileLoggingIsEnabled;
-(id)fileLoggingLevel;
-(BOOL)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2 ;
-(id)init;
-(id)_languageCode;
-(BOOL)isSATAvailable;
-(BOOL)voiceTriggerEnabled;
-(void)discardAllSATEnrollment;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(id)localizedTriggerPhrase;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForwatchOS;
-(BOOL)_isLocalVoiceTriggerAvailable;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg1 ;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1 ;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(BOOL)gestureSubscriptionEnabled;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(void)synchronize;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)_storeModeEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
-(id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1 ;
-(id)_VTSATBasePath;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg1 ;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg1 ;
-(BOOL)useSiriActivationSPIForiOS;
-(BOOL)_voiceTriggerEnabled;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(BOOL)phraseSpotterEnabled;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)_gibraltarHasBuiltInMic;
-(id)_VTSATCachePath;
-(id)_localeIdentifier;
-(BOOL)isMultiPhraseVTEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(id)getSATEnrollmentPath;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
@end

