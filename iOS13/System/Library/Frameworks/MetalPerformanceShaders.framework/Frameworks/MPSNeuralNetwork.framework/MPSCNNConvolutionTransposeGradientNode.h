/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionGradientNode.h>

@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4 ;
@end

