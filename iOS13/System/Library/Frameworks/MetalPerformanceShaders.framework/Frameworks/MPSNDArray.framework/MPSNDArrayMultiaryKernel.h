/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArrayMultiaryBase.h>

@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArray:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id*)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;
@end

