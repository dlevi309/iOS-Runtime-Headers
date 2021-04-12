/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol VSSpeechXPCServiceProtocol <NSObject>
@required
-(oneway void)killDaemon;
-(oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)stopPresynthesizedAudioRequest;
-(oneway void)startSynthesisRequest:(id)arg1;
-(oneway void)startPresynthesizedAudioRequest:(id)arg1;
-(oneway void)cachePresynthesizedAudioRequest:(id)arg1;
-(oneway void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setLogToFile:(BOOL)arg1;
-(oneway void)getLogToFile:(/*^block*/id)arg1;
-(oneway void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)forwardStreamObject:(id)arg1;
-(oneway void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1;
-(oneway void)endAudioPowerUpdate;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
-(oneway void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5;
-(oneway void)updateWithConnectionIdentifier:(id)arg1;
-(oneway void)queryPhaticCapabilityWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)startSpeechRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)pauseSpeechRequestAtMark:(long long)arg1;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(long long)arg1;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/id)arg1;
-(oneway void)getLocalVoicesReply:(/*^block*/id)arg1;
-(oneway void)getLocalVoiceResourcesReply:(/*^block*/id)arg1;

@end

