/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTPreferences : NSObject
+(id)sharedPreferences;
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
-(id)init;
-(void)synchronize;
-(id)_languageCode;
-(id)_localeIdentifier;
-(BOOL)voiceTriggerEnabled;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(id)getSATEnrollmentPath;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg1 ;
-(BOOL)corespeechDaemonEnabled;
-(BOOL)_voiceTriggerEnabled;
-(BOOL)_storeModeEnabled;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2 ;
-(id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1 ;
-(id)_VTSATBasePath;
-(id)_VTSATCachePath;
-(BOOL)_isLocalVoiceTriggerAvailable;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(BOOL)phraseSpotterEnabled;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg1 ;
-(id)localizedTriggerPhrase;
-(BOOL)secondPassAudioLoggingEnabled;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg1 ;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg1 ;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(void)discardAllSATEnrollment;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1 ;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)gestureSubscriptionEnabled;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)isSATAvailable;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForiOS;
-(BOOL)useSiriActivationSPIForwatchOS;
@end

