/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNFaceLandmarkDetector, VCPPnPSolver, VCPVideoFacePoseFilter;

@interface VCPVideoFacePoseAnalyzer : NSObject {

	VCPCNNFaceLandmarkDetector* _landmarkDetector;
	VCPPnPSolver* _poseEstimator;
	VCPVideoFacePoseFilter* _filter;
	float _focalLengthInPixels;
	SCD_Struct_VC6 _lastTimestamp;
	int _width;
	int _height;
	float _points2D[14];
	float _points3D[21];
	SCD_Struct_VC41 _pose;

}

@property (assign) SCD_Struct_VC41 pose;              //@synthesize pose=_pose - In the implementation block
-(id)init;
-(SCD_Struct_VC41)pose;
-(void)setPose:(SCD_Struct_VC41)arg1 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
@end

