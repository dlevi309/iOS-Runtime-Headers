/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoFacePoseAnalyzer, VCPVideoFaceMeshAnalyzer, VCPFullVideoAnalyzer, VCPImageBlurAnalyzer, VCPAudioAnalyzer, VCPVideoFullFaceDetector, VCPSceneChangeAnalyzer, VCPLightMotionAnalyzer, VCPTrimAnalyzer, VCPHomeKitMotionAnalyzer, NSMutableDictionary, NSObject, NSDictionary;

@interface VCPCaptureAnalysisSession : NSObject {

	unsigned long long _analysisTypes;
	VCPVideoFacePoseAnalyzer* _poseAnalyzer;
	VCPVideoFaceMeshAnalyzer* _meshAnalyzer;
	VCPFullVideoAnalyzer* _videoAnalysis;
	VCPImageBlurAnalyzer* _blurAnalyzer;
	VCPAudioAnalyzer* _audioAnalyzer;
	VCPVideoFullFaceDetector* _faceDetector;
	VCPSceneChangeAnalyzer* _sceneChangeAnalyzer;
	VCPLightMotionAnalyzer* _lightMotionAnalyzer;
	VCPTrimAnalyzer* _trimAnalyzer;
	VCPHomeKitMotionAnalyzer* _homeKitMotionAnalyzer;
	Rotator* _rotator;
	Rotator* _rotatorForFacePose;
	CGAffineTransform _preferredTransform;
	float _focalLengthInPixels;
	NSMutableDictionary* _aggregatedResults;
	int _rotationAngleForFacePose;
	int _preferredAngle;
	NSObject*<OS_dispatch_queue> _analysisQueue;
	BOOL _preWarmed;

}

@property (readonly) NSDictionary * aggregatedResults; 
+(id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(CGAffineTransform)arg2 properties:(id)arg3 ;
+(id)aggregateAnalysisForTypes:(unsigned long long)arg1 withFramesMeta:(id)arg2 properties:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)finalizeAnalysis;
-(int)prewarmWithProperties:(id)arg1 ;
-(id)analyzePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 error:(id*)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3 withAnalysisQueue:(id)arg4 withTurbo:(BOOL)arg5 ;
-(CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
-(SCD_Struct_VC41)rotateTransform:(SCD_Struct_VC41)arg1 byAngle:(int)arg2 ;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC28)arg1 analysisData:(id)arg2 ;
-(BOOL)shouldCutAt:(SCD_Struct_VC6)arg1 stillPTS:(SCD_Struct_VC6)arg2 withCut:(BOOL)arg3 ;
-(BOOL)updatePreferredTransform:(const CGAffineTransform*)arg1 properties:(id)arg2 ;
-(int)analyzeAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)aggregatedResults;
@end

