/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryConvolutionNode.h>

@interface MPSCNNBinaryFullyConnectedNode : MPSCNNBinaryConvolutionNode
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(FilterGraphNode*)newFilterNode;
@end

