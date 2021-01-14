/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPFrameAnalysisStats, VCPVideoFaceMeshAnalyzer;

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {

	int _lastestFaceID;
	int _numFacesLastFrame;
	VCPFrameAnalysisStats* _frameStats;
	VCPVideoFaceMeshAnalyzer* _meshAnalyzer;
	float* _lastVertices;
	float _lastJawOpenness;

}
-(float)minProcessTimeIntervalInSecs;
-(int)detectFaces:(CVBufferRef)arg1 faces:(id)arg2 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(id)initWithTransform:(CGAffineTransform)arg1 frameStats:(id)arg2 faceDominated:(BOOL)arg3 ;
-(void)dealloc;
@end

