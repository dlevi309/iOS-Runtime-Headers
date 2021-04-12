/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel

@property (assign,nonatomic) SCD_Struct_MP1 primaryOffsets; 
@property (assign,nonatomic) unsigned long long primaryEdgeMode; 
@property (assign,nonatomic) SCD_Struct_MP2 primaryKernelSizes; 
@property (assign,nonatomic) SCD_Struct_MP1 primaryStrides; 
@property (assign,nonatomic) SCD_Struct_MP2 primaryDilationRates; 
@property (assign,nonatomic) SCD_Struct_MP1 secondaryOffsets; 
@property (assign,nonatomic) unsigned long long secondaryEdgeMode; 
@property (assign,nonatomic) SCD_Struct_MP2 secondaryKernelSizes; 
@property (assign,nonatomic) SCD_Struct_MP1 secondaryStrides; 
@property (assign,nonatomic) SCD_Struct_MP2 secondaryDilationRates; 
-(id)initWithDevice:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 ;
-(void)setPrimaryEdgeMode:(unsigned long long)arg1 ;
-(unsigned long long)primaryEdgeMode;
-(void)setSecondaryEdgeMode:(unsigned long long)arg1 ;
-(unsigned long long)secondaryEdgeMode;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP1)primaryOffsets;
-(void)setPrimaryOffsets:(SCD_Struct_MP1)arg1 ;
-(SCD_Struct_MP1)secondaryOffsets;
-(void)setSecondaryOffsets:(SCD_Struct_MP1)arg1 ;
-(SCD_Struct_MP2)primaryKernelSizes;
-(void)setPrimaryKernelSizes:(SCD_Struct_MP2)arg1 ;
-(SCD_Struct_MP2)secondaryKernelSizes;
-(void)setSecondaryKernelSizes:(SCD_Struct_MP2)arg1 ;
-(SCD_Struct_MP1)primaryStrides;
-(void)setPrimaryStrides:(SCD_Struct_MP1)arg1 ;
-(SCD_Struct_MP1)secondaryStrides;
-(void)setSecondaryStrides:(SCD_Struct_MP1)arg1 ;
-(SCD_Struct_MP2)primaryDilationRates;
-(void)setPrimaryDilationRates:(SCD_Struct_MP2)arg1 ;
-(SCD_Struct_MP2)secondaryDilationRates;
-(void)setSecondaryDilationRates:(SCD_Struct_MP2)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id*)arg4 outputStateIsTemporary:(BOOL)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id)arg4 destinationArray:(id)arg5 ;
@end

