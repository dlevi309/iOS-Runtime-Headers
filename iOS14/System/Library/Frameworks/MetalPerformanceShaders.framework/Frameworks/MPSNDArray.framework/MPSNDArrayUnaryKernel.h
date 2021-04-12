/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayUnaryKernel : MPSNDArrayMultiaryKernel {

	unsigned long long _edgeMode;
	SCD_Struct_MP4 _offsets;
	SCD_Struct_MP5 _kernelSizes;
	SCD_Struct_MP4 _strides;
	SCD_Struct_MP5 _dilationRates;

}

@property (assign,nonatomic) SCD_Struct_MP4 offsets;                    //@synthesize offsets=_offsets - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;               //@synthesize edgeMode=_edgeMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP5 kernelSizes;                //@synthesize kernelSizes=_kernelSizes - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 strides;                    //@synthesize strides=_strides - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP5 dilationRates;              //@synthesize dilationRates=_dilationRates - In the implementation block
+(unsigned long long)expectedVirtualSourceCount;
-(id)initWithDevice:(id)arg1 ;
-(SCD_Struct_MP4)strides;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)offsets;
-(unsigned long long)edgeMode;
-(void)setStrides:(SCD_Struct_MP4)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(void)setOffsets:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP5)kernelSizes;
-(SCD_Struct_MP5)dilationRates;
-(void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 destinationArray:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 resultState:(id*)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;
-(void)setKernelSizes:(SCD_Struct_MP5)arg1 ;
-(void)setDilationRates:(SCD_Struct_MP5)arg1 ;
@end

