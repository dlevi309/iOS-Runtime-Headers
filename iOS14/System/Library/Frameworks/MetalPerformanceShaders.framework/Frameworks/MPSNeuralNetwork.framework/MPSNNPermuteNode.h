/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNPermuteNode : MPSNNFilterNode {

	MPSNNDimensionOrder _order;

}
+(id)nodeWithSource:(id)arg1 dimensionOrder:(MPSNNDimensionOrder)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 dimensionOrder:(MPSNNDimensionOrder)arg2 ;
@end

