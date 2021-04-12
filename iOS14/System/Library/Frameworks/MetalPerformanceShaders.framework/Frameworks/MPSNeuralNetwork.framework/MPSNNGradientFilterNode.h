/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNGradientFilterNode : MPSNNFilterNode
-(id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 gradientState:(id)arg3 paddingPolicy:(id)arg4 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 binaryGradientState:(id)arg3 paddingPolicy:(id)arg4 ;
-(id)resultStates;
-(id)resultState;
@end

