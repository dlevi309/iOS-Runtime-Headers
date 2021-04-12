/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISpeechSynthesisLocalDelegate <NSObject>
@required
-(void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
-(void)speechSynthesis:(id)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(BOOL)speechSynthesisConnectionIsRecording:(id)arg1;
-(void)speechSynthesisDidFinish:(id)arg1;

@end

