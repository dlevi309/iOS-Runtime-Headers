/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTXPCService.h>

@class NSMutableSet, VTSiriPHash, NSString;

@interface VTXPCConnection : NSObject <VTXPCService> {

	NSMutableSet* _activationAssertions;
	BOOL _isPhraseSpotterBypassed;
	BOOL _isRecording;
	VTSiriPHash* _hasher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
-(oneway void)isLastTriggerFollowedBySpeechWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(oneway void)resetAssertions;
-(oneway void)requestCurrentBuiltInRTModelDictionaryWithReply:(/*^block*/id)arg1 ;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)enableTriggerEventXPCNotification:(BOOL)arg1 ;
-(oneway void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1 ;
-(oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
-(void)_setRaiseToSpeakBypassing:(BOOL)arg1 ;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1 ;
-(void)handleDisconnect;
-(oneway void)getTestResponse:(/*^block*/id)arg1 ;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1 ;
-(void)_setPhraseSpotterBypassing:(BOOL)arg1 ;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1 ;
-(oneway void)notifySecondChanceRequest;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1 ;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)requestAudioCapture:(double)arg1 ;
-(oneway void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
@end

