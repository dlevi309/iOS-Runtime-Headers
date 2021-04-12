/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNUnaryReductionNode.h>

@interface MPSNNReductionFeatureChannelsSumNode : MPSNNUnaryReductionNode {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(FilterGraphNode*)newFilterNode;
@end

