/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNBinaryArithmeticNode.h>

@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode {

	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(void)setComparisonType:(unsigned long long)arg1 ;
-(unsigned long long)comparisonType;
@end

