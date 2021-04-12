/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol VTXPCService <NSObject>
@required
-(oneway void)getTestResponse:(/*^block*/id)arg1;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;
-(oneway void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
-(oneway void)notifySecondChanceRequest;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1;
-(oneway void)resetAssertions;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1;
-(oneway void)isLastTriggerFollowedBySpeechWithReply:(/*^block*/id)arg1;
-(oneway void)requestAudioCapture:(double)arg1;
-(oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1;
-(oneway void)requestCurrentBuiltInRTModelDictionaryWithReply:(/*^block*/id)arg1;
-(oneway void)setCurrentBuiltInRTModelDictionary:(id)arg1;
-(oneway void)enableTriggerEventXPCNotification:(BOOL)arg1;

@end

