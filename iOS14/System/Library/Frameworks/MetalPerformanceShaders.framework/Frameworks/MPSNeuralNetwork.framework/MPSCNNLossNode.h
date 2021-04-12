/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSNNLabelsNode, MPSCNNLossDescriptor;

@interface MPSCNNLossNode : MPSNNFilterNode {

	MPSNNLabelsNode* _labels;
	MPSCNNLossDescriptor* _descriptor;

}

@property (nonatomic,retain,readonly) MPSNNLabelsNode * inputLabels;              //@synthesize labels=_labels - In the implementation block
+(id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(MPSNNLabelsNode *)inputLabels;
-(id)initWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

