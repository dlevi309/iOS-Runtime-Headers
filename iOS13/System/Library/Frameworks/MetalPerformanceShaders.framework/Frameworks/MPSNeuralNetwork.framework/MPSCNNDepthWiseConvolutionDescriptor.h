/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionDescriptor.h>

@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor

@property (nonatomic,readonly) unsigned long long channelMultiplier; 
-(id)init;
-(id)debugDescription;
-(unsigned long long)channelMultiplier;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 ;
@end

