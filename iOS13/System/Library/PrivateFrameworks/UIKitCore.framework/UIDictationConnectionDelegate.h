/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDictationConnectionDelegate <NSObject>
@required
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
-(void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
-(void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2;
-(void)dictationConnectionWillStartRecording:(id)arg1;
-(void)dictationConnectionDidStartRecording:(id)arg1;
-(void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
-(void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
-(void)dictationConnectionDidEndRecording:(id)arg1;
-(void)dictationConnectionDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4;
-(void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1;
-(void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5;
-(void)dictationConnectionDidFinish:(id)arg1;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnectionDidCancelRecording:(id)arg1;

@end

