/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) float faceArea;                                                    //@synthesize faceArea=_faceArea - In the implementation block
@property (assign,nonatomic) BOOL frameProcessedByHumanAnalyzer;                                //@synthesize frameProcessedByHumanAnalyzer=_frameProcessedByHumanAnalyzer - In the implementation block
@property (assign,nonatomic) float humanPoseScore;                                              //@synthesize humanPoseScore=_humanPoseScore - In the implementation block
@property (assign,nonatomic) float humanActionScore;                                            //@synthesize humanActionScore=_humanActionScore - In the implementation block
@property (assign,nonatomic) BOOL frameProcessedByFaceDetector;                                 //@synthesize frameProcessedByFaceDetector=_frameProcessedByFaceDetector - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFaces;                                    //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) VCPVideoActivityDescriptor * videoActivityDescriptor;              //@synthesize videoActivityDescriptor=_videoActivityDescriptor - In the implementation block
-(id)init;
-(void)reset;
-(float)exposureScore;
-(void)setExposureScore:(float)arg1 ;
-(NSMutableArray *)detectedFaces;
-(void)setDetectedFaces:(NSMutableArray *)arg1 ;
-(void)setVideoActivityDescriptor:(VCPVideoActivityDescriptor *)arg1 ;
-(VCPVideoActivityDescriptor *)videoActivityDescriptor;
-(void)setCameraMotionScore:(float)arg1 ;
-(void)setSubjectActionScore:(float)arg1 ;
-(void)setInterestingnessScore:(float)arg1 ;
-(void)setColorfulnessScore:(float)arg1 ;
-(void)setFrameProcessedByVideoAnalyzer:(BOOL)arg1 ;
-(void)setSubMbMotionAvailable:(BOOL)arg1 ;
-(float)interestingnessScore;
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
-(float)faceArea;
-(void)setFaceArea:(float)arg1 ;
-(BOOL)frameProcessedByHumanAnalyzer;
-(void)setFrameProcessedByHumanAnalyzer:(BOOL)arg1 ;
-(BOOL)frameProcessedByFaceDetector;
-(void)setFrameProcessedByFaceDetector:(BOOL)arg1 ;
@end

