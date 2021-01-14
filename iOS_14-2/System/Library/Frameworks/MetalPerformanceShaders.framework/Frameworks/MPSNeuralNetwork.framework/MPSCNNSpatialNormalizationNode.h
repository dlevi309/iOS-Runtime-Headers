/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
@end

