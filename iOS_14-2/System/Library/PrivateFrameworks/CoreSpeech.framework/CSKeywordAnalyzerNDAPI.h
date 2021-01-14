/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSKeywordAnalyzerNDAPIScoreDelegate;
@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {

	CSNovDetector* _novDetector;
	unsigned long long _startAnalyzeSampleCount;
	BOOL _isStartSampleCountMarked;
	unsigned long long _lastSampleFed;
	unsigned long long _sampleFedWrapAroundOffset;
	unsigned _activePhraseId;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                     //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) unsigned activePhraseId;                                              //@synthesize activePhraseId=_activePhraseId - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(float)getLoggingThreshold;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id<CSKeywordAnalyzerNDAPIScoreDelegate>)delegate;
-(void)setActivePhraseId:(unsigned)arg1 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(unsigned long long)activeChannel;
-(id)getAnalyzedMpVtResults;
-(void)_resetStartAnalyzeTime;
-(void)setDelegate:(id<CSKeywordAnalyzerNDAPIScoreDelegate>)arg1 ;
-(float)getRejectLoggingThreshold;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned)activePhraseId;
-(void)reset;
-(id)getAnalyzedResult;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)resetBest;
-(float)getThreshold;
-(id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned)arg1 withNovDetectorResult:(id)arg2 ;
@end

