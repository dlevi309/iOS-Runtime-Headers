/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryBase.h>

@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase {

	/*function pointer*/void* _encode;

}
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;
-(BOOL)supportsGradientForSourceIndex:(unsigned long long)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id*)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 kernelDAGObject:(id)arg5 ;
-(id)destinationGradientArrayDescriptorsForSourceArrays:(id)arg1 sourceGradient:(id)arg2 sourceState:(id)arg3 ;
-(void)encodeGradientsToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationGradients:(id)arg5 ;
-(void)encodeGradientsToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationGradients:(id)arg5 kernelDAGObject:(id)arg6 ;
-(id)encodeGradientsToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 ;
-(id)destinationGradientsSupported;
@end

