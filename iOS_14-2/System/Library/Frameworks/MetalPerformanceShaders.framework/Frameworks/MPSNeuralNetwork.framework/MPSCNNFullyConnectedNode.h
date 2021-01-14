/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
@end

