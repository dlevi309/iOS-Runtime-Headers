/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPImageBlurAnalyzer, VCPImageFaceQualityAnalyzer, NSDictionary, NSArray, NSMutableArray, VCPVideoKeyFrame, VCPFrameAnalysisStats;

@interface VCPVideoKeyFrameAnalyzer : NSObject {

	VCPImageBlurAnalyzer* _blurAnalyzer;
	VCPImageFaceQualityAnalyzer* _faceQualityAnalyzer;
	NSDictionary* _faceRanges;
	NSArray* _junkResults;
	NSMutableArray* _keyFrames;
	SCD_Struct_VC28 _timeRange;
	VCPVideoKeyFrame* _activeKeyFrame;
	VCPFrameAnalysisStats* _frameStats;
	BOOL _isLivePhoto;
	NSMutableArray* _keyFrameScores;
	NSArray* _inputKeyFrameResults;

}
-(id)initWithTransform:(CGAffineTransform)arg1 timeRange:(SCD_Struct_VC28)arg2 isLivePhoto:(BOOL)arg3 frameStats:(id)arg4 keyFrameResults:(id)arg5 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 ;
-(void)preparePostProcessingStatsFromFaceRange:(id)arg1 junkResults:(id)arg2 ;
-(int)postProcess;
-(id)keyFrames;
-(id)keyFrameScores;
-(void)setKeyFrameTime:(SCD_Struct_VC6)arg1 isHeadingFrame:(BOOL)arg2 ;
-(void)prepareFrameStats:(SCD_Struct_VC6)arg1 ;
-(int)computeSharpnessOfFrame:(CVBufferRef)arg1 ;
-(int)computeFaceQualityOfFrame:(CVBufferRef)arg1 ;
-(int)finalizeKeyFrame;
-(void)adjustScoreByFace;
-(void)modulateByJunk;
-(void)modulateByTimeRange;
-(void)setBlurAnalyzerFaceResults:(id)arg1 ;
-(int)loadKeyFrameResults:(SCD_Struct_VC6)arg1 ;
-(void)modulateByExposure;
-(float)computeMinDistanceBetween:(id)arg1 withSet:(id)arg2 ;
@end

