/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPFrameAnalysisStats;

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {

	int _lastestFaceID;
	int _numFacesLastFrame;
	VCPFrameAnalysisStats* _frameStats;

}
-(void)dealloc;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(id)initWithTransform:(CGAffineTransform)arg1 frameStats:(id)arg2 ;
-(float)minProcessTimeIntervalInSecs;
-(int)detectFaces:(CVBufferRef)arg1 faces:(id)arg2 ;
@end

