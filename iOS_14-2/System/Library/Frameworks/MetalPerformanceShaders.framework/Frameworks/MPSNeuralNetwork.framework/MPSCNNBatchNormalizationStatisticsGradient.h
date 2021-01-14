/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MTLBuffer;
@class MPSNNNeuronDescriptor;

@interface MPSCNNBatchNormalizationStatisticsGradient : MPSCNNGradientKernel {

	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	id<MTLBuffer> _preluBuffer;

}
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 fusedNeuronDescriptor:(id)arg2 ;
-(BOOL)accumulatesOverBatch;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 batchNormalizationState:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 destinationGradients:(id)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(void)dealloc;
@end

