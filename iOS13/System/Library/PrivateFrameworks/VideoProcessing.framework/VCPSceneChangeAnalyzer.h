/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPSceneChangeSegment, NSMutableArray;

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {

	float _sceneDeltaBuffer[10];
	FrameBuffer* _frameBuffer;
	VCPSceneChangeSegment* _activeSegment;
	NSMutableArray* _sceneSegments;
	BOOL _verbose;
	BOOL _firstFrame;
	SCD_Struct_VC28 _frameTimeRange;
	BOOL _currentStatus;
	BOOL _isSegmentPoint;

}
-(id)init;
-(id)results;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)ComputeSceneDelta:(Frame*)arg1 ;
-(BOOL)decideLensSwitchPoint:(Frame*)arg1 ;
-(void)PrintSegments;
-(int)finalizeAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(BOOL)isSegmentPoint;
@end

