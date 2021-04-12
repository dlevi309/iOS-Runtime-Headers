/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPSNNNeuronDescriptor *)descriptor;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4 ;
-(void)dealloc;
@end

