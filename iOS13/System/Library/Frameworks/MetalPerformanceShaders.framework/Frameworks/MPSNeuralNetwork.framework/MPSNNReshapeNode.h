/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

