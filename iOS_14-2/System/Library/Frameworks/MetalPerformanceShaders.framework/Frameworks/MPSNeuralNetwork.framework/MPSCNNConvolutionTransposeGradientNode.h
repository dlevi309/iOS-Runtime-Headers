/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionGradientNode.h>

@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
@end

