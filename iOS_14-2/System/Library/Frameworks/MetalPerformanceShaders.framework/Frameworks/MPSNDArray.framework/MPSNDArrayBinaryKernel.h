/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel

@property (nonatomic,readonly) SCD_Struct_MP4 primaryOffsets; 
@property (nonatomic,readonly) unsigned long long primaryEdgeMode; 
@property (nonatomic,readonly) SCD_Struct_MP5 primaryKernelSizes; 
@property (nonatomic,readonly) SCD_Struct_MP4 primaryStrides; 
@property (nonatomic,readonly) SCD_Struct_MP5 primaryDilationRates; 
@property (nonatomic,readonly) SCD_Struct_MP4 secondaryOffsets; 
@property (nonatomic,readonly) unsigned long long secondaryEdgeMode; 
@property (nonatomic,readonly) SCD_Struct_MP5 secondaryKernelSizes; 
@property (nonatomic,readonly) SCD_Struct_MP4 secondaryStrides; 
@property (nonatomic,readonly) SCD_Struct_MP5 secondaryDilationRates; 
+(unsigned long long)expectedVirtualSourceCount;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4 ;
-(unsigned long long)primaryEdgeMode;
-(unsigned long long)secondaryEdgeMode;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 ;
-(SCD_Struct_MP4)primaryOffsets;
-(SCD_Struct_MP4)secondaryOffsets;
-(SCD_Struct_MP5)primaryKernelSizes;
-(SCD_Struct_MP5)secondaryKernelSizes;
-(SCD_Struct_MP4)primaryStrides;
-(SCD_Struct_MP4)secondaryStrides;
-(SCD_Struct_MP5)primaryDilationRates;
-(SCD_Struct_MP5)secondaryDilationRates;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id*)arg4 outputStateIsTemporary:(BOOL)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id)arg4 destinationArray:(id)arg5 ;
@end

