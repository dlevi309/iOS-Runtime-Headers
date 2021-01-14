/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNReduceBinary.h>

@interface MPSNNReduceFeatureChannelsAndWeightsSum : MPSNNReduceBinary

@property (nonatomic,readonly) BOOL doWeightedSumByNonZeroWeights; 
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(id)initWithDevice:(id)arg1 doWeightedSumByNonZeroWeights:(BOOL)arg2 ;
-(BOOL)doWeightedSumByNonZeroWeights;
@end

