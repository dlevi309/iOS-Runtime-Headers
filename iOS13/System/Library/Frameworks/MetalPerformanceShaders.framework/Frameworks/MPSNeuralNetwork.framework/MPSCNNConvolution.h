/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer, MPSCNNConvolutionDataSource;
@class MPSCNNNeuron, NSData, MPSNNNeuronDescriptor;

@interface MPSCNNConvolution : MPSCNNKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _layout;
	unsigned long long _groups;
	MPSCNNNeuron* _neuron_deprecated;
	id<MTLBuffer> _weights;
	id<MTLBuffer> _bias;
	unsigned long long _flags;
	BOOL _fullyConnected;
	BOOL _convolutionTranspose;
	id<MTLBuffer> _qWts;
	int _qType;
	NeuronInfo _neuronInfo;
	unsigned long long _scaleFactor;
	unsigned long long _channelMultiplier;
	unsigned _weightsDataType;
	unsigned _weightsLayout;
	NSData* _biasOriginal;
	id<MTLBuffer> _neuronABuffer;
	unsigned long long _accumulatorPrecisionOption;
	id<MPSCNNConvolutionDataSource> _dataSource;
	NSData* _batchNormalizationData;
	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	unsigned long long _featureChannelsLayout;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;                       //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long weightsBufferLength; 
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                        //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;                       //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long subPixelScaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) MPSCNNNeuron * neuron;                                          //@synthesize neuron_deprecated=_neuron_deprecated - In the implementation block
@property (nonatomic,readonly) int neuronType; 
@property (nonatomic,readonly) float neuronParameterA; 
@property (nonatomic,readonly) float neuronParameterB; 
@property (nonatomic,readonly) float neuronParameterC; 
@property (nonatomic,readonly) MPSNNNeuronDescriptor * fusedNeuronDescriptor;                  //@synthesize fusedNeuronDescriptor=_fusedNeuronDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                           //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorPrecisionOption; 
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)weights;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned)weightsLayout;
-(int)neuronType;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)groups;
-(id)biases;
-(unsigned long long)maxBatchSize;
-(MPSNNNeuronDescriptor *)fusedNeuronDescriptor;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)featureChannelsLayout;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(NeuronInfo)neuronInfo;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(BOOL)convolutionTranspose;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(unsigned long long)channelMultiplier;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(unsigned long long)weightsBufferLength;
-(unsigned long long)accumulatorPrecisionOption;
-(void)setAccumulatorPrecisionOption:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 convolutionTranspose:(BOOL)arg7 ;
-(id)neuronABuffer;
-(int)quantizationType;
-(id)quantizationBuffer;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 kernelOffset:(SCD_Struct_MP11*)arg5 ;
-(id)resourceListForSourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(id)exportWeightsAndBiasesWithCommandBuffer:(id)arg1 resultStateCanBeTemporary:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 ;
-(void)reloadWeightsAndBiasesWithDataSource:(id)arg1 ;
-(BOOL)appendBatchBarrier;
-(unsigned long long)subPixelScaleFactor;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 ;
-(MPSCNNNeuron *)neuron;
-(BOOL)PrepareAndLoadData:(id)arg1 dataType:(unsigned)arg2 weightsLayout:(unsigned)arg3 weights:(const void*)arg4 biases:(const float*)arg5 quantizationType:(int)arg6 ranges:(const 5*)arg7 lookUpTable:(const float*)arg8 ;
-(BOOL)initialize:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const void*)arg3 dataType:(unsigned)arg4 weightsLayout:(unsigned)arg5 range:(const 4*)arg6 lookUpTable:(const float*)arg7 qType:(int)arg8 biasTerms:(const float*)arg9 flags:(unsigned long long)arg10 fullyConnected:(BOOL)arg11 convolutionTranspose:(BOOL)arg12 ;
-(id)initializeWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 state:(id*)arg4 ;
@end
