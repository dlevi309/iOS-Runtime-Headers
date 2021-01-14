/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayerOperations.h>
#import <MLCompute/MLCEngineDispatch.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MLCompute/MLComputeEngineControl.h>

@class NSArray, MLCDeviceGPUHeapAllocator, NSMutableArray, NSString;

@interface MLCDeviceGPU : NSObject <MLCLayerOperations, MLCEngineDispatch, NSCopying, MLComputeEngineControl> {

	int _deviceType;
	os_unfair_lock_s _l;
	NSArray* _deviceList;
	MLCDeviceGPUHeapAllocator* _gpuHeapAllocator;
	NSMutableArray* _gpuCommandQueueList;
	NSMutableArray* _gpuCommandBufferList;
	NSMutableArray* _gpuMPSCommandBufferList;
	NSMutableArray* _gpuWriteTensorKernelList;
	NSMutableArray* _gpuReadTensorKernelList;
	NSMutableArray* _gpuLibrary;
	NSMutableArray* _gpuPipelineStatesForward2DArray;
	NSMutableArray* _gpuPipelineStatesForward2D;
	NSMutableArray* _gpuPipelineStatesGradient2DArray;
	NSMutableArray* _gpuPipelineStatesGradient2D;
	NSMutableArray* _gpuPipelineStatesForwardConcat2DArray;
	NSMutableArray* _gpuPipelineStatesForwardConcat2D;
	NSMutableArray* _gpuPipelineStatesFill2DArray;
	NSMutableArray* _gpuPipelineStatesFill2D;
	NSMutableArray* _gpuPipelineStatesPad2DArray;
	NSMutableArray* _gpuPipelineStatesPad2D;
	NSMutableArray* _gpuPipelineStatesLayerNormForwardTraining;
	NSMutableArray* _gpuPipelineStatesLayerNormForwardInference;
	NSMutableArray* _gpuPipelineStatesLayerNormGradient;
	NSMutableArray* _gpuPipelineStatesLayerNormComputeBetaGammaDelta;
	NSMutableArray* _gpuPipelineStatesReduceAcrossBatch;
	NSMutableArray* _gpuPipelineStatesArithmeticUnaryForwardArray;
	NSMutableArray* _gpuPipelineStatesArithmeticUnaryForward;
	NSMutableArray* _gpuPipelineStatesArithmeticUnaryGradientArray;
	NSMutableArray* _gpuPipelineStatesArithmeticUnaryGradient;
	NSMutableArray* _gpuPipelineStatesArithmeticBinaryForward;
	NSMutableArray* _gpuPipelineStatesArithmeticBinaryGradient;
	NSMutableArray* _gpuPipelineStatesArithmeticReduceGradient;
	NSMutableArray* _gpuPipelineStatesEmbeddingRenormalizeWeights;
	NSMutableArray* _gpuPipelineStatesEmbeddingForward;
	NSMutableArray* _gpuPipelineStatesEmbeddingGradient;
	NSMutableArray* _gpuConcurrentEncoderFence;
	double* _executionTimeInterval;
	NSArray* _gpuLocalEventList;
	NSArray* _gpuSharedEventList;
	unsigned long long* _currentEventValue;
	unsigned long long _numDevicesToUse;
	unsigned long long _numDevicesUsedWithFirstBatch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,l,nonatomic) os_unfair_lock_s l;                                                          //@synthesize l=_l - In the implementation block
@property (nonatomic,retain) MLCDeviceGPUHeapAllocator * gpuHeapAllocator;                                  //@synthesize gpuHeapAllocator=_gpuHeapAllocator - In the implementation block
@property (nonatomic,readonly) double* executionTimeInterval;                                               //@synthesize executionTimeInterval=_executionTimeInterval - In the implementation block
@property (nonatomic,retain) NSArray * gpuLocalEventList;                                                   //@synthesize gpuLocalEventList=_gpuLocalEventList - In the implementation block
@property (nonatomic,retain) NSArray * gpuSharedEventList;                                                  //@synthesize gpuSharedEventList=_gpuSharedEventList - In the implementation block
@property (nonatomic,readonly) unsigned long long* currentEventValue;                                       //@synthesize currentEventValue=_currentEventValue - In the implementation block
@property (assign,nonatomic) unsigned long long numDevicesToUse;                                            //@synthesize numDevicesToUse=_numDevicesToUse - In the implementation block
@property (assign,nonatomic) unsigned long long numDevicesUsedWithFirstBatch;                               //@synthesize numDevicesUsedWithFirstBatch=_numDevicesUsedWithFirstBatch - In the implementation block
@property (nonatomic,readonly) NSArray * deviceList;                                                        //@synthesize deviceList=_deviceList - In the implementation block
@property (nonatomic,readonly) int deviceType;                                                              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuCommandQueueList;                                        //@synthesize gpuCommandQueueList=_gpuCommandQueueList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuCommandBufferList;                                       //@synthesize gpuCommandBufferList=_gpuCommandBufferList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuMPSCommandBufferList;                                    //@synthesize gpuMPSCommandBufferList=_gpuMPSCommandBufferList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuWriteTensorKernelList;                                   //@synthesize gpuWriteTensorKernelList=_gpuWriteTensorKernelList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuReadTensorKernelList;                                    //@synthesize gpuReadTensorKernelList=_gpuReadTensorKernelList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gpuLibrary;                                                 //@synthesize gpuLibrary=_gpuLibrary - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesForward2DArray;                              //@synthesize gpuPipelineStatesForward2DArray=_gpuPipelineStatesForward2DArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesForward2D;                                   //@synthesize gpuPipelineStatesForward2D=_gpuPipelineStatesForward2D - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesGradient2DArray;                             //@synthesize gpuPipelineStatesGradient2DArray=_gpuPipelineStatesGradient2DArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesGradient2D;                                  //@synthesize gpuPipelineStatesGradient2D=_gpuPipelineStatesGradient2D - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesForwardConcat2DArray;                        //@synthesize gpuPipelineStatesForwardConcat2DArray=_gpuPipelineStatesForwardConcat2DArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesForwardConcat2D;                             //@synthesize gpuPipelineStatesForwardConcat2D=_gpuPipelineStatesForwardConcat2D - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesFill2DArray;                                 //@synthesize gpuPipelineStatesFill2DArray=_gpuPipelineStatesFill2DArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesFill2D;                                      //@synthesize gpuPipelineStatesFill2D=_gpuPipelineStatesFill2D - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesPad2DArray;                                  //@synthesize gpuPipelineStatesPad2DArray=_gpuPipelineStatesPad2DArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesPad2D;                                       //@synthesize gpuPipelineStatesPad2D=_gpuPipelineStatesPad2D - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesLayerNormForwardTraining;                    //@synthesize gpuPipelineStatesLayerNormForwardTraining=_gpuPipelineStatesLayerNormForwardTraining - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesLayerNormForwardInference;                   //@synthesize gpuPipelineStatesLayerNormForwardInference=_gpuPipelineStatesLayerNormForwardInference - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesLayerNormGradient;                           //@synthesize gpuPipelineStatesLayerNormGradient=_gpuPipelineStatesLayerNormGradient - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesLayerNormComputeBetaGammaDelta;              //@synthesize gpuPipelineStatesLayerNormComputeBetaGammaDelta=_gpuPipelineStatesLayerNormComputeBetaGammaDelta - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesReduceAcrossBatch;                           //@synthesize gpuPipelineStatesReduceAcrossBatch=_gpuPipelineStatesReduceAcrossBatch - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticUnaryForwardArray;                 //@synthesize gpuPipelineStatesArithmeticUnaryForwardArray=_gpuPipelineStatesArithmeticUnaryForwardArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticUnaryForward;                      //@synthesize gpuPipelineStatesArithmeticUnaryForward=_gpuPipelineStatesArithmeticUnaryForward - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticUnaryGradientArray;                //@synthesize gpuPipelineStatesArithmeticUnaryGradientArray=_gpuPipelineStatesArithmeticUnaryGradientArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticUnaryGradient;                     //@synthesize gpuPipelineStatesArithmeticUnaryGradient=_gpuPipelineStatesArithmeticUnaryGradient - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticBinaryForward;                     //@synthesize gpuPipelineStatesArithmeticBinaryForward=_gpuPipelineStatesArithmeticBinaryForward - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticBinaryGradient;                    //@synthesize gpuPipelineStatesArithmeticBinaryGradient=_gpuPipelineStatesArithmeticBinaryGradient - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesArithmeticReduceGradient;                    //@synthesize gpuPipelineStatesArithmeticReduceGradient=_gpuPipelineStatesArithmeticReduceGradient - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesEmbeddingRenormalizeWeights;                 //@synthesize gpuPipelineStatesEmbeddingRenormalizeWeights=_gpuPipelineStatesEmbeddingRenormalizeWeights - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesEmbeddingForward;                            //@synthesize gpuPipelineStatesEmbeddingForward=_gpuPipelineStatesEmbeddingForward - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuPipelineStatesEmbeddingGradient;                           //@synthesize gpuPipelineStatesEmbeddingGradient=_gpuPipelineStatesEmbeddingGradient - In the implementation block
@property (nonatomic,retain) NSMutableArray * gpuConcurrentEncoderFence;                                    //@synthesize gpuConcurrentEncoderFence=_gpuConcurrentEncoderFence - In the implementation block
+(id)filteredGPUListIncludingLowPoweredBuiltin:(BOOL)arg1 ;
+(BOOL)multiGPUNotSupportedInFilteredGPUList:(id)arg1 ;
+(unsigned long long)calculateImageSizeForTensor:(id)arg1 ;
-(os_unfair_lock_s)l;
-(int)deviceType;
-(void)setL:(os_unfair_lock_s)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)deviceList;
-(NSMutableArray *)gpuPipelineStatesForwardConcat2D;
-(NSMutableArray *)gpuPipelineStatesForwardConcat2DArray;
-(id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
-(id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3 ;
-(NSMutableArray *)gpuReadTensorKernelList;
-(NSMutableArray *)gpuWriteTensorKernelList;
-(id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2 ;
-(id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6 ;
-(id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)lossLayerWithDescriptor:(id)arg1 ;
-(id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4 ;
-(id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(BOOL)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg1 weights:(id)arg2 bias:(id)arg3 ;
-(id)createOptimizerDeviceDataForTensor:(id)arg1 optimizer:(id)arg2 optimizerData:(id)arg3 isVector:(BOOL)arg4 ;
-(id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)neuronLayerWithDescriptor:(id)arg1 ;
-(id)layerNormalizationLayerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 ;
-(id)arithmeticLayerWithOperation:(int)arg1 ;
-(id)compareLayerWithPredicate:(int)arg1 ;
-(id)reductionLayerWithReduceType:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3 ;
-(id)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2 ;
-(id)lossYOLOLayerWithDescriptor:(id)arg1 ;
-(id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2 ;
-(id)reshapeLayerWithShape:(id)arg1 ;
-(id)transposeLayerWithShape:(id)arg1 ;
-(id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 ;
-(id)gramMatrixLayerWithScaleFactor:(float)arg1 ;
-(id)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(BOOL)arg4 ;
-(id)matMulLayerWithDescriptor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNesterovMomentum:(BOOL)arg3 ;
-(id)optimizerAdamWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
-(id)optimizerRMSPropWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(BOOL)arg5 ;
-(unsigned long long)allocatedDeviceDataSizeForTraining:(BOOL)arg1 layer:(id)arg2 ;
-(BOOL)setMHALayerOptimizerDataForDeviceOps:(id)arg1 optimizerDataForWeights:(id)arg2 optimizerDataForBias:(id)arg3 ;
-(BOOL)setLSTMLayerOptimizerDataForDeviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4 ;
-(void)fuseLayersForTrainingGraph:(id)arg1 ;
-(void)fuseLayersForInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2 ;
-(id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4 ;
-(id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;
-(id)splitLayerWithDimension:(unsigned long long)arg1 ;
-(id)sliceLayerWithbegin:(id)arg1 end:(id)arg2 stride:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(id)embeddingLayerWithDescriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 ;
-(void)setConvolutionGradientComputeWeightsAndBiasOnly:(id)arg1 ;
-(void)setFullyConnectedGradientComputeWeightsAndBiasOnly:(id)arg1 ;
-(id)weightsGradients:(id)arg1 ;
-(id)biasesGradients:(id)arg1 ;
-(id)mhaWeightGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
-(id)mhaBiasGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
-(id)mhaAttnBiasGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
-(id)lstmInputWeightGradient:(id)arg1 mlcWeightIndex:(unsigned long long)arg2 ;
-(id)lstmHiddenWeightGradient:(id)arg1 mlcWeightIndex:(unsigned long long)arg2 ;
-(id)lstmBiasGradient:(id)arg1 mlcBiasIndex:(unsigned long long)arg2 ;
-(id)betaGradients:(id)arg1 ;
-(id)gammaGradients:(id)arg1 ;
-(id)embeddingWeightsGradients:(id)arg1 embeddingCount:(unsigned long long)arg2 embeddingDimension:(unsigned long long)arg3 ;
-(void)allocateParameterGradientsForDeviceOps:(id)arg1 parameters:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForTensor:(id)arg1 ;
-(unsigned long long)numDevices;
-(void)updateTensorsForTwoFusedLayers:(id)arg1 layerNext:(id)arg2 ;
-(BOOL)canFuseConvolutionLayerForInference:(id)arg1 ;
-(BOOL)canFuseFullyConnectedLayerForInference:(id)arg1 ;
-(unsigned long long)numDevicesToUse;
-(NSMutableArray *)gpuCommandQueueList;
-(BOOL)synchronizeTensorOnHost:(id)arg1 ;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(BOOL)arg5 ;
-(void)updateTensorsForThreeFusedLayers:(id)arg1 layerNext:(id)arg2 layerNext2:(id)arg3 ;
-(id)initWithDeviceList:(id)arg1 ;
-(id)initWithType:(int)arg1 gpuDeviceList:(id)arg2 gpuLocalEventList:(id)arg3 gpuSharedEventList:(id)arg4 currentEventValue:(unsigned long long*)arg5 gpuCommandQueueList:(id)arg6 gpuCommandBufferList:(id)arg7 gpuMPSCommandBufferList:(id)arg8 ;
-(BOOL)createPipelineStatesForMissingActivationFunctions;
-(void)setGpuPipelineStatesForward2DArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesForward2D:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesGradient2DArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesGradient2D:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesForwardConcat2DArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesForwardConcat2D:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesFill2DArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesFill2D:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesPad2DArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesPad2D:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesLayerNormForwardTraining:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesLayerNormForwardInference:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesLayerNormGradient:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesLayerNormComputeBetaGammaDelta:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesReduceAcrossBatch:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticUnaryForwardArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticUnaryForward:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticUnaryGradientArray:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticUnaryGradient:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticBinaryForward:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticBinaryGradient:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesArithmeticReduceGradient:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesEmbeddingRenormalizeWeights:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesEmbeddingForward:(NSMutableArray *)arg1 ;
-(void)setGpuPipelineStatesEmbeddingGradient:(NSMutableArray *)arg1 ;
-(void)setGpuConcurrentEncoderFence:(NSMutableArray *)arg1 ;
-(NSMutableArray *)gpuLibrary;
-(NSMutableArray *)gpuPipelineStatesForward2DArray;
-(NSMutableArray *)gpuPipelineStatesForward2D;
-(NSMutableArray *)gpuPipelineStatesGradient2DArray;
-(NSMutableArray *)gpuPipelineStatesGradient2D;
-(NSMutableArray *)gpuPipelineStatesFill2DArray;
-(NSMutableArray *)gpuPipelineStatesFill2D;
-(NSMutableArray *)gpuPipelineStatesPad2DArray;
-(NSMutableArray *)gpuPipelineStatesPad2D;
-(NSMutableArray *)gpuPipelineStatesLayerNormForwardTraining;
-(NSMutableArray *)gpuPipelineStatesLayerNormForwardInference;
-(NSMutableArray *)gpuPipelineStatesLayerNormGradient;
-(NSMutableArray *)gpuPipelineStatesLayerNormComputeBetaGammaDelta;
-(NSMutableArray *)gpuPipelineStatesReduceAcrossBatch;
-(NSMutableArray *)gpuPipelineStatesArithmeticUnaryForwardArray;
-(NSMutableArray *)gpuPipelineStatesArithmeticUnaryForward;
-(NSMutableArray *)gpuPipelineStatesArithmeticUnaryGradientArray;
-(NSMutableArray *)gpuPipelineStatesArithmeticUnaryGradient;
-(NSMutableArray *)gpuPipelineStatesArithmeticBinaryForward;
-(NSMutableArray *)gpuPipelineStatesArithmeticBinaryGradient;
-(NSMutableArray *)gpuPipelineStatesArithmeticReduceGradient;
-(NSMutableArray *)gpuPipelineStatesEmbeddingRenormalizeWeights;
-(NSMutableArray *)gpuPipelineStatesEmbeddingForward;
-(NSMutableArray *)gpuPipelineStatesEmbeddingGradient;
-(NSMutableArray *)gpuConcurrentEncoderFence;
-(NSMutableArray *)gpuCommandBufferList;
-(unsigned long long*)currentEventValue;
-(NSArray *)gpuLocalEventList;
-(NSArray *)gpuSharedEventList;
-(NSMutableArray *)gpuMPSCommandBufferList;
-(void)allocateCommandBufferForDeviceAtIndex:(unsigned long long)arg1 ;
-(void)updateGraphExecutionTime:(id)arg1 atIndex:(int)arg2 gpuTime:(double)arg3 ;
-(void)signalNextEvent;
-(void)waitForOthers;
-(void)readTensor:(id)arg1 targetBuffer:(void*)arg2 ;
-(void)commitDeviceAtIndex:(unsigned long long)arg1 ;
-(double*)executionTimeInterval;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)setGpuHeapAllocator:(MLCDeviceGPUHeapAllocator *)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(id)allocateDeviceMemoryForTensor:(id)arg1 device:(id)arg2 count:(unsigned long long)arg3 ;
-(void)selectDevicesWithBatchSize:(unsigned long long)arg1 calledfromBindAndWrite:(BOOL)arg2 ;
-(unsigned long long)numDevicesUsedWithFirstBatch;
-(void)setNumDevicesUsedWithFirstBatch:(unsigned long long)arg1 ;
-(void)setNumDevicesToUse:(unsigned long long)arg1 ;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 ;
-(void)multiDeviceTensorReduction:(id)arg1 sourceBuffer:(void*)arg2 targetBuffer:(void*)arg3 ;
-(void)dispatchReadTensorFromAllDevices:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3 ;
-(void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 ;
-(void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 ;
-(void)unsafe_signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2 ;
-(void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg1 ;
-(void)deviceHeapAllocatorWithHeapSize:(unsigned long long)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg1 ;
-(void)deallocateDeviceMemoryForTensor:(id)arg1 ;
-(BOOL)shareDeviceMemoryWithResultTensor:(id)arg1 sourceTensor:(id)arg2 ;
-(id)readTensor:(id)arg1 ;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 ;
-(void)dispatchReadTensor:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3 ;
-(void)broadcastTensor:(id)arg1 ;
-(void)dispatchBroadcastTensor:(id)arg1 ;
-(void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 ;
-(void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 ;
-(BOOL)synchronizeTensor:(id)arg1 ;
-(void)commitWithProfiling:(BOOL)arg1 graphExecutionTime:(id)arg2 ;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4 ;
-(void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2 ;
-(void)selectDevicesWithBatchSize:(unsigned long long)arg1 ;
-(id)initWithType:(int)arg1 selectsMultipleComputeDevices:(BOOL)arg2 ;
-(void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(id)allocateTemporaryDeviceMemoryForTensor:(id)arg1 commandBuffer:(id)arg2 count:(unsigned long long)arg3 ;
-(void)allReduceOverXGMI:(id)arg1 deviceIndex:(unsigned long long)arg2 stateBuffers:(id)arg3 ;
-(MLCDeviceGPUHeapAllocator *)gpuHeapAllocator;
-(void)setGpuLocalEventList:(NSArray *)arg1 ;
-(void)setGpuSharedEventList:(NSArray *)arg1 ;
-(void)dispatchFillKernel:(id)arg1 imageBatch:(id)arg2 deviceIndex:(unsigned long long)arg3 ;
-(void)dispatchFillKernel:(id)arg1 tensor:(id)arg2 deviceIndex:(unsigned long long)arg3 ;
-(void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3 forConcat:(BOOL)arg4 ;
-(void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3 forConcat:(BOOL)arg4 ;
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchForwardSliceLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultStateIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 forTraining:(BOOL)arg8 ;
-(void)dispatchForwardLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultStateIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 forTraining:(BOOL)arg10 ;
-(void)updateTensorAllocator:(BOOL)arg1 deviceOps:(id)arg2 ;
-(void)dispatchMissingActivationsForwardKernel:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 deviceIndex:(unsigned long long)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(id)broadcastMPSImageAcrossBatch:(id)arg1 maxBatchSize:(unsigned long long)arg2 ;
-(void)dispatchForwardArithmeticBinaryKernel:(id)arg1 sourceTensor:(id)arg2 sourceSecondaryTensor:(id)arg3 resultTensor:(id)arg4 deviceIndex:(unsigned long long)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 ;
-(void)dispatchForwardArithmeticUnaryKernel:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 deviceIndex:(unsigned long long)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardMHALayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchMissingActivationsGradientKernel:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 deviceIndex:(unsigned long long)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(BOOL)sumAcrossBatchForMPSImageBatch:(id)arg1 deviceIndex:(unsigned long long)arg2 tensorShape:(id)arg3 maxBatchSize:(unsigned long long)arg4 commandBuffer:(id)arg5 ;
-(void)dispatchGradientArithmeticBinaryKernel:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 deviceIndex:(unsigned long long)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 ;
-(void)dispatchGradientArithmeticUnaryKernel:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 deviceIndex:(unsigned long long)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardReshapeLayerWithDeviceOps:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 keepsState:(BOOL)arg7 ;
-(void)dispatchPadChannelsKernel:(id)arg1 sourceImageBatch:(id)arg2 resultImageBatch:(id)arg3 deviceIndex:(unsigned long long)arg4 ;
-(void)dispatchForwardWithMPSNDArrayKernel:(id)arg1 deviceIndex:(unsigned long long)arg2 sourceTensor:(id)arg3 secondaryTensor:(id)arg4 resultTensor:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultStateIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8 withStates:(BOOL)arg9 ;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientWithMPSNDArrayKernel:(id)arg1 deviceIndex:(unsigned long long)arg2 sourceGradientTensor:(id)arg3 resultGradientTensor:(id)arg4 secondaryResultGradientTensor:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 ;
-(void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3 ;
-(void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3 ;
-(void)dispatchForwardConcatLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(void)dispatchGradientConcatLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 ;
-(void)dispatchForwardLayerNormalizationLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchGradientLayerNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardEmbeddingLayer:(id)arg1 weight:(id)arg2 sourceTensor:(id)arg3 resultTensor:(id)arg4 ;
-(void)dispatchGradientEmbeddingLayer:(id)arg1 sourceGradientTensor:(id)arg2 ;
-(void)dispatchForwardSliceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 ;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8 ;
-(void)dispatchForwardLayerBatchNormalizationWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardMatMulLayer:(id)arg1 sourceTensor:(id)arg2 secondarySourceTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchGradientMatMulLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchForwardMHALayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientMHALayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 ;
-(void)dispatchGradientReshapeLayerWithDeviceOps:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientSliceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 ;
-(void)dispatchGradientBatchNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8 ;
-(void)dispatchInitialGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardAndGradientLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 ;
-(void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchRNNForwardLayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2 ;
-(void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2 ;
-(void)dispatchForwardSoftmaxLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardSoftmaxLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchGradientSoftmaxLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(BOOL)arg3 ;
-(void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2 ;
-(void)setOptimizerTimeStep:(id)arg1 timeStep:(unsigned long long)arg2 ;
-(void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 ;
-(void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 meanTensor:(id)arg5 varianceTensor:(id)arg6 ;
-(void)updateInstanceNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateLayerNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateGroupNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 ;
-(void)updateRNNLayer:(id)arg1 optimizer:(id)arg2 inputWeightsParameter:(id)arg3 hiddenWeightsParameter:(id)arg4 biasesParameter:(id)arg5 ;
-(void)updateMultiheadAttentionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4 ;
-(void)updateEmbeddingLayer:(id)arg1 weightsParameter:(id)arg2 optimizer:(id)arg3 ;
-(void)updateTensorParameter:(id)arg1 optimizer:(id)arg2 gradient:(id)arg3 ;
-(void)synchronizeUpdatesForLayer:(id)arg1 ;
-(void)synchronizeOptimizerUpdatesForTensor:(id)arg1 ;
-(void)convertUpdatesToTensorDataForLayer:(id)arg1 ;
-(void)convertUpdatesToTensorDataForTensorParameters:(id)arg1 ;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1 ;
-(id)getGradientBufferForNormalizationState:(id)arg1 layer:(id)arg2 isBetaTensor:(BOOL)arg3 ;
-(void)setOptimizerTimeStepToMPSKernel:(id)arg1 ;
-(void)updateWithOptimizer:(id)arg1 commandBuffer:(id)arg2 deviceParameter:(id)arg3 source:(id)arg4 gradient:(id)arg5 result:(id)arg6 momentumIndex:(unsigned long long)arg7 ;
-(void)saveOrRestoreTempMatrixDisableUpdates:(id)arg1 commandBuffer:(id)arg2 auxiliaryWeightsMemory:(id)arg3 auxiliaryMomentumMemory:(id)arg4 auxiliaryVelocityMemory:(id)arg5 auxiliaryCenterWeightMemory:(id)arg6 deviceNumber:(unsigned long long)arg7 kernelNumber:(unsigned long long)arg8 mlcIndex:(unsigned long long)arg9 auxIndex:(unsigned long long)arg10 numOptimizerData:(unsigned long long)arg11 saveToAux:(BOOL)arg12 isInputWeight:(BOOL)arg13 isHiddenWeight:(BOOL)arg14 isBias:(BOOL)arg15 ;
-(void)synchronizeWeightMatrixForRNNLayer:(id)arg1 matrixId:(unsigned long long)arg2 parameterType:(unsigned long long)arg3 accumulatorIndex:(unsigned long long)arg4 forLSTMNum:(unsigned long long)arg5 forDeviceNum:(unsigned long long)arg6 forGate:(unsigned long long)arg7 ;
-(BOOL)checkToConvertTensor:(id)arg1 inLayer:(id)arg2 ;
-(void)rotateAndCopyMTLBuffer:(id)arg1 toNSData:(id)arg2 withTensorDescriptor:(id)arg3 ;
-(void)copyMTLBuffer:(id)arg1 toNSData:(id)arg2 ;
-(void)copyMTLBuffer:(id)arg1 toBytes:(void*)arg2 length:(unsigned long long)arg3 ;
-(void)reloadLSTMParameters:(id)arg1 rnnGPUDeviceOps:(id)arg2 mlcParameterIndex:(unsigned long long)arg3 tensor:(id)arg4 isInputWeight:(BOOL)arg5 isHiddenWeight:(BOOL)arg6 isBias:(BOOL)arg7 deviceNumber:(unsigned long long)arg8 ;
@end
