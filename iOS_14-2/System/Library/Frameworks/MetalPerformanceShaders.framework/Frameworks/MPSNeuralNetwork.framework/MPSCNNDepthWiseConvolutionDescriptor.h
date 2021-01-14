/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionDescriptor.h>

@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor

@property (nonatomic,readonly) unsigned long long channelMultiplier; 
-(unsigned long long)channelMultiplier;
-(id)init;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 ;
-(id)debugDescription;
@end

