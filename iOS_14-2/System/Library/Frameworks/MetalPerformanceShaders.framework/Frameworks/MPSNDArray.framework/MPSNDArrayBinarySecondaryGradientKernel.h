/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArrayMultiaryGradientKernel.h>

@interface MPSNDArrayBinarySecondaryGradientKernel : MPSNDArrayMultiaryGradientKernel
+(unsigned long long)expectedVirtualSourceCount;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5 destinationArray:(id)arg6 ;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5 ;
@end

