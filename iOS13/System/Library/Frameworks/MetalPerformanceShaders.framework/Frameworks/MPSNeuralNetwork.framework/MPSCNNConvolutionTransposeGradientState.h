/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientState.h>

@class MPSCNNConvolutionTranspose, MPSCNNConvolutionGradientState;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState {

	MPSCNNConvolutionTranspose* _convolutionTranspose;
	MPSCNNConvolutionGradientState* _convolutionGradientState;
	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (nonatomic,readonly) MPSCNNConvolutionGradientState * convolutionGradientState;              //@synthesize convolutionGradientState=_convolutionGradientState - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNConvolutionTranspose * convolutionTranspose;               //@synthesize convolutionTranspose=_convolutionTranspose - In the implementation block
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned)arg5 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)sourceHeight;
-(unsigned long long)sourceWidth;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(id)convolution;
-(MPSCNNConvolutionTranspose *)convolutionTranspose;
-(id)initWithResource:(id)arg1 weightsLayout:(unsigned)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned)arg5 ;
-(MPSCNNConvolutionGradientState *)convolutionGradientState;
@end

