/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode {

	unsigned long long _kernelSizeInFeatureChannels;

}

@property (assign,nonatomic) unsigned long long kernelSizeInFeatureChannels;              //@synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(void)setKernelSizeInFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)kernelSizeInFeatureChannels;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
@end

