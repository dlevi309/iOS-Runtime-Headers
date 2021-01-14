/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/SFSpeechRecognitionTask.h>

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {

	/*^block*/id _resultHandler;
	BOOL _hasFiredFinalResult;

}
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2 ;
-(void)_finalizeResultHandler;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

