/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface VTXPCServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _vtxConnection;

}
-(id)_service;
-(id)init;
-(id)requestCurrentVoiceTriggerAssetDictionary;
-(void)resetAssertions;
-(void)clearVoiceTriggerCount;
-(id)getFirstChanceVTEventInfo;
-(void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
-(unsigned char)getLastTriggerType;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(id)requestCurrentBuiltInRTModelDictionary;
-(long long)getVoiceTriggerCount;
-(id)getFirstChanceAudioBuffer;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
-(long long)isLastTriggerFollowedBySpeech;
-(void)notifySecondChanceRequest;
-(id)getFirstChanceTriggeredDate;
-(void)notifyTriggerEventRequest;
-(void)requestAudioCapture:(double)arg1 ;
-(void)dealloc;
@end

