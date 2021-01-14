/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol VTKeywordDetectorDelegate;
@class NSMutableArray, VTKeywordDetectorAssets, VTKeywordDetectorContext;

@interface VTKeywordDetector : NSObject {

	NSMutableArray* _analyzers;
	VTKeywordDetectorAssets* _asset;
	VTKeywordDetectorContext* _context;
	id<VTKeywordDetectorDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableArray * analyzers;                                 //@synthesize analyzers=_analyzers - In the implementation block
@property (nonatomic,retain) VTKeywordDetectorAssets * asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) VTKeywordDetectorContext * context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<VTKeywordDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAsset:(VTKeywordDetectorAssets *)arg1 ;
-(id<VTKeywordDetectorDelegate>)delegate;
-(VTKeywordDetectorAssets *)asset;
-(VTKeywordDetectorContext *)context;
-(id)_fetchResults;
-(void)setDelegate:(id<VTKeywordDetectorDelegate>)arg1 ;
-(void)endAudio;
-(void)setContext:(VTKeywordDetectorContext *)arg1 ;
-(id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(NSMutableArray *)analyzers;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getKeywordDetectorResults;
-(id)_analyzeAndConstructFinalResults:(id)arg1 ;
-(float)_getScoreForPhraseId:(unsigned long long)arg1 withScaleFactor:(float)arg2 fromResults:(id)arg3 ;
-(void)resetWithSamplingRate:(long long)arg1 withAudioSource:(id)arg2 ;
-(id)getKeywordDetectorDetailedResults;
-(void)setAnalyzers:(NSMutableArray *)arg1 ;
@end

