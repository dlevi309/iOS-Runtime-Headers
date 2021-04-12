/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class MPSNNNeuronDescriptor;

@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode {

	MPSNNNeuronDescriptor* _descriptor;

}

@property (nonatomic,readonly) MPSNNNeuronDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4 ;
-(void)dealloc;
-(MPSNNNeuronDescriptor *)descriptor;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
@end

