/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISpeechSynthesisLocalDelegate <NSObject>
@required
-(void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
-(void)speechSynthesis:(id)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(BOOL)speechSynthesisConnectionIsRecording:(id)arg1;
-(void)speechSynthesisDidFinish:(id)arg1;
-(void)speechSynthesis:(id)arg1 didUpdatePowerLevelTo:(float)arg2;

@end

