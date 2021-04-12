/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNConvolution;

@interface MPSCNNConvolutionTranspose : MPSCNNKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _featureChannelsLayout;
	long long _kernelOffsetX;
	long long _kernelOffsetY;
	unsigned long long _groups;
	MPSCNNConvolution* _convolution;
	NeuronInfo _neuronInfo;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;                       //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long weightsBufferLength; 
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                        //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;                       //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) long long kernelOffsetX;                                          //@synthesize kernelOffsetX=_kernelOffsetX - In the implementation block
@property (assign,nonatomic) long long kernelOffsetY;                                          //@synthesize kernelOffsetY=_kernelOffsetY - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorPrecisionOption; 
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource; 
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)groups;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)featureChannelsLayout;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(long long)kernelOffsetX;
-(void)setKernelOffsetX:(long long)arg1 ;
-(long long)kernelOffsetY;
-(void)setKernelOffsetY:(long long)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(unsigned long long)weightsBufferLength;
-(unsigned long long)accumulatorPrecisionOption;
-(void)setAccumulatorPrecisionOption:(unsigned long long)arg1 ;
-(id)initialize:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 ;
-(id)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(id)exportWeightsAndBiasesWithCommandBuffer:(id)arg1 resultStateCanBeTemporary:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionState:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 convolutionGradientStates:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 convolutionGradientStates:(id)arg3 destinationImages:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 destinationState:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 convolutionGradientStates:(id)arg3 destinationStates:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(void)reloadWeightsAndBiasesWithDataSource:(id)arg1 ;
-(BOOL)appendBatchBarrier;
@end

