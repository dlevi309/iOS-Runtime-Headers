/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryConvolution.h>

@interface MPSCNNBinaryFullyConnected : MPSCNNBinaryConvolution
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 convolutionData:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithDevice:(id)arg1 convolutionData:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned*)arg3 outputBiasTerms:(const float*)arg4 outputScaleTerms:(const float*)arg5 inputBiasTerms:(const float*)arg6 inputScaleTerms:(const float*)arg7 type:(unsigned long long)arg8 flags:(unsigned long long)arg9 ;
-(id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned*)arg3 scaleValue:(float)arg4 type:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
@end

