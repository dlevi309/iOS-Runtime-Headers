/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionGradient.h>

@interface MPSCNNFullyConnectedGradient : MPSCNNConvolutionGradient
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 convolutionTranspose:(BOOL)arg3 ;
-(void)dealloc;
@end

