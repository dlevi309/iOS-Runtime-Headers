/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSMutableArray, VCPVideoActivityDescriptor;

@interface VCPFrameAnalysisStats : NSObject {

	BOOL _frameProcessedByVideoAnalyzer;
	BOOL _subMbMotionAvailable;
	BOOL _frameProcessedByHumanAnalyzer;
	BOOL _frameProcessedByFaceDetector;
	float _cameraMotionScore;
	float _subjectActionScore;
	float _interestingnessScore;
	float _obstructionScore;
	float _exposureScore;
	float _colorfulnessScore;
	float _frameExpressionScore;
	float _faceArea;
	float _humanPoseScore;
	float _humanActionScore;
	NSMutableArray* _detectedFaces;
	VCPVideoActivityDescriptor* _videoActivityDescriptor;

}

@property (assign,nonatomic) BOOL frameProcessedByVideoAnalyzer;                                //@synthesize frameProcessedByVideoAnalyzer=_frameProcessedByVideoAnalyzer - In the implementation block
@property (assign,nonatomic) float cameraMotionScore;                                           //@synthesize cameraMotionScore=_cameraMotionScore - In the implementation block
@property (assign,nonatomic) float subjectActionScore;                                          //@synthesize subjectActionScore=_subjectActionScore - In the implementation block
@property (assign,nonatomic) float interestingnessScore;                                        //@synthesize interestingnessScore=_interestingnessScore - In the implementation block
@property (assign,nonatomic) float obstructionScore;                                            //@synthesize obstructionScore=_obstructionScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                                               //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float colorfulnessScore;                                           //@synthesize colorfulnessScore=_colorfulnessScore - In the implementation block
@property (assign,nonatomic) BOOL subMbMotionAvailable;                                         //@synthesize subMbMotionAvailable=_subMbMotionAvailable - In the implementation block
@property (assign,nonatomic) float frameExpressionScore;                                        //@synthesize frameExpressionScore=_frameExpressionScore - In the implementation block
@property (assign,nonatomic) float faceArea;                                                    //@synthesize faceArea=_faceArea - In the implementation block
@property (assign,nonatomic) BOOL frameProcessedByHumanAnalyzer;                                //@synthesize frameProcessedByHumanAnalyzer=_frameProcessedByHumanAnalyzer - In the implementation block
@property (assign,nonatomic) float humanPoseScore;                                              //@synthesize humanPoseScore=_humanPoseScore - In the implementation block
@property (assign,nonatomic) float humanActionScore;                                            //@synthesize humanActionScore=_humanActionScore - In the implementation block
@property (assign,nonatomic) BOOL frameProcessedByFaceDetector;                                 //@synthesize frameProcessedByFaceDetector=_frameProcessedByFaceDetector - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFaces;                                    //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) VCPVideoActivityDescriptor * videoActivityDescriptor;              //@synthesize videoActivityDescriptor=_videoActivityDescriptor - In the implementation block
-(float)exposureScore;
-(id)init;
-(void)setExposureScore:(float)arg1 ;
-(void)setVideoActivityDescriptor:(VCPVideoActivityDescriptor *)arg1 ;
-(VCPVideoActivityDescriptor *)videoActivityDescriptor;
-(float)frameExpressionScore;
-(void)setFrameExpressionScore:(float)arg1 ;
-(void)setCameraMotionScore:(float)arg1 ;
-(void)setSubjectActionScore:(float)arg1 ;
-(void)setInterestingnessScore:(float)arg1 ;
-(void)setColorfulnessScore:(float)arg1 ;
-(void)setFrameProcessedByVideoAnalyzer:(BOOL)arg1 ;
-(void)setSubMbMotionAvailable:(BOOL)arg1 ;
-(float)interestingnessScore;
-(void)reset;
-(float)faceArea;
-(float)obstructionScore;
-(void)setObstructionScore:(float)arg1 ;
-(float)humanActionScore;
-(float)humanPoseScore;
-(void)setHumanActionScore:(float)arg1 ;
-(void)setHumanPoseScore:(float)arg1 ;
-(BOOL)frameProcessedByVideoAnalyzer;
-(float)cameraMotionScore;
-(float)subjectActionScore;
-(float)colorfulnessScore;
-(BOOL)subMbMotionAvailable;
-(void)setFaceArea:(float)arg1 ;
-(BOOL)frameProcessedByHumanAnalyzer;
-(void)setFrameProcessedByHumanAnalyzer:(BOOL)arg1 ;
-(BOOL)frameProcessedByFaceDetector;
-(void)setFrameProcessedByFaceDetector:(BOOL)arg1 ;
-(NSMutableArray *)detectedFaces;
-(void)setDetectedFaces:(NSMutableArray *)arg1 ;
@end

