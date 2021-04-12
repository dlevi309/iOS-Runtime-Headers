/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface VTXPCServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _vtxConnection;

}
-(id)init;
-(void)dealloc;
-(id)_service;
-(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
-(void)notifySecondChanceRequest;
-(void)notifyTriggerEventRequest;
-(void)resetAssertions;
-(void)clearVoiceTriggerCount;
-(void)requestAudioCapture:(double)arg1 ;
-(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
-(void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(unsigned char)getLastTriggerType;
-(long long)getVoiceTriggerCount;
-(id)getFirstChanceAudioBuffer;
-(id)getFirstChanceVTEventInfo;
-(id)getFirstChanceTriggeredDate;
-(long long)isLastTriggerFollowedBySpeech;
-(id)requestCurrentVoiceTriggerAssetDictionary;
-(id)requestCurrentBuiltInRTModelDictionary;
@end

