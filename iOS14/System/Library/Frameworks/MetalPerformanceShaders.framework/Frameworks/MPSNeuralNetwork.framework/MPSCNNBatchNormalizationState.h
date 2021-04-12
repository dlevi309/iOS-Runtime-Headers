/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNBatchNormalization;

@interface MPSCNNBatchNormalizationState : MPSNNGradientState {

	MPSCNNBatchNormalization* _batchNormalization;
	unsigned long long _accumulationCount;
	unsigned long long _numberOfFeatureChannels;
	float _epsilon;

}

@property (nonatomic,retain,readonly) MPSCNNBatchNormalization * batchNormalization;              //@synthesize batchNormalization=_batchNormalization - In the implementation block
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(id)mean;
-(id)beta;
-(id)variance;
-(id)initDeferredWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(void)reset;
-(MPSCNNBatchNormalization *)batchNormalization;
-(id)gradientForGamma;
-(id)gradientForBeta;
-(id)gamma;
-(void)dealloc;
@end

