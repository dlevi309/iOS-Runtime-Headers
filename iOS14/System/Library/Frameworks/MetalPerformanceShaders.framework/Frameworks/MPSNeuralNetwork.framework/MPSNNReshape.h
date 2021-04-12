/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNReshape : MPSCNNKernel {

	unsigned long long _reshapedWidth;
	unsigned long long _reshapedHeight;
	unsigned long long _reshapedFeatureChannels;

}
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 reshapedWidth:(unsigned long long)arg3 reshapedHeight:(unsigned long long)arg4 reshapedFeatureChannels:(unsigned long long)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 reshapedWidth:(unsigned long long)arg5 reshapedHeight:(unsigned long long)arg6 reshapedFeatureChannels:(unsigned long long)arg7 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 reshapedWidth:(unsigned long long)arg3 reshapedHeight:(unsigned long long)arg4 reshapedFeatureChannels:(unsigned long long)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 reshapedWidth:(unsigned long long)arg5 reshapedHeight:(unsigned long long)arg6 reshapedFeatureChannels:(unsigned long long)arg7 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
@end

