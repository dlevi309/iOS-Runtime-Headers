/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSCoreSpeechServices : NSObject
+(id)getCoreSpeechXPCConnection;
+(void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)getCoreSpeechServiceConnection;
+(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)requestUpdatedSATAudio;
+(long long)getFirstPassRunningMode;
@end

