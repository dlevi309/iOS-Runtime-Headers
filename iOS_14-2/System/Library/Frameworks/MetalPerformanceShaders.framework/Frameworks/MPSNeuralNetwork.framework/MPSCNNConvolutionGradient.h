/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MTLBuffer, MPSCNNConvolutionDataSource;
@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _groups;
	unsigned long long _channelMultiplier;
	unsigned long long _gradientOption;
	id<MTLBuffer> _weights;
	BOOL _fullyConnected;
	BOOL _convolutionTranspose;
	unsigned _weightsDataType;
	unsigned _preferredWeightsDataType;
	unsigned _weightsLayout;
	id<MPSCNNConvolutionDataSource> _dataSource;
	opaque_pthread_mutex_t _lock;
	BOOL _serializeWeightsAndBiases;

}

@property (nonatomic,readonly) unsigned long long sourceGradientFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceImageFeatureChannels;                  //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                           //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long gradientOption;                                //@synthesize gradientOption=_gradientOption - In the implementation block
@property (assign,nonatomic) BOOL serializeWeightsAndBiases;                                   //@synthesize serializeWeightsAndBiases=_serializeWeightsAndBiases - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)channelMultiplier;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)groups;
-(BOOL)convolutionTranspose;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP1*)arg4 secondaryOffset:(SCD_Struct_MP1*)arg5 kernelOffset:(SCD_Struct_MP1*)arg6 ;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(void)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(void)initialize:(id)arg1 convDesc:(id)arg2 weights:(void*)arg3 dataType:(unsigned)arg4 weightsLayout:(unsigned)arg5 fullyConnected:(BOOL)arg6 convolutionTranspose:(BOOL)arg7 preferredWeightsDataType:(unsigned)arg8 ;
-(id)PeakAtWeightsWithConvolutionGradientState:(id)arg1 ;
-(unsigned)preferredWeightsDataType;
-(BOOL)filterHandlesPlugin;
-(unsigned long long)sourceGradientFeatureChannels;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 convolutionTranspose:(BOOL)arg3 ;
-(id)PeakAtWeightsWithConvolutionTransposeGradientState:(id)arg1 ;
-(unsigned long long)sourceImageFeatureChannels;
-(unsigned long long)gradientOption;
-(BOOL)serializeWeightsAndBiases;
-(void)setSerializeWeightsAndBiases:(BOOL)arg1 ;
-(id)weights;
-(unsigned)weightsDataType;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned)weightsLayout;
-(void)setGradientOption:(unsigned long long)arg1 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)dealloc;
-(id)biases;
@end

