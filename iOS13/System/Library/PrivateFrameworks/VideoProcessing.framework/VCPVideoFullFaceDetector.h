/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPCNNSmileDetector, VCPCNNPoseEstimator, NSArray, VCPFrameAnalysisStats, NSMutableDictionary, NSMutableArray;

@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector {

	int _latestTrackID;
	VCPCNNSmileDetector* _smileDetector;
	VCPCNNPoseEstimator* _poseEstimator;
	NSArray* _existingFaceprints;
	VCPFrameAnalysisStats* _frameStats;
	float _latestFrameArea;
	SCD_Struct_VC6 _timeLastTracking;
	NSMutableDictionary* _faceTrackers;
	NSMutableDictionary* _keyFaces;
	NSMutableArray* _reservedIDs;
	NSMutableDictionary* _facePrints;
	NSMutableArray* _allFaces;
	NSMutableDictionary* _faceRanges;
	NSMutableArray* _frameFaceResults;

}
-(void)dealloc;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(id)frameFaceResults;
-(id)initWithTransform:(CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 ;
-(id)faceRanges;
-(BOOL)compareFace:(id)arg1 withFace:(id)arg2 ;
-(void)removeSmallestKeyFace;
-(int)detectTrackFacesInFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 faces:(id)arg3 ;
-(int)clusterFaces;
-(int)updateWithExistingFaces;
-(BOOL)locationChange:(CGRect)arg1 relativeTo:(CGRect)arg2 landscape:(BOOL)arg3 ;
-(float)minProcessTimeIntervalInSecs;
-(int)detectFaces:(CVBufferRef)arg1 faces:(id)arg2 ;
@end

