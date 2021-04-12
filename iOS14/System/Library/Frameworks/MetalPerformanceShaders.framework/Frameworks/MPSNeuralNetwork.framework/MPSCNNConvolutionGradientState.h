/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>
#import <MPSNeuralNetwork/MPSImageSizeEncodingState.h>

@protocol MTLBuffer;
@class MPSCNNConvolution, NSString;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState> {

	BOOL _initialized;
	MPSCNNConvolution* _convolution;
	id<MTLBuffer> _intermediateWeightsBuffer;
	id<MTLBuffer> _intermeidateBiasesBuffer;
	unsigned long long _numReductionBlocks;
	BOOL _needReductionInN;
	BOOL _needReductionInXY;
	unsigned _weightsLayout;
	unsigned long long _dimSizeN;

}

@property (nonatomic,readonly) unsigned long long numberOfWeightGradients; 
@property (nonatomic,readonly) unsigned long long numberOfBiasGradients; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForWeights; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBiases; 
@property (nonatomic,retain,readonly) MPSCNNConvolution * convolution;                  //@synthesize convolution=_convolution - In the implementation block
@property (nonatomic,readonly) unsigned gradientForWeightsLayout; 
@property (nonatomic,readonly) unsigned long long sourceWidth; 
@property (nonatomic,readonly) unsigned long long sourceHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(unsigned long long)numberOfWeightGradients;
-(unsigned)gradientForWeightsLayout;
-(unsigned long long)numberOfBiasGradients;
-(NSString *)debugDescription;
-(MPSCNNConvolution *)convolution;
-(unsigned long long)sourceWidth;
-(unsigned long long)sourceHeight;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(id)initWithResource:(id)arg1 weightsLayout:(unsigned)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(id<MTLBuffer>)gradientForBiases;
-(id<MTLBuffer>)gradientForWeights;
-(id)initWithResource:(id)arg1 ;
-(void)dealloc;
@end

