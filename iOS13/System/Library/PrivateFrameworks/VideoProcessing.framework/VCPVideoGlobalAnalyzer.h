/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoGlobalAnalyzer : NSObject
-(float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2 ;
-(int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2 usingFaceAction:(BOOL)arg3 ;
-(int)setActivityLevel:(id)arg1 ;
-(BOOL)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2 ;
-(float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2 ;
-(float)assetActionScoreFromAnalysis:(id)arg1 ;
-(float)assetExpressionScoreFromAnalysis:(id)arg1 ;
-(float)assetVoiceScoreFromAnalysis:(id)arg1 ;
-(float)assetJunkScoreFromAnalysis:(id)arg1 ;
-(float)assetCameraMotionScoreFromAnalysis:(id)arg1 ;
-(float)scaleForTimeRange:(SCD_Struct_VC28)arg1 basedOnFace:(id)arg2 ;
-(BOOL)isJunkTimeRange:(SCD_Struct_VC28)arg1 basedOnResults:(id)arg2 ;
-(float)subjectActivityInTimeRange:(SCD_Struct_VC28)arg1 fromResults:(id)arg2 ;
-(float)cameraActivityfromQuality:(float)arg1 ;
-(float)assetActivityLevelFromAnalysisResults:(id)arg1 ;
@end

