/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayerOperations.h>
#import <MLCompute/MLCEngineDispatch.h>
#import <MLCompute/MLComputeEngineOptimizerUpdate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MLCompute/MLComputeEngineControl.h>

@class NSArray, NSData, NSString;

@interface MLCDeviceCPU : NSObject <MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, NSCopying, MLComputeEngineControl> {

	int _deviceType;
	NSArray* _deviceList;
	NSData* _deviceHeap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * deviceList;                //@synthesize deviceList=_deviceList - In the implementation block
@property (nonatomic,readonly) int deviceType;                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSData * deviceHeap;                   //@synthesize deviceHeap=_deviceHeap - In the implementation block
-(id)initWithType:(int)arg1 ;
-(int)deviceType;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)deviceList;
-(id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
-(id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3 ;
-(id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2 ;
-(id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6 ;
-(id)fusedGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg1 featureChannelCount:(unsigned long long)arg2 groupCount:(unsigned long long)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 ;
-(id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)lossLayerWithDescriptor:(id)arg1 ;
-(id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10 ;
-(id)fusedFullyConnectedAndSoftmaxLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
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
-(id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10 ;
-(id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;
-(id)splitLayerWithDimension:(unsigned long long)arg1 ;
-(id)sliceLayerWithbegin:(id)arg1 end:(id)arg2 stride:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(id)embeddingLayerWithDescriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)fusedInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 ;
-(id)fusedLayerNormalizationAndNeuronLayerWithDescriptor:(id)arg1 normalizedShape:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)fusedConvolutionInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 neuronDescriptor:(id)arg6 weights:(id)arg7 biasTerms:(id)arg8 ;
-(id)fusedConvolutionGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 groupCount:(unsigned long long)arg6 neuronDescriptor:(id)arg7 weights:(id)arg8 biasTerms:(id)arg9 ;
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
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(BOOL)arg5 ;
-(void)updateTensorsForThreeFusedLayers:(id)arg1 layerNext:(id)arg2 layerNext2:(id)arg3 ;
-(void)signalNextEvent;
-(void)waitForOthers;
-(void)readTensor:(id)arg1 targetBuffer:(void*)arg2 ;
-(void)commitAndWaitForCompletion:(/*^block*/id)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4 ;
-(id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 ;
-(void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
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
-(BOOL)doesActivationRequireInput:(id)arg1 ;
-(void)fuseLayersForGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2 ;
-(void)updateGradientDescriptorsForDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(void)writeToAllDevices:(id)arg1 allocateData:(BOOL)arg2 batchSize:(unsigned long long)arg3 ;
-(void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3 forConcat:(BOOL)arg4 ;
-(void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3 forConcat:(BOOL)arg4 ;
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchForwardSliceLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultStateIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 forTraining:(BOOL)arg8 ;
-(void)dispatchForwardLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultStateIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 forTraining:(BOOL)arg10 ;
-(void)dispatchForwardMHALayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
-(void)dispatchForwardReshapeLayerWithDeviceOps:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 keepsState:(BOOL)arg7 ;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5 ;
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
-(void)allocateResultTensor:(id)arg1 resultTensorIsTemporary:(BOOL)arg2 ;
-(void)freeTemporaryTensor:(id)arg1 ;
-(void)shareResultTensor:(id)arg1 sourceTensor:(id)arg2 deviceOps:(id)arg3 ;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1 ;
-(id)readFromDevice:(id)arg1 deviceIndex:(unsigned long long)arg2 allocateData:(BOOL)arg3 batchSize:(unsigned long long)arg4 ;
-(unsigned long long)deviceMemorySizeForTensor:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)writeToDevice:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)writeToDevice:(id)arg1 sourceBuffer:(void*)arg2 batchSize:(unsigned long long)arg3 ;
-(NSData *)deviceHeap;
-(void)setDeviceHeap:(NSData *)arg1 ;
@end
