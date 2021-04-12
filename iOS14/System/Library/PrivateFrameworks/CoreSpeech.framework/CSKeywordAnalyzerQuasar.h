/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_queue, CSKeywordAnalyzerQuasarScoreDelegate;
@class NSObject, NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSDictionary, NSString;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _previousUtteranceTokens;
	NSArray* _triggerTokenList;
	_EARSpeechRecognizer* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _recognizerBuffer;
	BOOL _useKeywordSpotting;
	NSDictionary* _ctcKwdToPhraseIdMap;
	double _triggerConfidence;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerQuasarScoreDelegate> _delegate;

}

@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;                                    //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (nonatomic,readonly) double triggerConfidence;                                            //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                      //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerQuasarScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSKeywordAnalyzerQuasarScoreDelegate>)delegate;
-(unsigned long long)activeChannel;
-(void)setDelegate:(id<CSKeywordAnalyzerQuasarScoreDelegate>)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)reset;
-(void)processAudioChunk:(id)arg1 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)endAudio;
-(void)dealloc;
-(double)_getConfidence:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(double)triggerConfidence;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(void)_recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)_phraseIdToCtcScoreMap;
-(void)runRecognition;
@end

