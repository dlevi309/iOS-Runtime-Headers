/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVoiceTriggerDelegate <NSObject>
@optional
-(void)voiceTriggerDidDetectNearMiss:(id)arg1;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
-(void)keywordDetectorDidDetectKeyword;
-(void)voiceTriggerGotSuperVector:(id)arg1;
-(void)raiseToSpeakDetected:(id)arg1;

@required
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;

@end

