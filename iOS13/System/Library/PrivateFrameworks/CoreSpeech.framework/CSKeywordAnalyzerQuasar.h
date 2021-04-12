/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<CSKeywordAnalyzerQuasarScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerQuasarScoreDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)endAudio;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(double)_getConfidence:(id)arg1 ;
-(double)triggerConfidence;
-(void)processAudioChunk:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(void)runRecognition;
-(void)_recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)_phraseIdToCtcScoreMap;
-(NSDictionary *)ctcKwdToPhraseIdMap;
@end

