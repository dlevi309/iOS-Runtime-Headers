/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_queue;
@class _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognitionResultPackage, NSObject, NSURL, NSString, NSLocale;

@interface _LTSpeechRecognizer : NSObject <_EARSpeechRecognitionResultStream> {

	_EARSpeechRecognizer* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _buffer;
	BOOL _detectedSpeechEndpoint;
	_EARSpeechRecognitionResultPackage* _finalResult;
	NSObject*<OS_dispatch_queue> _recognitionQueue;
	NSURL* _modelURL;
	NSString* _modelVersion;
	NSLocale* _language;
	/*^block*/id _recognitionHandler;

}

@property (nonatomic,copy) id recognitionHandler;                    //@synthesize recognitionHandler=_recognitionHandler - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                     //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) NSString * modelVersion;              //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) NSLocale * language;                  //@synthesize language=_language - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)modelVersion;
-(NSURL *)modelURL;
-(void)cancelRecognition;
-(id)initWithModelURL:(id)arg1 language:(id)arg2 modelVersion:(id)arg3 ;
-(void)triggerServerSideEndPointer;
-(void)startRecognitionWithAutoStop:(BOOL)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(id)recognitionHandler;
-(void)_recognizedResult:(id)arg1 error:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2 ;
-(void)setRecognitionHandler:(id)arg1 ;
-(void)endAudio;
-(NSLocale *)language;
@end

