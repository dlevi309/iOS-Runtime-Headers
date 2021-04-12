/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPFrameAnalysisStats, VCPFrameScoreFilter;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {

	EncodeAnalysis* _encodeAnalysis;
	PreEncodeAnalysis* _preencodeAnalysis;
	ObstructionAnalysis* _obstructionAnalysis;
	SceneAnalysis* _sceneAnalysis;
	MotionFilter* _motionFilter;
	MetaDataAnalysis* _metadataAnalysis;
	IrisAnalysis* _irisAnalysis;
	FrameBuffer* _frameBuffer;
	Histogram* _idealHistogram;
	BOOL _isTimelapse;
	BOOL _isIris;
	BOOL _isSlowMo;
	int _orientation;
	BOOL _finalized;
	BOOL _hasInterestingScene;
	BOOL _isCaptureAnalysis;
	NSMutableDictionary* _privateResults;
	VCPFrameAnalysisStats* _videoFrameAnalysis;
	VCPFrameScoreFilter* _trackScoreFilter;
	float _qualityScore;
	float _actionScore;
	float _interestingnessScore;
	float _obstructionScore;
	float _trackingScore;

}

@property (assign) float qualityScore;                      //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign) float actionScore;                       //@synthesize actionScore=_actionScore - In the implementation block
@property (assign) float interestingnessScore;              //@synthesize interestingnessScore=_interestingnessScore - In the implementation block
@property (assign) float obstructionScore;                  //@synthesize obstructionScore=_obstructionScore - In the implementation block
@property (assign) float trackingScore;                     //@synthesize trackingScore=_trackingScore - In the implementation block
+(BOOL)useSceneprintInSceneAnalysis;
-(void)dealloc;
-(id)results;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(void)setActionScore:(float)arg1 ;
-(float)actionScore;
-(int)process:(int)arg1 ;
-(int)seedAnalyzersWithPixelBuffer:(CVBufferRef)arg1 startTime:(SCD_Struct_VC6)arg2 ;
-(void)reviseFrameTrackScore:(Frame*)arg1 saliencyRegions:(id)arg2 ;
-(void)processAndEstimateQualityScore:(Frame*)arg1 ;
-(void)setInterestingnessScore:(float)arg1 ;
-(float)computeExposureScoreOfFrame:(Frame*)arg1 ;
-(float)interestingnessScore;
-(int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3 ;
-(float)estimateQualityScore:(Frame*)arg1 ;
-(int)addResult:(CFArrayRef)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4 ;
-(id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(BOOL)arg5 isIris:(BOOL)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9 ;
-(void)prepareVideoAnalysisByScenes:(id)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(id)privateResults;
-(float)getSceneSwichFrequency;
-(void)setNextCaptureFrame:(CVBufferRef)arg1 ;
-(float)qualityScore;
-(void)setQualityScore:(float)arg1 ;
-(float)obstructionScore;
-(void)setObstructionScore:(float)arg1 ;
-(float)trackingScore;
-(void)setTrackingScore:(float)arg1 ;
@end

