/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol SFSpeechRecognitionTaskDelegate <NSObject>
@optional
-(void)speechRecognitionDidDetectSpeech:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
-(void)speechRecognitionTaskWasCancelled:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;

@end

