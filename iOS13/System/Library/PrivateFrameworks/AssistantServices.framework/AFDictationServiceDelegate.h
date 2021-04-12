/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFDictationServiceDelegate <NSObject>
@required
-(oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
-(oneway void)speechRecordingDidBeginWithOptions:(id)arg1;
-(oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1;
-(oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5;
-(oneway void)speechDidRecognizePartialResult:(id)arg1;
-(oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;
-(oneway void)speechDidProcessAudioDuration:(double)arg1;
-(oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
-(oneway void)speechRecognitionDidFinishWithError:(id)arg1;
-(oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
-(oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4;
-(oneway void)speechDidRecognizePackage:(id)arg1;
-(oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3;
-(oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1;
-(oneway void)languageDetectorFailedWithError:(id)arg1;

@end

