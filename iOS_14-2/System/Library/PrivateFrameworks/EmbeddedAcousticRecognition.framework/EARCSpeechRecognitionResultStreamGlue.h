/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@class NSString;

@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream> {

	EARCSpeechRecognitionResultStream* _stream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStream:(EARCSpeechRecognitionResultStream*)arg1 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4 ;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2 ;
-(void)dealloc;
@end

