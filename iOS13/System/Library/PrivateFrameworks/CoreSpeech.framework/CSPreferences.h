/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSPreferences : NSObject
+(id)sharedPreferences;
-(BOOL)voiceTriggerEnabled;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)corespeechDaemonEnabled;
-(BOOL)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)phraseSpotterEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(BOOL)voiceTriggerInCoreSpeech;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForwatchOS;
-(id)assistantAudioFileLogDirectory;
-(unsigned long long)maxNumLoggingFiles;
-(id)voiceTriggerAudioLogDirectory;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(BOOL)isMultiPhraseVTEnabled;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(unsigned long long)speakerIdScoreReportingType;
-(BOOL)speakerIdiTunesAccountSigninEnabled;
-(BOOL)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(id)myriadHashFilePath;
-(id)baseDir;
-(BOOL)_isDirectory:(id)arg1 ;
-(BOOL)twoShotNotificationEnabled;
-(BOOL)speakerIdEnabled;
-(double)audioSessionActivationDelay;
-(id)myriadHashDirectory;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(BOOL)isAttentiveSiriEnabled;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(BOOL)forceVoiceTriggerAPMode;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)enableAudioInjection:(BOOL)arg1 ;
-(BOOL)audioInjectionEnabled;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)iOSBargeInSupportEnabled;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)bypassPersonalizedHeySiri;
@end

