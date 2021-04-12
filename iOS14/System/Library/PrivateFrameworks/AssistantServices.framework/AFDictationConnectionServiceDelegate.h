/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFDictationServiceDelegate.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {

	AFDictationConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)speechDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3 ;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 ;
-(oneway void)speechDidRecognizePackage:(id)arg1 ;
-(oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecognitionDidFinishWithError:(id)arg1 ;
-(oneway void)languageDetectorFailedWithError:(id)arg1 ;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5 ;
-(oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(oneway void)speechRecordingDidBeginWithOptions:(id)arg1 sessionUUID:(id)arg2 sessionRequestUUID:(id)arg3 ;
-(oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1 ;
-(oneway void)speechDidRecognizePartialResult:(id)arg1 ;
-(oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(id)initWithDictationConnection:(id)arg1 ;
@end

