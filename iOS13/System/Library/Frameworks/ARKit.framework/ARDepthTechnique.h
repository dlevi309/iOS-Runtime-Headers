/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>
#import <ARKit/ARTechniqueBusyState.h>

@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;
@class ADJasperColorPipeline, ADEspressoJasperColorInferenceDescriptor, ADLKTOpticalFlow, ADLKTTexturesDescriptor, ARImageRotationTechnique, NSObject, NSMutableArray, ADJasperColorPipelineParameters, NSString;

@interface ARDepthTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {

	CGSize _outputSize;
	ADJasperColorPipeline* _pipeline;
	ADEspressoJasperColorInferenceDescriptor* _inferenceDescriptor;
	ADLKTOpticalFlow* _lkt;
	ADLKTTexturesDescriptor* _lktDescriptor;
	unsigned long long _layout;
	CVPixelBufferPoolRef _outputPixelBufferPool;
	CVPixelBufferPoolRef _outputConfidencePixelBufferPool;
	CVPixelBufferPoolRef _outputAlphaPixelBufferPool;
	CVPixelBufferPoolRef _scaledDepthOutputPixelBufferPool;
	CVPixelBufferPoolRef _scaledConfidenceOutputPixelBufferPool;
	CVPixelBufferPoolRef _opticalFlowPixelBufferPool;
	CVPixelBufferPoolRef _normalPixelBufferPool;
	CVBufferRef _jasperInputBuffer;
	CVBufferRef _previousDepthBuffer;
	ARImageRotationTechnique* _rotationTechnique;
	NSObject*<OS_dispatch_queue> _lktProcessingQueue;
	os_unfair_lock_s _opticalFlowOutputBufferLock;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	long long _storedFramesCount;
	long long _currentFrameIndex;
	NSMutableArray* _pyramids;
	NSMutableArray* _features;
	NSMutableArray* _derivatives;
	BOOL _useTemporalSmoothing;
	ADJasperColorPipelineParameters* _pipelineParameters;
	long long _prioritization;
	CVBufferRef _opticalFlowOutputBuffer;

}

@property (assign,nonatomic) CVBufferRef opticalFlowOutputBuffer;                                 //@synthesize opticalFlowOutputBuffer=_opticalFlowOutputBuffer - In the implementation block
@property (nonatomic,readonly) ADJasperColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
@property (nonatomic,readonly) long long prioritization;                                          //@synthesize prioritization=_prioritization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBusy; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(long long)prioritization;
-(double)requiredTimeInterval;
-(id)createResultDataFromTensors:(SCD_Struct_AR17*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 ;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(id)resultDataClasses;
-(id)initWithPrioritization:(long long)arg1 temporalSmoothing:(BOOL)arg2 ;
-(id)networkModesForOrientation:(long long)arg1 ;
-(ADJasperColorPipelineParameters *)pipelineParameters;
-(void)_initLKT;
-(void)setOpticalFlowOutputBuffer:(CVBufferRef)arg1 ;
-(void)_allocateLKTBuffers;
-(CVBufferRef)_executeLKTWithFrame:(CVBufferRef)arg1 ;
-(int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4 ;
-(void)networkModeDidChange:(id)arg1 toMode:(id)arg2 ;
-(id)_rotatedPixelBufferImageData:(CVBufferRef)arg1 ;
-(int)prepareBindInputBuffer:(unsigned long long)arg1 withName:(id)arg2 ;
-(CVBufferRef)opticalFlowOutputBuffer;
@end

