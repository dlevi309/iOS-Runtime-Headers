/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class NSMutableArray, BWMultiStreamCameraSourceNode, BWNodeOutput, NSArray, NSDictionary, BWFigVideoCaptureDevice, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat, BWMemoryPool;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {

	BOOL _useCaptureOutputForPreview;
	BOOL _allowISPVISForPreview;
	int _deviceType;
	int _devicePosition;
	NSMutableArray* _sourceNodes;
	BWMultiStreamCameraSourceNode* _sourceNode;
	BWMultiStreamCameraSourceNode* _telephotoSourceNode;
	BWMultiStreamCameraSourceNode* _superWideSourceNode;
	BWMultiStreamCameraSourceNode* _infraredSourceNode;
	BWNodeOutput* _sourceFormatReferenceOutput;
	NSMutableArray* _synchronizerNodes;
	NSArray* _previewFilters;
	NSDictionary* _previewOutputsBySourceDeviceType;
	NSDictionary* _stillImageOutputsByPortType;
	NSDictionary* _videoCaptureOutputsArrayBySourceDeviceType;
	unsigned _nextVideoCaptureOutputIndexBySourceDeviceType[11];
	NSDictionary* _detectedObjectsOutputsBySourceDeviceType;
	NSDictionary* _visionDataOutputsBySourceDeviceType;
	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureSourceRef _captureSource;
	FigCaptureSourceVideoFormat* _captureSourceVideoFormat;
	FigCaptureSourceDepthDataFormat* _captureSourceDepthDataFormat;
	CGRect _overscanRect;
	BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
	BWMemoryPool* _memoryPool;
	BOOL _overCapturePercentage;
	BOOL _hardwareDepthFilteringEnabled;
	int _stillImageOutputRetainedBufferCountOverride;

}

@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> faceFilteringDelegate; 
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride;                               //@synthesize stillImageOutputRetainedBufferCountOverride=_stillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) OpaqueCMClockRef masterClock; 
@property (assign,nonatomic) BOOL keepISPStreamingWhenStopping; 
@property (nonatomic,readonly) NSDictionary * stillImageOutputsByPortType;                                  //@synthesize stillImageOutputsByPortType=_stillImageOutputsByPortType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pointCloudOutput; 
@property (nonatomic,readonly) BOOL stillImageOutputDerivesFromVideoCaptureOutput;                          //@synthesize stillImageOutputDerivesFromVideoCaptureOutput=_stillImageOutputDerivesFromVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BOOL requiresMasterClock; 
@property (nonatomic,readonly) BWFigVideoCaptureDevice * captureDevice;                                     //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef captureSource;                                     //@synthesize captureSource=_captureSource - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceVideoFormat * captureSourceVideoFormat;                      //@synthesize captureSourceVideoFormat=_captureSourceVideoFormat - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceDepthDataFormat * captureSourceDepthDataFormat;              //@synthesize captureSourceDepthDataFormat=_captureSourceDepthDataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOutputColorInfo; 
@property (nonatomic,readonly) CGRect overscanRect;                                                         //@synthesize overscanRect=_overscanRect - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sourceFormatReferenceOutput;                                  //@synthesize sourceFormatReferenceOutput=_sourceFormatReferenceOutput - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform videoCaptureOutputTransform; 
@property (nonatomic,readonly) int motionAttachmentsSource; 
@property (nonatomic,readonly) BOOL hardwareDepthFilteringEnabled;                                          //@synthesize hardwareDepthFilteringEnabled=_hardwareDepthFilteringEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * portTypesWithGeometricDistortionCorrectionEnabled; 
@property (nonatomic,readonly) BWMultiStreamCameraSourceNode * sourceNode;                                  //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(OpaqueCMClockRef)clock;
-(BWFigVideoCaptureDevice *)captureDevice;
-(int)_addDepthFromInfraredSynchronizer:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(void)setKeepISPStreamingWhenStopping:(BOOL)arg1 ;
-(BOOL)requiresMasterClock;
-(BOOL)hardwareDepthFilteringEnabled;
-(NSDictionary *)videoOutputColorInfo;
-(CGRect)overscanRect;
-(FigCaptureSourceDepthDataFormat *)captureSourceDepthDataFormat;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(NSDictionary *)stillImageOutputsByPortType;
-(int)_buildDetectedObjectsOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(BWMultiStreamCameraSourceNode *)sourceNode;
-(void)setStreamsSuspendedBySourceDeviceType:(id)arg1 ;
-(id)detectedObjectsOutputForSourceDeviceType:(int)arg1 ;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 name:(id)arg4 renderDelegate:(id)arg5 ;
-(BOOL)newConfigurationRequiresStreamRestart:(id)arg1 ;
-(int)_buildVideoCaptureOutputNetwork:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(BOOL)arg3 ;
-(void)setFaceFilteringDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(BOOL)stillImageOutputDerivesFromVideoCaptureOutput;
-(BOOL)keepISPStreamingWhenStopping;
-(OpaqueFigCaptureSourceRef)captureSource;
-(id)_addCrossOverNodeToGraph:(id)arg1 inputs:(id)arg2 mediaType:(unsigned)arg3 name:(id)arg4 outErr:(int*)arg5 ;
-(void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2 ;
-(BWNodeOutput *)sourceFormatReferenceOutput;
-(void)hackRetainedBufferCountsForDualStreamSources;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 forPortType:(id)arg3 ;
-(BWNodeOutput *)pointCloudOutput;
-(id)previewOutputForSourceDeviceType:(int)arg1 ;
-(int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)arg1 connectionConfigurations:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 outputNetworkType:(int)arg5 ;
-(id)visionDataOutputForSourceDeviceType:(int)arg1 ;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(FigCaptureSourceVideoFormat *)captureSourceVideoFormat;
-(NSArray *)portTypesWithGeometricDistortionCorrectionEnabled;
-(int)stillImageOutputRetainedBufferCountOverride;
-(id<BWDetectedFacesFilterDelegate>)faceFilteringDelegate;
-(FigCaptureVideoTransform)videoCaptureOutputTransform;
-(int)allocateSharedBufferPools;
-(id)nextVideoCaptureOutputForSourceDeviceType:(int)arg1 ;
-(int)motionAttachmentsSource;
-(int)_buildPreviewOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 renderDelegate:(id)arg3 ;
-(id)_addOverCaptureSourcePipelineToGraph:(id)arg1 upstreamVideoCaptureOutputsBySourceDeviceType:(id)arg2 depthEnabled:(BOOL)arg3 forPreview:(BOOL)arg4 outErr:(int*)arg5 ;
-(void)dealloc;
-(int)_addOverCaptureDepthSynchronizerForOutputs:(id*)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
@end

