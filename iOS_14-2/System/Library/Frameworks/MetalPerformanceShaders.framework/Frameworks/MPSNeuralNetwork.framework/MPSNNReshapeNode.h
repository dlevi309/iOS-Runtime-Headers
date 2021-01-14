/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNReshapeNode : MPSNNFilterNode {

	unsigned long long _resultWidth;
	unsigned long long _resultHeight;
	unsigned long long _resultFeatureChannels;

}
+(id)nodeWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4 ;
@end

