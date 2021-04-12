/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@protocol MLComputeEngineOptimizerUpdate <NSObject>
@required
-(void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(BOOL)arg3;
-(void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2;
-(void)setOptimizerTimeStep:(id)arg1 timeStep:(unsigned long long)arg2;
-(void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2;
-(void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
-(void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
-(void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 meanTensor:(id)arg5 varianceTensor:(id)arg6;
-(void)updateInstanceNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
-(void)updateLayerNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
-(void)updateGroupNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
-(void)updateRNNLayer:(id)arg1 optimizer:(id)arg2 inputWeightsParameter:(id)arg3 hiddenWeightsParameter:(id)arg4 biasesParameter:(id)arg5;
-(void)updateMultiheadAttentionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
-(void)updateEmbeddingLayer:(id)arg1 weightsParameter:(id)arg2 optimizer:(id)arg3;
-(void)updateTensorParameter:(id)arg1 optimizer:(id)arg2 gradient:(id)arg3;
-(void)synchronizeUpdatesForLayer:(id)arg1;
-(void)synchronizeOptimizerUpdatesForTensor:(id)arg1;
-(void)convertUpdatesToTensorDataForLayer:(id)arg1;
-(void)convertUpdatesToTensorDataForTensorParameters:(id)arg1;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1;

@end

