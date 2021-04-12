/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSCNNConvolutionGradient;

@interface MPSCNNConvolutionTransposeGradient : MPSCNNGradientKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _groups;
	unsigned long long _gradientOption;
	MPSCNNConvolutionGradient* _convolutionGradient;

}

@property (nonatomic,readonly) unsigned long long sourceGradientFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceImageFeatureChannels;                  //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource; 
@property (assign,nonatomic) unsigned long long gradientOption;                                //@synthesize gradientOption=_gradientOption - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)PeakAtWeights:(id)arg1 ;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)groups;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(BOOL)filterHandlesPlugin;
-(unsigned long long)sourceGradientFeatureChannels;
-(unsigned long long)sourceImageFeatureChannels;
-(unsigned long long)gradientOption;
-(id)weights;
-(void)setGradientOption:(unsigned long long)arg1 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)dealloc;
-(id)biases;
@end

