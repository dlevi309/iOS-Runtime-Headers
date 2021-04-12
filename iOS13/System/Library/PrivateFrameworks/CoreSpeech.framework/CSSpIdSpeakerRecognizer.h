/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

@class NSDictionary;


@protocol CSSpIdSpeakerRecognizer <NSObject>
@property (nonatomic,readonly) NSDictionary * lastSpeakerIdInfo; 
@required
-(id)initWithContext:(id)arg1 delegate:(id)arg2;
-(void)processAudioChunk:(id)arg1;
-(void)setCVTTriggerPhraseDetected;
-(void)recordingStoppedForReason:(long long)arg1;
-(void)processMyriadDecision:(unsigned long long)arg1;
-(NSDictionary *)lastSpeakerIdInfo;

@end

