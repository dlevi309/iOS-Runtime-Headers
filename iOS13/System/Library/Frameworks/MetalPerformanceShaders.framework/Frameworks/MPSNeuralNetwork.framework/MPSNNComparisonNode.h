/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNBinaryArithmeticNode.h>

@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode {

	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(unsigned long long)comparisonType;
-(void)setComparisonType:(unsigned long long)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
@end

