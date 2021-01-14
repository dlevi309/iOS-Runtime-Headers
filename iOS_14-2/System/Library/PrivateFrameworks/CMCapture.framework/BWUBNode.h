/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorDelegate.h>
#import <libobjc.A.dylib/BWUBInferenceControllerDelegate.h>
#import <libobjc.A.dylib/BWDeepFusionProcessorControllerDelegate.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingController.h>
#import <libobjc.A.dylib/BWDeferredProcessorControllerDelegate.h>
#import <libobjc.A.dylib/BWJasperColorStillsExecutorControllerDelegate.h>
#import <libobjc.A.dylib/BWStillImageProcessingSupportProvider.h>

@protocol OS_dispatch_queue, BWNoiseReductionAndFusionProcessorControllerConfiguration, BWStillImageProcessingStatusDelegate, OS_dispatch_group, BWNoiseReductionAndFusionProcessorSemanticRenderingInput;
@class BWFigVideoCaptureDevice, BWStillImageNodeConfiguration, NSSet, NSString, NSObject, BWStillImageProcessorCoordinator, NSMutableDictionary, BWDeepFusionProcessorControllerConfiguration, BWPixelBufferPool, BWUBInferenceControllerConfiguration, NSDictionary, BWIntelligentDistortionCorrectionProcessorControllerConfiguration, NSArray, BWStereoDisparityProcessorControllerConfiguration, BWStereoDisparityProcessorInput, BWStillImageProcessorConfiguration, BWNodeInput, BWJasperColorStillsExecutorControllerConfiguration;

@interface BWUBNode : BWNode <BWNoiseReductionAndFusionProcessorDelegate, BWUBInferenceControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate, BWJasperColorStillsExecutorControllerDelegate, BWStillImageProcessingSupportProvider> {

	BWFigVideoCaptureDevice* _device;
	BWStillImageNodeConfiguration* _nodeConfiguration;
	NSSet* _supportedPortTypes;
	NSString* _previousCaptureRequestIdentifier;
	long long _currentSettingsID;
	NSString* _currentCaptureRequestIdentifier;
	unsigned _priority;
	NSObject*<OS_dispatch_queue> _emitQueue;
	BWStillImageProcessorCoordinator* _processorCoordinator;
	NSObject*<OS_dispatch_queue> _processorCoordinatorWorkerQueue;
	os_unfair_lock_s _processorCoordinatorLock;
	os_unfair_lock_s _processingSupportProviderLock;
	unsigned long long _nrProcessorControllerType;
	id<BWNoiseReductionAndFusionProcessorControllerConfiguration> _nrProcessorControllerConfiguration;
	NSMutableDictionary* _nrProcessorInputByPortType;
	NSMutableDictionary* _remainingNRProcessorInputsByPortType;
	NSMutableDictionary* _emittedOrEnqueuedReferenceFrameIDByPortType;
	id<BWStillImageProcessingStatusDelegate> _referenceFrameSelectionDelegate;
	int _stillImageFusionScheme;
	BWDeepFusionProcessorControllerConfiguration* _deepFusionProcessorControllerConfiguration;
	NSMutableDictionary* _deepFusionProcessorInputByPortType;
	NSObject*<OS_dispatch_queue> _deepFusionProcessorControllerQueue;
	int _maxDeepFusionOutputCount;
	BWPixelBufferPool* _syntheticIntermediatesPool;
	BWPixelBufferPool* _syntheticFusionMapPool;
	BWUBInferenceControllerConfiguration* _inferenceControllerConfiguration;
	NSObject*<OS_dispatch_queue> _inferenceControllerQueue;
	NSObject*<OS_dispatch_group> _inferenceControllerGroup;
	BWPixelBufferPool* _intermediateInferenceInputPool;
	NSDictionary* _inferenceOutputPoolsByAttachedMediaKey;
	id<BWNoiseReductionAndFusionProcessorSemanticRenderingInput> _semanticRenderingInput;
	opaqueCMSampleBufferRef _inferenceOutputSampleBuffer;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;
	OpaqueVTPixelTransferSessionRef _inferenceInputPixelTransferSession;
	BWIntelligentDistortionCorrectionProcessorControllerConfiguration* _intelligentDistortionCorrectionControllerConfiguration;
	NSMutableDictionary* _intelligentDistortionCorrectionProcessorInputByPortType;
	unsigned _lowResPersonSegmentationMaskWidth;
	unsigned _lowResPersonSegmentationMaskHeight;
	NSArray* _portTypesWithIntelligentDistortionCorrectionSupport;
	NSArray* _captureTypesWithIntelligentDistortionCorrectionSupport;
	BWStereoDisparityProcessorControllerConfiguration* _stereoDisparityProcessorControllerConfiguration;
	BWStereoDisparityProcessorInput* _stereoDisparityProcessorInput;
	int _stereoDisparityRemainingProcessorInputs;
	NSObject*<OS_dispatch_queue> _stereoDisparityProcessorControllerQueue;
	NSMutableDictionary* _clientBracketEmittedOrEnqueuedReferenceFrameIDByPortTypeAndSequenceNumber;
	NSMutableDictionary* _stereoDisparityClientBracketProcessorInputsBySequenceNumber;
	BWStillImageProcessorConfiguration* _redEyeReductionConfiguration;
	NSMutableDictionary* _redEyeReductionInputByPortType;
	BWNodeInput* _pointCloudInput;
	os_unfair_lock_s _pointCloudLock;
	BOOL _discardPointClouds;
	BWJasperColorStillsExecutorControllerConfiguration* _jasperColorStillsExecutorConfiguration;
	NSMutableDictionary* _jasperColorStillsExecutorInputByPortType;
	BOOL _deferredProcessingSupportEnabled;
	BOOL _deferredPhotoProcessorEnabled;
	int _deferredCompressionProfile;
	NSMutableDictionary* _deferredProcessorInputByPortType;
	BWPixelBufferPool* _ubOutputDeferredPool;
	opaqueCMSampleBufferRef _deepFusionProxyOrErrorRecoverySbuf;
	int _minimumOutputBufferCount;
	int _maxNumberOfBurstCapturesAllowedInFlight;
	int _dcOutputBufferCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)depthDataDeliveryEnabled;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)setSharedResources:(id)arg1 ;
-(CVBufferRef)processorController:(id)arg1 newOutputPixelBufferForProcessorInput:(id)arg2 type:(unsigned long long)arg3 ;
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 processorInput:(id)arg4 ;
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3 ;
-(void)processorController:(id)arg1 didFinishProcessingBuffer:(CVBufferRef)arg2 metadata:(id)arg3 type:(unsigned long long)arg4 processorInput:(id)arg5 err:(int)arg6 ;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4 ;
-(int)verticalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(void)processorController:(id)arg1 didSelectLowLightReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 ;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(int)semanticRenderingVersion;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 ;
-(BOOL)intelligentDistortionCorrectionSupportedForCaptureType:(int)arg1 portType:(id)arg2 ;
-(int)intelligentDistortionCorrectionVersion;
-(void)processorController:(id)arg1 didFinishProcessingSampleBuffer:(opaqueCMSampleBufferRef)arg2 type:(unsigned long long)arg3 processorInput:(id)arg4 err:(int)arg5 ;
-(void)processorController:(id)arg1 didFinishProcessingInput:(id)arg2 err:(int)arg3 ;
-(int)horizontalSensorBinningFactor;
-(BOOL)redEyeReductionEnabled;
-(id)portTypesWithGeometricDistortionCorrectionEnabled;
-(int)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_resetProcessingState;
-(void)_configureInferenceController;
-(void)_releaseInferenceControllerConfiguration;
-(SCD_Struct_BW2)disparityOutputDimensions;
-(void)_setupProcessorCoordinator;
-(int)_handlePointCloudSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_resetProcessingStateIfDone;
-(BOOL)_shouldPassthroughWithStillImageSettings:(id)arg1 ;
-(void)_infoForCaptureType:(int)arg1 isSupportedCaptureTypeOut:(BOOL*)arg2 isFusionCaptureTypeOut:(BOOL*)arg3 ;
-(int)_setupProcessingStateWithSettings:(id)arg1 ;
-(void)_inferenceProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 settings:(id)arg2 portType:(id)arg3 ;
-(void)_handleReferenceFrameEmissionForProcessorInput:(id)arg1 ;
-(void)_handleClientBracketFrameEmissionForProcessorInput:(id)arg1 clientBracketFrame:(opaqueCMSampleBufferRef)arg2 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 settings:(id)arg2 portType:(id)arg3 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 description:(id)arg2 ;
-(void)_processorControllerDidFinishProcessingInputForPortType:(id)arg1 processorType:(unsigned long long)arg2 ;
-(void)_removeNonPropagatedAttachedMediaFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleDeepFusionError:(int)arg1 processorInput:(id)arg2 ;
-(BOOL)_waitForInferenceIfNeededForProcessorInput:(id)arg1 ;
-(void)_emitError:(int)arg1 processorInput:(id)arg2 description:(id)arg3 ;
-(void)_commitDeferredBuffer:(CVBufferRef)arg1 bufferType:(unsigned long long)arg2 metadata:(id)arg3 processorInput:(id)arg4 ;
-(BOOL)_referenceOrClientBracketFrameEmissionNeededForProcessorInput:(id)arg1 ;
-(BOOL)_generateDisparityForSettings:(id)arg1 ;
-(BOOL)_processingNeededForNoiseReductionAndFusionProcessorInput:(id)arg1 ;
-(int)_setupProcessingStateForIntelligentDistortionCorrectionIfNeededAfterNRProcessorInput:(id)arg1 nrProcessorOutputSbufRouter:(/*^block*/id)arg2 processingSettings:(id)arg3 ;
-(BOOL)_isSemanticRenderingCaptureType:(int)arg1 ;
-(int)_scaleInferenceInputForRedEyeReductionFromPixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 ;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)commitDeferredSkinMask:(CVBufferRef)arg1 skyMask:(CVBufferRef)arg2 personMask:(CVBufferRef)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 ;
-(void)addInferencesToIntelligentDistortionCorrectionInputForPortType:(id)arg1 lowResPersonMask:(CVBufferRef)arg2 faceDetectionObservations:(id)arg3 ;
-(int)_setupProcessingStateForClientBracketWithSettings:(id)arg1 ;
-(int)_setupProcessingStateForSingleImageCaptureWithSettings:(id)arg1 ;
-(void)_setupDeferredProcessingWithSettings:(id)arg1 portType:(id)arg2 ;
-(int)_setupProcessingStateForDisparityIfNeededWithSettings:(id)arg1 ;
-(int)_setupProcessingStateForDeepFusionWithSettings:(id)arg1 ;
-(int)_setupProcessingStateForPointCloudDepthIfNeededWithSettings:(id)arg1 ;
-(id)_processingOrderByPortTypeForSettings:(id)arg1 ;
-(void)stopAdaptiveBracketingForSettings:(id)arg1 withGroup:(int)arg2 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 wait:(BOOL)arg2 ;
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(id)referenceFrameSelectionDelegate;
-(BOOL)fusionSupportEnabled;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 skyMask:(const void*)arg3 personMask:(const void*)arg4 faceObservations:(id)arg5 processorInput:(id)arg6 err:(int)arg7 ;
-(BOOL)digitalFlashSupportEnabled;
-(BOOL)deepFusionPreprocessingSupportEnabled;
-(BOOL)deepFusionWaitForPreprocessingToFinish;
-(BOOL)deepFusionSupportEnabled;
-(int)maxDeepFusionOutputCount;
-(id)processorCoordinator;
-(void)setReferenceFrameSelectionDelegate:(id)arg1 ;
-(void)setDigitalFlashSupportEnabled:(BOOL)arg1 ;
-(id)pointCloudInput;
-(id)initWithNodeConfiguration:(id)arg1 captureDevice:(id)arg2 sensorConfigurations:(id)arg3 inputIs10Bit:(BOOL)arg4 retainedBufferCount:(int)arg5 outputBufferCount:(int)arg6 minimumOutputBufferCount:(int)arg7 maxNumberOfBurstCapturesAllowedInFlight:(int)arg8 dcOutputBufferCount:(int)arg9 outputPoolBackPressureEnabled:(BOOL)arg10 deferredProcessingSupportEnabled:(BOOL)arg11 deferredPhotoProcessorEnabled:(BOOL)arg12 stillImageFusionScheme:(int)arg13 figThreadPriority:(unsigned)arg14 ;
-(void)setFusionSupportEnabled:(BOOL)arg1 ;
-(void)setDeepFusionPreprocessingSupportEnabled:(BOOL)arg1 ;
-(void)setDeepFusionWaitForPreprocessingToFinish:(BOOL)arg1 ;
-(void)setDeepFusionSupportEnabled:(BOOL)arg1 ;
-(void)setMaxDeepFusionOutputCount:(int)arg1 ;
-(void)setSemanticRenderingVersion:(int)arg1 semanticDevelopmentVersion:(int)arg2 ;
-(void)setDisparityOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 geometricDistortionCorrectionEnabled:(BOOL)arg2 portTypesWithGeometricDistortionCorrectionEnabled:(id)arg3 intelligentDistortionCorrectionVersion:(int)arg4 ;
-(float)gainMapMainImageDownscalingFactor;
-(id)sharedResources;
-(void)dealloc;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
@end

