/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVoiceTriggerDelegate <NSObject>
@optional
-(void)voiceTriggerGotSuperVector:(id)arg1;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1;
-(void)keywordDetectorDidDetectKeyword;
-(void)voiceTriggerDidRejected:(id)arg1;
-(void)raiseToSpeakDetected:(id)arg1;

@required
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;

@end

