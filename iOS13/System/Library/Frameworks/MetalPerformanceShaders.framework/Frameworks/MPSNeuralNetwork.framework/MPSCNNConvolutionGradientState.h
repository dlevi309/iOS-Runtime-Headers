/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) unsigned long long numberOfWeightGradients; 
@property (nonatomic,readonly) unsigned long long numberOfBiasGradients; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForWeights; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBiases; 
@property (nonatomic,retain,readonly) MPSCNNConvolution * convolution;                  //@synthesize convolution=_convolution - In the implementation block
@property (nonatomic,readonly) unsigned gradientForWeightsLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long sourceWidth; 
@property (nonatomic,readonly) unsigned long long sourceHeight; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)sourceHeight;
-(unsigned long long)sourceWidth;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(MPSCNNConvolution *)convolution;
-(id)initWithResource:(id)arg1 weightsLayout:(unsigned)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(id<MTLBuffer>)gradientForWeights;
-(id<MTLBuffer>)gradientForBiases;
-(unsigned long long)numberOfWeightGradients;
-(unsigned)gradientForWeightsLayout;
-(unsigned long long)numberOfBiasGradients;
@end

