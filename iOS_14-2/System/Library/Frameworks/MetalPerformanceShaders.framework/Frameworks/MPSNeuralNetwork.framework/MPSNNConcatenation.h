/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNConcatenation : MPSCNNKernel
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
@end

