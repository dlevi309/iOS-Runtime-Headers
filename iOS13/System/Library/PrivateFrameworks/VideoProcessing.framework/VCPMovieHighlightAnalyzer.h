/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSArray, NSMutableArray;

@interface VCPMovieHighlightAnalyzer : NSObject {

	NSArray* _junkResults;
	NSArray* _qualityResults;
	NSArray* _faceResults;
	NSArray* _saliencyResults;
	NSArray* _actionResults;
	NSArray* _subtleMotionResults;
	NSArray* _voiceResults;
	NSArray* _featureResults;
	NSArray* _humanActionResults;
	NSArray* _humanPoseResults;
	NSArray* _cameraMotionResults;
	NSArray* _keyFrameResults;
	NSMutableArray* _expressionSegments;
	NSMutableArray* _internalResults;
	NSMutableArray* _internalConstraintResults;
	CGSize _frameSize;
	BOOL _isLivePhoto;
	BOOL _verbose;
	BOOL _hadFlash;

}
-(id)results;
-(BOOL)addSegment:(id)arg1 ;
-(id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(BOOL)arg2 hadFlash:(BOOL)arg3 ;
-(int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 saliencyResult:(id)arg5 actionResult:(id)arg6 subtleMotionResult:(id)arg7 voiceResult:(id)arg8 keyFrameResult:(id)arg9 humanActionResults:(id)arg10 humanPoseResults:(id)arg11 cameraMotionResults:(id)arg12 frameSize:(CGSize)arg13 ;
-(int)generateHighlights;
-(id)movieSummary;
-(int)generateInitialSegments;
-(int)computeHighlightScoreWithConstraint;
-(SCD_Struct_VC28)computeQualityTrimFor:(SCD_Struct_VC28)arg1 ;
-(SCD_Struct_VC28)computeActionFaceTrimFor:(SCD_Struct_VC28)arg1 ;
-(SCD_Struct_VC28)computeSteadyTranslationTrimFor:(SCD_Struct_VC28)arg1 ;
-(void)generateExpressionSegments:(SCD_Struct_VC28)arg1 ;
-(float)analyzeOverallQuality:(SCD_Struct_VC28)arg1 ;
-(id)pickKeyFramesInRange:(SCD_Struct_VC28)arg1 ;
-(CGRect)computeBestPlaybackCrop:(SCD_Struct_VC28)arg1 ;
-(void)mergeShortSegments;
-(void)mergeSimilarSegments;
-(void)SetKeyFramesForSegments:(id)arg1 ;
-(float)computeExpressionScoreInTimerange:(SCD_Struct_VC28)arg1 ;
-(float)computeActionScoreInTimerange:(SCD_Struct_VC28)arg1 ;
-(float)computeVoiceScoreInTimeRange:(SCD_Struct_VC28)arg1 ;
-(void)computeHighlightScoreOfSegment:(id)arg1 ;
-(int)evaluateSegment:(id)arg1 ;
-(void)searchFeatureVectorOfSegment:(id)arg1 ;
-(float)computeHumanActionScoreInTimerange:(SCD_Struct_VC28)arg1 ;
-(float)computeHumanPoseScoreInTimerange:(SCD_Struct_VC28)arg1 ;
-(float)qualityScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)actionScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)subtleMotionScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)expressionScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)voiceScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)junkScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)cameraMotionScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)visualPleasingScoreForTimerange:(SCD_Struct_VC28)arg1 ;
-(float)computeHighlightScoreOfRange:(SCD_Struct_VC28)arg1 ;
@end

