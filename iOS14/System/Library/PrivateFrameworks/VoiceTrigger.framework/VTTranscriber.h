/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSString;

@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _previousUtteranceTokens;
	double _triggerConfidence;
	NSArray* _triggerTokenList;
	/*^block*/id _callback;
	_EARSpeechRecognizer* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _recognizerBuffer;
	BOOL _isTriggerFollowedByWords;
	BOOL _useKeywordSpotting;

}

@property (readonly) double triggerConfidence;                      //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (readonly) BOOL isTriggerFollowedByWords;                 //@synthesize isTriggerFollowedByWords=_isTriggerFollowedByWords - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)endAudio;
-(double)_getConfidence:(id)arg1 ;
-(double)triggerConfidence;
-(id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(void)runRecognitionWithCallback:(/*^block*/id)arg1 ;
-(void)recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)recognizedTokens;
-(BOOL)isTriggerFollowedByWords;
@end

