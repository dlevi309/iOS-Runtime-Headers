/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPFrameAnalysisStats, VCPFrameScoreFilter, NSDictionary, VCPMotionFlowSubtleMotionAnalyzer, NSArray;

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
	NSDictionary* _metaMotionResults;
	BOOL _faceDominated;
	VCPMotionFlowSubtleMotionAnalyzer* _subtleMotionAnalyzer;
	int _sceneType;
	float _qualityScore;
	float _actionScore;
	float _interestingnessScore;
	float _obstructionScore;
	float _trackingScore;
	NSDictionary* _objectsMotion;
	NSArray* _globalMotion;

}

@property (assign) float qualityScore;                                    //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign) float actionScore;                                     //@synthesize actionScore=_actionScore - In the implementation block
@property (assign) float interestingnessScore;                            //@synthesize interestingnessScore=_interestingnessScore - In the implementation block
@property (assign) float obstructionScore;                                //@synthesize obstructionScore=_obstructionScore - In the implementation block
@property (assign) float trackingScore;                                   //@synthesize trackingScore=_trackingScore - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectsMotion;              //@synthesize objectsMotion=_objectsMotion - In the implementation block
@property (nonatomic,readonly) NSArray * globalMotion;                    //@synthesize globalMotion=_globalMotion - In the implementation block
+(BOOL)useSceneprintInSceneAnalysis;
-(id)results;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)process:(int)arg1 ;
-(float)trackingScore;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 flags:(unsigned long long*)arg5 ;
-(int)seedAnalyzersWithPixelBuffer:(CVBufferRef)arg1 startTime:(SCD_Struct_VC6)arg2 ;
-(void)setActionScore:(float)arg1 ;
-(float)estimateExpressionScore:(id)arg1 encodeStats:(EncodeStats*)arg2 frameWidth:(int)arg3 frameHeight:(int)arg4 ;
-(int)isStableMetaMotion:(SCD_Struct_VC6)arg1 ;
-(void)reviseFrameTrackScore:(Frame*)arg1 saliencyRegions:(id)arg2 ;
-(void)processAndEstimateQualityScore:(Frame*)arg1 ;
-(float)actionScore;
-(void)setInterestingnessScore:(float)arg1 ;
-(float)computeExposureScoreOfFrame:(Frame*)arg1 ;
-(float)interestingnessScore;
-(float)qualityScore;
-(int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3 ;
-(float)estimateQualityScore:(Frame*)arg1 ;
-(int)addResult:(CFArrayRef)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4 ;
-(id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(BOOL)arg5 isIris:(BOOL)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9 faceDominated:(BOOL)arg10 ;
-(void)prepareVideoAnalysisByScenes:(id)arg1 ;
-(void)prepareLivePhotoAnalysisByScenes:(id)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(id)privateResults;
-(float)getSceneSwichFrequency;
-(void)setNextCaptureFrame:(CVBufferRef)arg1 ;
-(void)setQualityScore:(float)arg1 ;
-(float)obstructionScore;
-(void)setObstructionScore:(float)arg1 ;
-(NSDictionary *)objectsMotion;
-(void)setTrackingScore:(float)arg1 ;
-(NSArray *)globalMotion;
-(void)dealloc;
@end

