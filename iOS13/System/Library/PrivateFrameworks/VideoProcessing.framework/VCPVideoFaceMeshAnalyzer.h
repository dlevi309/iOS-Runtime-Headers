/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPRTLandmarkDetector, NSObject, VCPFaceShapeModel, VCPLandmarkValidator, NSDictionary;

@interface VCPVideoFaceMeshAnalyzer : NSObject {

	int _faceCount;
	CGRect _faceBounds;
	BOOL _inDetectionMode;
	VCPRTLandmarkDetector* _lmDetector;
	VCPRTLandmarkDetector* _lmTracker;
	float* _prevLM;
	float* _curLM;
	int _detectionModeCounter;
	int _trackingModeCounter;
	int _lostTrackCounter;
	BOOL _angleStable;
	float _validationScore;
	BOOL _validateFailedOnce;
	NSObject*<OS_dispatch_queue> _validationQueue;
	NSObject*<OS_dispatch_group> _validationGroup;
	CVBufferRef _valBuffer;
	CVBufferRef _valBufferRotated;
	float* _valAngle;
	float* _valLM;
	* _meshVertices;
	VCPFaceShapeModel* _shapeModel;
	VCPLandmarkValidator* _faceValidator[5];
	float _eulerAngle[3];
	float _focalLengthInPixels;
	float _uc;
	float _vc;
	BOOL _offline;
	BOOL _initialized;
	BOOL _bufferRotated;
	NSDictionary* _blendShapes;
	unsigned long long _vertexCount;
	SCD_Struct_VC41 _pose;

}

@property (nonatomic,readonly) SCD_Struct_VC41 pose;                        //@synthesize pose=_pose - In the implementation block
@property (nonatomic,readonly) NSDictionary * blendShapes;                  //@synthesize blendShapes=_blendShapes - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) const * vertices; 
@property (nonatomic,readonly) BOOL bufferRotated;                          //@synthesize bufferRotated=_bufferRotated - In the implementation block
-(void)dealloc;
-(SCD_Struct_VC41)pose;
-(const *)vertices;
-(int)setFrame:(CVBufferRef)arg1 ;
-(unsigned long long)vertexCount;
-(BOOL)isTracked;
-(NSDictionary *)blendShapes;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 offline:(BOOL)arg2 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withRotation:(int)arg3 withTimestamp:(SCD_Struct_VC6)arg4 ;
-(void)makeValidationDecision;
-(void)updateIntrinsicWhenRotated;
-(int)checkResolutionChange:(CVBufferRef)arg1 withRotation:(int)arg2 ;
-(int)validateFace:(CVBufferRef)arg1 eulerAngles:(float*)arg2 ;
-(void)rotateLandmarks:(int)arg1 width:(int)arg2 height:(int)arg3 landmarks:(float*)arg4 numLandmarks:(int)arg5 ;
-(void)mapToCameraNegativeZ;
-(BOOL)bufferRotated;
@end

