/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWUBProcessorInputDelegate.h>
#import <libobjc.A.dylib/UBProcessorDelegate.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorController.h>

@class BWUBProcessorControllerConfiguration, NSSet, FigStateMachine, UBProcessor, UBPrepareDescriptor, NSDictionary, NSMutableArray, BWUBProcessorRequest, NSString;

@interface BWUBProcessorController : BWStillImageProcessorController <BWUBProcessorInputDelegate, UBProcessorDelegate, BWNoiseReductionAndFusionProcessorController> {

	BWUBProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	UBProcessor* _ubProcessor;
	UBPrepareDescriptor* _prepareDescriptor;
	Class _ubFusionOutputClass;
	Class _ubProgressiveBracketingStatisticsClass;
	Class _ubProgressiveBracketingParametersClass;
	NSDictionary* _adaptiveBracketingCaptureParametersByPortType;
	Class _ubDeepFusionOutputClass;
	UBPrepareDescriptor* _deepFusionPrepareDescriptor;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;
	opaqueCMFormatDescriptionRef _gainMapFormatDescription;
	NSMutableArray* _requestQueue;
	BWUBProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)lazilyAllocatesDeepFusionOutputBuffers;
-(void)input:(id)arg1 addFrame:(opaqueCMSampleBufferRef)arg2 isReferenceFrame:(BOOL)arg3 ;
-(void)inputReceivedAllFrames:(id)arg1 ;
-(int)_loadSetupAndPrepareUBProcessor;
-(void)_resetProcessor;
-(int)_setupProcessorForProcessingType:(unsigned)arg1 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferOut:(opaqueCMSampleBuffer*)arg2 ;
-(void)_processUBFusion;
-(opaqueCMSampleBufferRef)_newOutputSampleBufferWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBuffer:(CVBufferRef)arg2 formatDescriptionInOut:(const opaqueCMFormatDescription*)arg3 metadataToMerge:(id)arg4 ;
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5 ;
-(id)processorGetInferenceResults:(id)arg1 ;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2 ;
-(void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned)arg2 ;
-(BOOL)finishProcessingCurrentInputNow;
-(void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned)arg2 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 ;
-(void)_setupProcessor;
-(void)_processSingleImage;
-(void)_processUBOriginalImage;
-(void)_processLowLightFusion;
-(void)_processDeepFusion;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(unsigned long long)type;
-(void)cancelProcessing;
-(void)dealloc;
@end

