/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)endAudio;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(double)_getConfidence:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(void)runRecognitionWithCallback:(/*^block*/id)arg1 ;
-(void)recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)recognizedTokens;
-(double)triggerConfidence;
-(BOOL)isTriggerFollowedByWords;
@end

