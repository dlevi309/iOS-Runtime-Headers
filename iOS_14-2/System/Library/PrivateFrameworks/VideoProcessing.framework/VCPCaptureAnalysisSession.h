/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)finalizeAnalysis;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3 withAnalysisQueue:(id)arg4 withTurbo:(BOOL)arg5 ;
-(CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(SCD_Struct_VC45)rotateTransform:(SCD_Struct_VC45)arg1 byAngle:(int)arg2 ;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC7)arg1 analysisData:(id)arg2 ;
-(BOOL)shouldCutAt:(SCD_Struct_VC6)arg1 stillPTS:(SCD_Struct_VC6)arg2 withCut:(BOOL)arg3 ;
-(int)prewarmWithProperties:(id)arg1 ;
-(BOOL)updatePreferredTransform:(const CGAffineTransform*)arg1 properties:(id)arg2 ;
-(id)analyzePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 error:(id*)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 completion:(/*^block*/id)arg5 ;
-(int)analyzeAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)aggregatedResults;
-(void)dealloc;
@end
