/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue, BWDetectedFacesFilterDelegate;
@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWFigCaptureStream, NSArray, BWDeferredMetadataCache, NSObject, BWNodeOutput, BWMultiStreamCameraSourceNodeConfiguration, NSString, BWMotionDataPreserver, NSMutableDictionary, NSDictionary, BWFigCaptureISPProcessingSession, BWDetectedFacesRingBuffer, BWDetectedObjectsInfoRingBuffer, BWStats;

@interface BWMultiStreamCameraSourceNode : BWSourceNode {

	BWFigVideoCaptureDevice* _captureDevice;
	BWFigVideoCaptureStream* _captureStream;
	BWFigCaptureStream* _stream;
	NSArray* _supportedFormats;
	BOOL _supportsDecouplingPrimaryScalerOnly;
	float _pixelsPerMicron;
	float _telePixelsPerMicron;
	unsigned _bravoShiftCorrectionFlags;
	BOOL _deferMetadataCreation;
	BWDeferredMetadataCache* _deferredMetadataCache;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BOOL _isInfraredSourceNode;
	BWNodeOutput* _previewOutput;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedObjectsOutput;
	BWNodeOutput* _depthOutput;
	BWNodeOutput* _pointCloudOutput;
	BWMultiStreamCameraSourceNodeConfiguration* _configuration;
	int _resolvedFormatIndex;
	int _colorSpaceProperties;
	opaqueCMFormatDescriptionRef _depthOutputFormatDescription;
	NSString* _depthEnginePrimaryOutputID;
	BOOL _hardwareDepthFilteringSupported;
	opaqueCMFormatDescriptionRef _focusPixelDataFormatDescription;
	BOOL _shareStreamingBufferPools;
	BWStreamOutputStorage* _outputsStorage[9];
	SCD_Struct_BW134 _cameraData;
	BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
	SCD_Struct_BW53 _sphereShiftState;
	BWMotionDataPreserver* _motionDataPreserver;
	NSMutableDictionary* _dutyCycleMetadataCache;
	float _overscanReservedInISPZoom;
	NSString* _previewStreamOutputID;
	CGSize _previewOutputOverscan;
	NSString* _videoCaptureStreamOutputID;
	NSDictionary* _videoCaptureOutputColorInfoOverride;
	BOOL _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
	float _geometricDistortionCorrectionStrengthOnStreamingOutputs;
	NSString* _stillImageStreamOutputID;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	int _currentFirmwareStillImageOutputRetainedBufferCount;
	SCD_Struct_BW2 _firmwareStillImageDimensionsAfterOverscanCropping;
	CGSize _onDemandStillOverscan;
	BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
	BWFigCaptureISPProcessingSession* _bayerProcessingSession;
	OpaqueFigSampleBufferProcessorRef _qrmSampleBufferProcessor;
	opaqueCMFormatDescriptionRef _quadraStillOutputFormatDescription;
	opaqueCMSimpleQueueRef _quadraYUVBufferQueue;
	BOOL _deferBayerProcessingSessionMetadataCreation;
	BWDetectedFacesRingBuffer* _detectedFacesRingBuffer;
	BWDetectedObjectsInfoRingBuffer* _detectedObjectsInfoRingBuffer;
	id<BWDetectedFacesFilterDelegate> _detectedFacesFilterDelegate;
	OpaqueVTPixelTransferSessionRef _stillReflectionTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionFormatDescription;
	OpaqueVTPixelTransferSessionRef _stillReflectionSecondaryTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionSecondaryFormatDescription;
	unsigned long long _infraredProjectorUptimeInUsForLowPowerSparse;
	unsigned long long _infraredProjectorUptimeInUsForHighPowerSparse;
	int _previousInfraredCaptureID;
	CGPoint _previewShift;
	float _previewScaleFactor;
	os_unfair_lock_s _previewShiftLock;
	BOOL _keepISPStreamingWhenStopping;
	BWStats* _ioSurfaceCompressionRatioStatsForRaw;
	unsigned long long _totalCompressedDataSizeForRaw;
	unsigned long long _totalUncompressedDataSizeForRaw;
	unsigned _bufferHeightForRaw;
	BOOL _rawCompressionEnabled;
	opaqueCMFormatDescriptionRef _visionDataFormatDescription;
	BOOL _discardOutputSampleBuffers;
	BOOL _streamingOutputsEnabled;
	BOOL _adjustOpticalCenterMetadataForSuperWideFullFOV;
	CGPoint _opticalCenterAdjustmentForSuperWideFullFOV;

}

@property (assign,nonatomic) BOOL keepISPStreamingWhenStopping;                                               //@synthesize keepISPStreamingWhenStopping=_keepISPStreamingWhenStopping - In the implementation block
@property (readonly) BWMultiStreamCameraSourceNodeConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride;                                //@synthesize videoCaptureOutputColorInfoOverride=_videoCaptureOutputColorInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed;                 //@synthesize videoCaptureOutputPixelBufferAttachmentModificationAllowed=_videoCaptureOutputPixelBufferAttachmentModificationAllowed - In the implementation block
@property (readonly) BWFigVideoCaptureStream * captureStream;                                                 //@synthesize captureStream=_captureStream - In the implementation block
@property (readonly) BWNodeOutput * previewOutput;                                                            //@synthesize previewOutput=_previewOutput - In the implementation block
@property (readonly) BWNodeOutput * videoCaptureOutput;                                                       //@synthesize videoCaptureOutput=_videoCaptureOutput - In the implementation block
@property (readonly) BWNodeOutput * stillImageOutput;                                                         //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (readonly) BWNodeOutput * detectedObjectsOutput;                                                    //@synthesize detectedObjectsOutput=_detectedObjectsOutput - In the implementation block
@property (readonly) BWNodeOutput * depthOutput;                                                              //@synthesize depthOutput=_depthOutput - In the implementation block
@property (readonly) BWNodeOutput * pointCloudOutput;                                                         //@synthesize pointCloudOutput=_pointCloudOutput - In the implementation block
@property (nonatomic,readonly) BOOL previewOutputEnabled; 
@property (nonatomic,readonly) BOOL videoCaptureOutputEnabled; 
@property (nonatomic,readonly) BOOL stillImageOutputEnabled; 
@property (nonatomic,readonly) BOOL depthOutputEnabled; 
@property (nonatomic,readonly) BOOL hardwareDepthFilteringEnabled; 
@property (nonatomic,readonly) BOOL pointCloudOutputEnabled; 
@property (nonatomic,readonly) BOOL detectedObjectsOutputEnabled; 
@property (nonatomic,readonly) BOOL usesFirmwareStillImageOutput; 
@property (nonatomic,readonly) SCD_Struct_BW2 preferredPreviewDimensions; 
@property (nonatomic,readonly) float geometricDistortionCorrectionStrengthOnStreamingOutputs;                 //@synthesize geometricDistortionCorrectionStrengthOnStreamingOutputs=_geometricDistortionCorrectionStrengthOnStreamingOutputs - In the implementation block
@property (nonatomic,readonly) unsigned long long infraredProjectorUptimeInUsForLowPowerSparse;               //@synthesize infraredProjectorUptimeInUsForLowPowerSparse=_infraredProjectorUptimeInUsForLowPowerSparse - In the implementation block
@property (nonatomic,readonly) unsigned long long infraredProjectorUptimeInUsForHighPowerSparse;              //@synthesize infraredProjectorUptimeInUsForHighPowerSparse=_infraredProjectorUptimeInUsForHighPowerSparse - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                                                      //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 firmwareStillImageDimensionsAfterOverscanCropping;              //@synthesize firmwareStillImageDimensionsAfterOverscanCropping=_firmwareStillImageDimensionsAfterOverscanCropping - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 videoCaptureDimensionsWithoutOverscan; 
@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> detectedFacesFilterDelegate;                   //@synthesize detectedFacesFilterDelegate=_detectedFacesFilterDelegate - In the implementation block
+(void)initialize;
-(int)configure:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(float)geometricDistortionCorrectionStrengthOnStreamingOutputs;
-(BOOL)start:(id*)arg1 ;
-(BWNodeOutput *)stillImageOutput;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)_preferIntermediateTapOverSecondaryScalerForPreviewOutputBasedOnBandwidth;
-(unsigned long long)infraredProjectorUptimeInUsForLowPowerSparse;
-(SCD_Struct_BW2)preferredPreviewDimensions;
-(id)_nodeOutputsMadeLiveByStreamOutputIndex:(int)arg1 ;
-(int)_updateGDCStrengthForOutputConfigurations:(id)arg1 updatedOutputConfigurations:(id*)arg2 ;
-(id)_videoFormatRequirementsForStillImageQuadraOutputConfiguration:(id)arg1 videoFormatRequirements:(id)arg2 ;
-(SCD_Struct_BW2)videoCaptureDimensionsWithoutOverscan;
-(id)nodeSubType;
-(BOOL)detectedObjectsOutputEnabled;
-(int)_stillImageColorSpaceProperties;
-(void)requestedZoomFactorChanged:(float)arg1 ;
-(void)_addCaptureStreamAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateMetadataConfigurations;
-(void)_updateValidBufferRectForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setKeepISPStreamingWhenStopping:(BOOL)arg1 ;
-(BOOL)hardwareDepthFilteringEnabled;
-(id<BWDetectedFacesFilterDelegate>)detectedFacesFilterDelegate;
-(void)_updateOverscanReservedInISPZoom;
-(void)makeOutputsLiveIfNeeded;
-(SCD_Struct_BW2)firmwareStillImageDimensionsAfterOverscanCropping;
-(int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
-(BWNodeOutput *)previewOutput;
-(int)colorSpaceProperties;
-(BOOL)previewOutputEnabled;
-(SCD_Struct_BW2)_calculateVideoCaptureDimensionsWithOverscan;
-(int)_updateOutputIDMappingsForStreamingOutputs;
-(int)_updateDepthConfiguration;
-(int)_verifyColorSpacePropertiesForOutputID:(id)arg1 matchVideoOutputsColorInfo:(id)arg2 ;
-(int)_updateOutputIDs;
-(int)_updateFormatIndex;
-(unsigned)_sensorInterfaceRawPixelFormatForSensorPixelFormat:(unsigned)arg1 compandingEnabled:(BOOL)arg2 ;
-(void)_applyPreviewShiftToCropRect:(CGRect*)arg1 ;
-(BWFigVideoCaptureStream *)captureStream;
-(void)_updateObjectDetectionMetadataRegistration;
-(void)_updateColorSpaceProperties;
-(BOOL)_shouldEnableStreamCaptureOutputForNodeOutput:(id*)arg1 ;
-(void)_updateStreamingOutputStorageForOutputID:(id)arg1 isVideoCaptureOutput:(BOOL)arg2 nodeOutput:(id)arg3 ;
-(SCD_Struct_BW2)_finalPreviewOutputDimensions;
-(id)_streamOutputIDForOnDemandStills;
-(int)_updateBaseZoomFactorAfterGDCFromOutputConfigurations:(id)arg1 ;
-(int)_setupQRMSampleBufferProcessor;
-(void)_updateVideoCaptureOutputFlags;
-(CGPoint)_bravoShiftMitigationCropOffset:(opaqueCMSampleBufferRef)arg1 totalZoom:(float)arg2 ;
-(BOOL)_primaryScalerIsAvailable;
-(BOOL)stillImageOutputEnabled;
-(void)_attachCameraIntrinsicMatrixToSampleBuffer:(opaqueCMSampleBufferRef)arg1 scaledToVideoBuffer:(BOOL)arg2 ;
-(int)_updateOutputRequirements;
-(BOOL)_secondaryScalerIsAvailable;
-(int)_setStreamOutputsEnabled:(BOOL)arg1 streamingOutputs:(BOOL)arg2 onDemandStillOutputs:(BOOL)arg3 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(BOOL)_preferPrimaryScalerOverIntermediateTapForVideoOutputBasedOnBandwidth;
-(void)_propagatePixelBufferAttachmentFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachmentKey:(CFStringRef)arg2 usingAttachedMediaKey:(id)arg3 ;
-(BOOL)keepISPStreamingWhenStopping;
-(CGSize)_totalAvailableOverscan;
-(int)allocateOrReuseBufferPoolsFromSourceNode:(id)arg1 ;
-(BOOL)_scalerChainingEnabled;
-(BWMultiStreamCameraSourceNodeConfiguration *)configuration;
-(void)_preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)colorInfoForNonColorManagedDevicesForOutputID:(id)arg1 ;
-(int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(int)_verifyColorSpacePropertiesForAllOutputs;
-(void)_computeRetainedBufferCountForOutputStorage:(BWStreamOutputStorage*)arg1 ;
-(void)_reportIOSurfaceCompressionCoreAnalyticsData:(BWStreamOutputStorage*)arg1 ;
-(BWNodeOutput *)depthOutput;
-(void)_registerForStreamNotifications;
-(CGSize)_overscanWithFOVSacrifice;
-(int)_bytesPerOutputBufferForOutputConfiguration:(id)arg1 outputID:(CFStringRef)arg2 ;
-(BWNodeOutput *)pointCloudOutput;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 ;
-(BOOL)depthOutputEnabled;
-(BOOL)usesFirmwareStillImageOutput;
-(void)_prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_tallyCompressedIOSurfaceStatsForSBuf:(opaqueCMSampleBufferRef)arg1 outputStorage:(BWStreamOutputStorage*)arg2 ;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1 ;
-(SCD_Struct_BW2)_calculatePreviewDimensionsForBravoShiftMitigation;
-(id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2 ;
-(BOOL)videoCaptureOutputEnabled;
-(int)_updateOutputConfigurations;
-(void)_unregisterFromStreamNotifications;
-(id)_videoFormatRequirementsForDepthOutput;
-(id)_outputConfigurationForStillImageOutputID:(id)arg1 ;
-(BOOL)_videoCaptureOutputRequiresScaling;
-(id)_supportedPixelFormatsForOutputID:(id)arg1 ;
-(id)_outputConfigurationForStreamingOutputID:(id)arg1 nodeOutput:(id)arg2 ;
-(void)_reportIOSurfaceCompressionCoreAnalyticsDataForRaw;
-(opaqueCMSampleBufferRef)_createDepthDataSampleBufferFromVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_asynchronouslyPreallocateBufferPools;
-(int)_bringStreamUpToDate;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)_registerStreamOutputHandlers;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(void)_updateDepthSettings;
-(void)_propagatePixelBufferAttachment:(CVBufferRef)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 attachedMediaKey:(id)arg3 removeAttachmentKey:(CFStringRef)arg4 ;
-(void)updateFormatRequirementsFromSourceNode:(id)arg1 ;
-(BWNodeOutput *)detectedObjectsOutput;
-(BOOL)_serviceZoomForPTS:(SCD_Struct_BW8)arg1 ;
-(void)_flushOutRemainingBuffers;
-(SCD_Struct_BW2)_outputDimensionsForOutputID:(id)arg1 outputConfiguration:(id)arg2 ;
-(BOOL)_secondaryScalerSupportsVideoCaptureDimensions;
-(void)_updateBufferPoolSharingProperties;
-(BOOL)_shouldEnableStillImageOutput;
-(id)_outputConfigurationsForAllOutputs;
-(BOOL)pointCloudOutputEnabled;
-(int)_updateOutputsStorage;
-(unsigned long long)infraredProjectorUptimeInUsForHighPowerSparse;
-(opaqueCMSampleBufferRef)_createFocusPixelDataSampleBufferFromVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2 ;
-(void)_markPrimaryStreamingOutput;
-(id)initWithCaptureDevice:(id)arg1 captureStream:(id)arg2 ;
-(CGRect)_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_tallyCompressedIOSurfaceStatsForRawForSBuf:(opaqueCMSampleBufferRef)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(id)_videoFormatRequirementsForPointCloudOutput;
-(BOOL)_requiresOneStreamingOutputForMetadata;
-(int)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(BOOL)arg3 ;
-(void)setDetectedFacesFilterDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(SCD_Struct_BW2)videoCaptureDimensionsForColorspace;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 ;
-(void)_reflectStillSampleBufferOnStreamingOutputs:(opaqueCMSampleBufferRef)arg1 captureType:(int)arg2 ;
-(void)_unregisterStreamOutputHandlers;
-(void)dealloc;
-(void)_retrieveCameraCharacterizationDataForCameraIntrinsicMatrixDelivery;
-(int)_updateGDCStrengthAndBaseZoomFactorAfterGDC;
-(int)_colorSpacePropertiesForOuputID:(id)arg1 ;
-(void)_markEndOfLiveOnAllOutputs;
@end

