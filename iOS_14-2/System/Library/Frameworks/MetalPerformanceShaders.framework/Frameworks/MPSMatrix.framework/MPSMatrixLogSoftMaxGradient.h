/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixSoftMaxGradient.h>

@interface MPSMatrixLogSoftMaxGradient : MPSMatrixSoftMaxGradient
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4 ;
@end

