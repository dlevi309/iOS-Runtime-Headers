/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(BOOL)arg3 error:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishPrewarmRequest:(id)arg2 withError:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withError:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequestAtEnd:(BOOL)arg2 error:(id)arg3;
-(void)speechSynthesizerDidStartSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
-(void)speechSynthesizerDidPauseSpeaking:(id)arg1;
-(void)speechSynthesizerDidContinueSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2;

@end
