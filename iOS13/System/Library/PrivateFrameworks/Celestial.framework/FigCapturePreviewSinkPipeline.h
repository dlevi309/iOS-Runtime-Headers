/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkPipeline.h>

@class BWPixelTransferNode, BWImageQueueSinkNode, BWSceneClassifierSinkNode, BWStreamingFilterNode, BWPreviewTimeMachineSinkNode, BWNodeOutput, NSArray, BWPreviewStitcherNode, NSDictionary, NSString;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {

	BWPixelTransferNode* _scalerNode;
	BWImageQueueSinkNode* _imageQueueSinkNode;
	BWSceneClassifierSinkNode* _sceneClassifierSinkNode;
	BWStreamingFilterNode* _filterNode;
	BWPreviewTimeMachineSinkNode* _timeMachineSinkNode;
	BWNodeOutput* _sceneClassifierPipelineUpstreamOutput;
	NSArray* _filters;
	BWPreviewStitcherNode* _previewStitcher;
	BWNodeOutput* _mrcCaptureOutput;
	BWNodeOutput* _videoDataSinkOutput;
	BWNodeOutput* _videoThumbnailSinkOutput;
	BWNodeOutput* _depthDataSinkOutput;
	NSDictionary* _imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
	FigCaptureVideoTransform _outputTransform;
	FigCaptureVideoTransform _videoThumbnailSinkOutputTransform;
	NSString* _sourceID;
	int _sourceDeviceType;
	BOOL _overCaptureEnabled;
	double _videoStabilizationOverscan;
	long long _primaryCaptureRectUniqueID;
	BOOL _depthFilterRenderingEnabled;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (nonatomic,readonly) NSString * sourceID;                                                                  //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWImageQueueSinkNode * imageQueueSinkNode;                                            //@synthesize imageQueueSinkNode=_imageQueueSinkNode - In the implementation block
@property (nonatomic,readonly) BWStreamingFilterNode * filterNode;                                                   //@synthesize filterNode=_filterNode - In the implementation block
@property (nonatomic,readonly) BWPixelTransferNode * scalerNode;                                                     //@synthesize scalerNode=_scalerNode - In the implementation block
@property (nonatomic,readonly) BWPreviewTimeMachineSinkNode * timeMachineSinkNode;                                   //@synthesize timeMachineSinkNode=_timeMachineSinkNode - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * mrcCaptureOutput;                                                      //@synthesize mrcCaptureOutput=_mrcCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoDataSinkOutput;                                                   //@synthesize videoDataSinkOutput=_videoDataSinkOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoThumbnailSinkOutput;                                              //@synthesize videoThumbnailSinkOutput=_videoThumbnailSinkOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * depthDataSinkOutput;                                                   //@synthesize depthDataSinkOutput=_depthDataSinkOutput - In the implementation block
@property (nonatomic,readonly) NSDictionary * imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;              //@synthesize imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration=_imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL depthFilterRenderingEnabled;                                                     //@synthesize depthFilterRenderingEnabled=_depthFilterRenderingEnabled - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform outputTransform;                                             //@synthesize outputTransform=_outputTransform - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform videoThumbnailSinkOutputTransform;                           //@synthesize videoThumbnailSinkOutputTransform=_videoThumbnailSinkOutputTransform - In the implementation block
@property (assign,nonatomic) BOOL discardsImageQueueSampleData; 
@property (assign,nonatomic) BOOL sceneClassifierSuspended; 
@property (nonatomic,retain) NSArray * filters; 
@property (assign,nonatomic) float simulatedAperture; 
@property (assign,nonatomic) float portraitLightingEffectStrength; 
@property (readonly) double primaryCaptureRectAspectRatio; 
@property (readonly) CGPoint primaryCaptureRectCenter; 
@property (readonly) long long primaryCaptureRectUniqueID; 
@property (assign) BOOL displaysWidestCameraOnly; 
+(void)initialize;
-(void)dealloc;
-(NSArray *)filters;
-(float)simulatedAperture;
-(FigCaptureVideoTransform)outputTransform;
-(NSString *)sourceID;
-(void)setFilters:(NSArray *)arg1 ;
-(double)primaryCaptureRectAspectRatio;
-(long long)primaryCaptureRectUniqueID;
-(int)sourceDeviceType;
-(void)setSimulatedAperture:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)prepareForRenderingWithPreparedPixelBufferPool;
-(void)setVideoStabilizationOverscanCropEnabled:(BOOL)arg1 ;
-(BWImageQueueSinkNode *)imageQueueSinkNode;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
-(CGPoint)primaryCaptureRectCenter;
-(NSDictionary *)imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 center:(CGPoint)arg2 fencePortSendRight:(id)arg3 uniqueID:(long long)arg4 ;
-(void)setDiscardsImageQueueSampleData:(BOOL)arg1 ;
-(void)setStoppingForModeSwitch:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 sourcePreviewOutput:(id)arg2 imageQueueSinkNode:(id)arg3 graph:(id)arg4 name:(id)arg5 inferenceScheduler:(id)arg6 captureDevice:(id)arg7 previewTapDelegate:(id)arg8 ;
-(BOOL)depthFilterRenderingEnabled;
-(BWStreamingFilterNode *)filterNode;
-(FigCaptureVideoTransform)videoThumbnailSinkOutputTransform;
-(BWNodeOutput *)videoThumbnailSinkOutput;
-(BWNodeOutput *)videoDataSinkOutput;
-(BWPixelTransferNode *)scalerNode;
-(BWNodeOutput *)depthDataSinkOutput;
-(BWNodeOutput *)mrcCaptureOutput;
-(BWPreviewTimeMachineSinkNode *)timeMachineSinkNode;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(void)setDisplaysWidestCameraOnly:(BOOL)arg1 ;
-(BOOL)sceneClassifierSuspended;
-(BOOL)displaysWidestCameraOnly;
-(int)_buildVideoPreviewSinkPipeline:(id)arg1 sourcePreviewOutput:(id)arg2 graph:(id)arg3 inferenceScheduler:(id)arg4 captureDevice:(id)arg5 previewTapDelegate:(id)arg6 ;
-(int)_appendFilteredPreviewPipeline:(id*)arg1 desiredPipelineStage:(id)arg2 videoPreviewSinkConnectionConfiguration:(id)arg3 graph:(id)arg4 inferenceScheduler:(id)arg5 captureDevice:(id)arg6 ;
-(int)_buildImageQueuePreviewSinkPipeline:(id)arg1 previewPipelineStage:(id)arg2 videoPreviewSinkConnectionConfiguration:(id)arg3 previewScalerOutputBuffersAreShared:(BOOL)arg4 debugOverlayEnabled:(BOOL)arg5 displayPipeRequiresPacked10BitPixelFormatForP3Input:(BOOL)arg6 deferredPrepareEnabled:(BOOL)arg7 remoteVideoPreview:(BOOL)arg8 ispPreviewJitterCompensationEnabled:(BOOL)arg9 graph:(id)arg10 previewTapDelegate:(id)arg11 ;
-(int)_buildPreviewTimeMachineSinkPipeline:(id)arg1 upstreamPipelineStageForPreviewTimeMachine:(id)arg2 upstreamTransform:(FigCaptureVideoTransform)arg3 previewTimeMachineConnectionConfiguration:(id)arg4 videoPreviewEnabled:(BOOL)arg5 deferredPrepareEnabled:(BOOL)arg6 graph:(id)arg7 captureDevice:(id)arg8 ;
-(void)_stashPreviewImageQueueUpdatedNotificationPayload:(int)arg1 previewDimensions:(SCD_Struct_BW19)arg2 remoteVideoPreview:(BOOL)arg3 ;
-(BOOL)discardsImageQueueSampleData;
@end

