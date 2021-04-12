/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWUBProcessorInputDelegate.h>
#import <libobjc.A.dylib/UBProcessorDelegate.h>

@class BWUBProcessorControllerConfiguration, NSSet, FigStateMachine, UBProcessor, UBPrepareDescriptor, NSDictionary, NSMutableArray, BWUBProcessorRequest, NSString;

@interface BWUBProcessorController : BWStillImageProcessorController <BWUBProcessorInputDelegate, UBProcessorDelegate> {

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
	NSMutableArray* _requestQueue;
	BWUBProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)finishProcessingCurrentInputNow;
-(void)cancelProcessing;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 ;
-(void)_resetProcessor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)_setupProcessor;
-(void)input:(id)arg1 addFrame:(opaqueCMSampleBufferRef)arg2 isReferenceFrame:(BOOL)arg3 ;
-(void)inputReceivedAllFrames:(id)arg1 ;
-(int)_loadSetupAndPrepareUBProcessor;
-(int)_setupProcessorForProcessingType:(unsigned)arg1 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferOut:(opaqueCMSampleBuffer*)arg2 ;
-(void)_processUBFusion;
-(opaqueCMSampleBufferRef)_newOutputSampleBufferWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBuffer:(CVBufferRef)arg2 formatDescriptionInOut:(const opaqueCMFormatDescription*)arg3 metadataToMerge:(id)arg4 ;
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5 ;
-(id)processorGetInferenceResults:(id)arg1 ;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2 ;
-(void)_processSingleImage;
-(void)_processUBOriginalImage;
-(void)_processLowLightFusion;
-(void)_processDeepFusion;
@end

