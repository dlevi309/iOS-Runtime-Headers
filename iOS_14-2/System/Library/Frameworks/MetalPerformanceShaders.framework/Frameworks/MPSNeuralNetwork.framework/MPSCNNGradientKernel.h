/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel {

	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (assign,nonatomic) long long kernelOffsetX;              //@synthesize kernelOffsetX=_kernelOffsetX - In the implementation block
@property (assign,nonatomic) long long kernelOffsetY;              //@synthesize kernelOffsetY=_kernelOffsetY - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)readBinaryGradientState:(id)arg1 isSecondarySourceFilter:(BOOL)arg2 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 ;
-(void)readGradientState:(id)arg1 ;
-(BOOL)isStateModified;
-(long long)kernelOffsetY;
-(long long)kernelOffsetX;
-(void)setKernelOffsetX:(long long)arg1 ;
-(void)setKernelOffsetY:(long long)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 destinationGradients:(id)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
@end

