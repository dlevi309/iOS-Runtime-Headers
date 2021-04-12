/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourcePipeline.h>

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

}

@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> faceFilteringDelegate; 
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride; 
@property (assign,nonatomic) OpaqueCMClockRef masterClock; 
@property (assign,nonatomic) BOOL keepISPStreamingWhenStopping; 
@property (nonatomic,readonly) NSDictionary * stillImageOutputsByPortType;                                  //@synthesize stillImageOutputsByPortType=_stillImageOutputsByPortType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pointCloudOutput; 
@property (nonatomic,readonly) unsigned stillImageOutputPixelFormat; 
@property (nonatomic,readonly) BOOL stillImageOutputDerivesFromVideoCaptureOutput;                          //@synthesize stillImageOutputDerivesFromVideoCaptureOutput=_stillImageOutputDerivesFromVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BOOL requiresMasterClock; 
@property (nonatomic,readonly) BWFigVideoCaptureDevice * captureDevice;                                     //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef captureSource;                                     //@synthesize captureSource=_captureSource - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceVideoFormat * captureSourceVideoFormat;                      //@synthesize captureSourceVideoFormat=_captureSourceVideoFormat - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceDepthDataFormat * captureSourceDepthDataFormat;              //@synthesize captureSourceDepthDataFormat=_captureSourceDepthDataFormat - In the implementation block
@property (nonatomic,readonly) CGRect overscanRect;                                                         //@synthesize overscanRect=_overscanRect - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sourceFormatReferenceOutput;                                  //@synthesize sourceFormatReferenceOutput=_sourceFormatReferenceOutput - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform videoCaptureOutputTransform; 
@property (nonatomic,readonly) int motionAttachmentsSource; 
@property (nonatomic,readonly) BWMultiStreamCameraSourceNode * sourceNode;                                  //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BWMultiStreamCameraSourceNode *)sourceNode;
-(OpaqueCMClockRef)clock;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(BWFigVideoCaptureDevice *)captureDevice;
-(int)motionAttachmentsSource;
-(FigCaptureSourceDepthDataFormat *)captureSourceDepthDataFormat;
-(FigCaptureSourceVideoFormat *)captureSourceVideoFormat;
-(int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(BOOL)arg3 ;
-(BWNodeOutput *)sourceFormatReferenceOutput;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 forPortType:(id)arg3 ;
-(BOOL)newConfigurationRequiresStreamRestart:(id)arg1 ;
-(void)setKeepISPStreamingWhenStopping:(BOOL)arg1 ;
-(void)setStreamsSuspendedBySourceDeviceType:(id)arg1 ;
-(void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 name:(id)arg4 ispIsStreaming:(BOOL)arg5 renderDelegate:(id)arg6 ;
-(id)previewOutputForSourceDeviceType:(int)arg1 ;
-(void)setFaceFilteringDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(NSDictionary *)stillImageOutputsByPortType;
-(id)nextVideoCaptureOutputForSourceDeviceType:(int)arg1 ;
-(FigCaptureVideoTransform)videoCaptureOutputTransform;
-(id)visionDataOutputForSourceDeviceType:(int)arg1 ;
-(id)detectedObjectsOutputForSourceDeviceType:(int)arg1 ;
-(BWNodeOutput *)pointCloudOutput;
-(BOOL)requiresMasterClock;
-(BOOL)stillImageOutputDerivesFromVideoCaptureOutput;
-(unsigned)stillImageOutputPixelFormat;
-(OpaqueFigCaptureSourceRef)captureSource;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(void)hackRetainedBufferCountsForDualStreamSources;
-(int)allocateSharedBufferPools;
-(int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 ispIsStreaming:(BOOL)arg3 renderDelegate:(id)arg4 ;
-(BOOL)keepISPStreamingWhenStopping;
-(int)_addDepthFromInfraredSynchronizer:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(int)_buildVideoCaptureOutputNetwork:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(int)_buildPreviewOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_buildDetectedObjectsOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)arg1 connectionConfigurations:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 outputNetworkType:(int)arg5 ;
-(int)_addOverCaptureDepthSynchronizerForOutputs:(id*)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(id)_addCrossOverNodeToGraph:(id)arg1 inputs:(id)arg2 mediaType:(unsigned)arg3 name:(id)arg4 outErr:(int*)arg5 ;
-(id)_addOverCaptureSourcePipelineToGraph:(id)arg1 upstreamVideoCaptureOutputsBySourceDeviceType:(id)arg2 depthEnabled:(BOOL)arg3 forPreview:(BOOL)arg4 outErr:(int*)arg5 ;
-(id<BWDetectedFacesFilterDelegate>)faceFilteringDelegate;
-(int)stillImageOutputRetainedBufferCountOverride;
-(CGRect)overscanRect;
@end

