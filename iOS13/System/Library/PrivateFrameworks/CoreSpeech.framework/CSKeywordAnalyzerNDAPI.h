/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CSKeywordAnalyzerNDAPIScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerNDAPIScoreDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(id)getAnalyzedResult;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(float)getRejectLoggingThreshold;
-(void)setActivePhraseId:(unsigned)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(float)getThreshold;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(float)getLoggingThreshold;
-(unsigned)activePhraseId;
@end

