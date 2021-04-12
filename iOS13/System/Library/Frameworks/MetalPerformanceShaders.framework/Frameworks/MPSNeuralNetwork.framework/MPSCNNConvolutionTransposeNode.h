/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode

@property (nonatomic,readonly) MPSCNNConvolutionGradientStateNode * convolutionGradientState; 
+(id)nodeWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;
+(id)nodeWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(MPSCNNConvolutionGradientStateNode *)convolutionGradientState;
-(id)resultState;
-(id)convolutionState;
-(id)initWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;
-(id)initWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3 ;
@end

