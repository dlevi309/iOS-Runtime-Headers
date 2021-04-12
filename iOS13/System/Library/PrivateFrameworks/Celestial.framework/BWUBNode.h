/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWUBProcessorControllerDelegate.h>
#import <libobjc.A.dylib/BWUBInferenceControllerDelegate.h>
#import <libobjc.A.dylib/BWDeepFusionProcessorControllerDelegate.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingController.h>
#import <libobjc.A.dylib/BWDeferredProcessorControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, BWStillImageProcessingStatusDelegate;
@class NSSet, BWStillImageProcessorCoordinator, NSObject, BWUBProcessorControllerConfiguration, NSMutableDictionary, BWDeepFusionProcessorControllerConfiguration, BWPixelBufferPool, BWUBInferenceControllerConfiguration, NSDictionary, BWUBSemanticRenderingInput, BWStillImageProcessorConfiguration, BWStillImageOverCaptureProcessorControllerConfiguration, BWStillImageOverCaptureProcessorInput, NSString, BWFigVideoCaptureDevice, BWStillImageNodeConfiguration;

@interface BWUBNode : BWNode <BWUBProcessorControllerDelegate, BWUBInferenceControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate> {

	NSSet* _supportedPortTypes;
	BWStillImageProcessorCoordinator* _processorCoordinator;
	NSObject*<OS_dispatch_queue> _processorCoordinatorWorkerQueue;
	os_unfair_lock_s _processorCoordinatorLock;
	BWUBProcessorControllerConfiguration* _ubProcessorControllerConfiguration;
	NSMutableDictionary* _ubProcessorInputByPortType;
	NSMutableDictionary* _remainingUBProcessorInputsByPortType;
	NSMutableDictionary* _emittedReferenceFrameIDForUBProcessorInputByPortType;
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
	BWUBSemanticRenderingInput* _semanticRenderingInput;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;
	OpaqueVTPixelTransferSessionRef _inferenceInputPixelTransferSession;
	BWStillImageProcessorConfiguration* _redEyeReductionConfiguration;
	NSMutableDictionary* _redEyeReductionInputByPortType;
	BWStillImageOverCaptureProcessorControllerConfiguration* _overCaptureProcessorControllerConfiguration;
	BWStillImageOverCaptureProcessorInput* _overCaptureProcessorInput;
	NSObject*<OS_dispatch_queue> _overCaptureProcessorControllerQueue;
	SCD_Struct_BW19 _overCaptureImageDimensions;
	long long _currentSettingsID;
	NSString* _currentCaptureRequestIdentifier;
	unsigned _priority;
	NSObject*<OS_dispatch_queue> _emitQueue;
	BWFigVideoCaptureDevice* _device;
	BWStillImageNodeConfiguration* _nodeConfiguration;
	id<BWStillImageProcessingStatusDelegate> _referenceFrameSelectionDelegate;
	BOOL _deferredProcessingSupportEnabled;
	BOOL _deferredPhotoProcessorEnabled;
	int _deferredCompressionProfile;
	NSMutableDictionary* _deferredProcessorInputByPortType;
	BWPixelBufferPool* _ubOutputDeferredPool;
	opaqueCMSampleBufferRef _deepFusionProxySbuf;
	opaqueCMSampleBufferRef _deepFusionErrorRecoveryFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)redEyeReductionEnabled;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(int)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)_resetProcessingState;
-(BOOL)semanticRenderingEnabled;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setSharedResources:(id)arg1 ;
-(id)sharedResources;
-(void)_setupProcessorCoordinator;
-(int)_setupProcessingStateWithSettings:(id)arg1 captureSettings:(id)arg2 ;
-(void)_emitReferenceFrameIfNeededForProcessorInput:(id)arg1 ;
-(void)_inferenceProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4 ;
-(void)_infoForCaptureType:(int)arg1 isSupportedCaptureTypeOut:(BOOL*)arg2 isFusionCaptureTypeOut:(BOOL*)arg3 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4 ;
-(void)_resetProcessingStateIfDone;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4 ;
-(void)_commitDeferredBuffer:(CVBufferRef)arg1 bufferType:(unsigned long long)arg2 metadata:(id)arg3 processorInput:(id)arg4 ;
-(void)_waitForInferenceIfNeededForProcessorInput:(id)arg1 ;
-(void)_handleDeepFusionError:(int)arg1 processorInput:(id)arg2 ;
-(void)_processorControllerDidFinishProcessingInputForPortType:(id)arg1 processorType:(unsigned long long)arg2 ;
-(void)commitDeferredSkinMask:(CVBufferRef)arg1 personMask:(CVBufferRef)arg2 faceObservations:(id)arg3 processorInput:(id)arg4 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 ;
-(BOOL)_emitReferenceFrameForProcessorInput:(id)arg1 ;
-(int)_scaleInferenceInputForRedEyeReductionFromPixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 ;
-(void)_setupDeferredProcessingWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3 ;
-(CVBufferRef)processorController:(id)arg1 newOutputPixelBufferForProcessorInput:(id)arg2 type:(unsigned long long)arg3 ;
-(void)processorController:(id)arg1 didFinishProcessingSampleBuffer:(opaqueCMSampleBufferRef)arg2 type:(unsigned long long)arg3 processorInput:(id)arg4 err:(int)arg5 ;
-(void)processorController:(id)arg1 didFinishProcessingInput:(id)arg2 err:(int)arg3 ;
-(void)processorController:(id)arg1 didFinishProcessingBuffer:(CVBufferRef)arg2 metadata:(id)arg3 type:(unsigned long long)arg4 processorInput:(id)arg5 err:(int)arg6 ;
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg2 transform:(id)arg3 processorInput:(id)arg4 ;
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3 ;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(void)stopAdaptiveBracketingForSettings:(id)arg1 withGroup:(int)arg2 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 wait:(BOOL)arg2 ;
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 personMask:(const void*)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 err:(int)arg6 ;
-(id)initWithNodeConfiguration:(id)arg1 captureDevice:(id)arg2 sensorConfigurations:(id)arg3 inputPixelFormat:(unsigned)arg4 retainedBufferCount:(int)arg5 outputBufferCount:(int)arg6 deferredProcessingSupportEnabled:(BOOL)arg7 deferredPhotoProcessorEnabled:(BOOL)arg8 figThreadPriority:(unsigned)arg9 ;
-(void)setReferenceFrameSelectionDelegate:(id)arg1 ;
-(id)hdrReferenceFrameSelectionDelegate;
-(void)setFusionSupportEnabled:(BOOL)arg1 ;
-(BOOL)fusionSupportEnabled;
-(void)setDigitalFlashSupportEnabled:(BOOL)arg1 ;
-(BOOL)digitalFlashSupportEnabled;
-(void)setDeepFusionPreprocessingSupportEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionPreprocessingSupportEnabled;
-(void)setDeepFusionSupportEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionSupportEnabled;
-(void)setMaxDeepFusionOutputCount:(int)arg1 ;
-(int)maxDeepFusionOutputCount;
-(void)setSpatialOverCaptureSupportEnabled:(BOOL)arg1 overCaptureImageDimensions:(SCD_Struct_BW19)arg2 overCapturePercentage:(float)arg3 ;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 inferenceScheduler:(id)arg2 ;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 inferenceScheduler:(id)arg2 ;
-(id)processorCoordinator;
@end

