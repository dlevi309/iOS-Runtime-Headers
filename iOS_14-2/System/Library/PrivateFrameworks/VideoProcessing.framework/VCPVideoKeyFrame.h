/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface VCPVideoKeyFrame : NSObject {

	float _subjectAction;
	float _cameraMotion;
	float _interestingness;
	float _obstruction;
	float _colorfulness;
	BOOL _isLivePhoto;
	BOOL _subMb;
	BOOL _isHeadingFrame;
	float _score;
	float _semanticScore;
	float _sharpness;
	float _faceSharpness;
	float _exposureScore;
	float _textureScore;
	float _expressionChangeScore;
	float _overallFaceQualityScore;
	float _qualityScoreForLivePhoto;
	float _globalQualityScore;
	float _visualPleasingScore;
	float _penaltyScore;
	float _contentScore;
	float _humanPoseScore;
	float _humanActionScore;
	unsigned long long _statsFlags;
	NSMutableArray* _detectedFaces;
	NSMutableArray* _faceQualityScores;
	NSMutableDictionary* _frameResults;
	SCD_Struct_VC6 _timestamp;

}

@property (assign,nonatomic) SCD_Struct_VC6 timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float semanticScore;                             //@synthesize semanticScore=_semanticScore - In the implementation block
@property (assign,nonatomic) float sharpness;                                 //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) float faceSharpness;                             //@synthesize faceSharpness=_faceSharpness - In the implementation block
@property (assign,nonatomic) float exposureScore;                             //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) BOOL isHeadingFrame;                             //@synthesize isHeadingFrame=_isHeadingFrame - In the implementation block
@property (assign,nonatomic) float textureScore;                              //@synthesize textureScore=_textureScore - In the implementation block
@property (assign,nonatomic) float expressionChangeScore;                     //@synthesize expressionChangeScore=_expressionChangeScore - In the implementation block
@property (assign,nonatomic) unsigned long long statsFlags;                   //@synthesize statsFlags=_statsFlags - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFaces;                  //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceQualityScores;              //@synthesize faceQualityScores=_faceQualityScores - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameResults;              //@synthesize frameResults=_frameResults - In the implementation block
@property (assign,nonatomic) float overallFaceQualityScore;                   //@synthesize overallFaceQualityScore=_overallFaceQualityScore - In the implementation block
@property (assign,nonatomic) float qualityScoreForLivePhoto;                  //@synthesize qualityScoreForLivePhoto=_qualityScoreForLivePhoto - In the implementation block
@property (assign,nonatomic) float globalQualityScore;                        //@synthesize globalQualityScore=_globalQualityScore - In the implementation block
@property (assign,nonatomic) float visualPleasingScore;                       //@synthesize visualPleasingScore=_visualPleasingScore - In the implementation block
@property (assign,nonatomic) float penaltyScore;                              //@synthesize penaltyScore=_penaltyScore - In the implementation block
@property (assign,nonatomic) float contentScore;                              //@synthesize contentScore=_contentScore - In the implementation block
@property (assign,nonatomic) float humanPoseScore;                            //@synthesize humanPoseScore=_humanPoseScore - In the implementation block
@property (assign,nonatomic) float humanActionScore;                          //@synthesize humanActionScore=_humanActionScore - In the implementation block
-(float)contentScore;
-(float)exposureScore;
-(float)globalQualityScore;
-(float)score;
-(SCD_Struct_VC6)timestamp;
-(id)initWithLivePhoto:(BOOL)arg1 ;
-(void)setScore:(float)arg1 ;
-(void)setStatsFlags:(unsigned long long)arg1 ;
-(float)faceSharpness;
-(BOOL)isHeadingFrame;
-(float)computeGlobalQuality;
-(float)computeScoreFromColorfulness;
-(float)computePenaltyScore;
-(float)computeScoreFromExposure;
-(float)computeExpressionScore;
-(float)computeScoreFromAction;
-(void)computeGlobalQualityForLivePhoto;
-(float)computeVisualPleasingScore;
-(float)computeContentScore;
-(void)computeCurationScoreComponents;
-(void)storeFrameResults;
-(void)printStats;
-(void)setFrameResults:(NSMutableDictionary *)arg1 ;
-(void)setContentScore:(float)arg1 ;
-(int)loadKeyFrameResult:(id)arg1 timestamp:(SCD_Struct_VC6)arg2 ;
-(void)setFaceSharpness:(float)arg1 ;
-(void)computeCurationScore;
-(NSMutableDictionary *)frameResults;
-(BOOL)hasGoodSubjectAction;
-(void)setIsHeadingFrame:(BOOL)arg1 ;
-(void)resetStatsFlag;
-(void)setFaceStatsFlag:(BOOL)arg1 detectedFaces:(id)arg2 ;
-(void)setExpressionChangeScore:(float)arg1 ;
-(void)setMotionStatsFlag:(BOOL)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 exposureScore:(float)arg7 humanActionStatsFlag:(BOOL)arg8 humanPoseScore:(float)arg9 humanActionScore:(float)arg10 subMb:(BOOL)arg11 ;
-(NSMutableArray *)faceQualityScores;
-(void)setFaceQualityScores:(NSMutableArray *)arg1 ;
-(unsigned long long)statsFlags;
-(void)setExposureScore:(float)arg1 ;
-(float)sharpness;
-(void)setSharpness:(float)arg1 ;
-(void)setGlobalQualityScore:(float)arg1 ;
-(float)semanticScore;
-(float)humanActionScore;
-(float)humanPoseScore;
-(void)setTimestamp:(SCD_Struct_VC6)arg1 ;
-(void)setHumanActionScore:(float)arg1 ;
-(void)setHumanPoseScore:(float)arg1 ;
-(float)qualityScoreForLivePhoto;
-(void)setQualityScoreForLivePhoto:(float)arg1 ;
-(float)visualPleasingScore;
-(void)setVisualPleasingScore:(float)arg1 ;
-(float)overallFaceQualityScore;
-(void)setOverallFaceQualityScore:(float)arg1 ;
-(float)penaltyScore;
-(void)setPenaltyScore:(float)arg1 ;
-(float)textureScore;
-(void)setTextureScore:(float)arg1 ;
-(void)copyFrom:(id)arg1 ;
-(float)expressionChangeScore;
-(void)setSemanticScore:(float)arg1 ;
-(NSMutableArray *)detectedFaces;
-(void)setDetectedFaces:(NSMutableArray *)arg1 ;
@end

