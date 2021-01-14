/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinaryPrimaryGradientKernel.h>

@interface MPSNDArrayGatherGradient : MPSNDArrayBinaryPrimaryGradientKernel
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5 destinationArray:(id)arg6 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
@end

