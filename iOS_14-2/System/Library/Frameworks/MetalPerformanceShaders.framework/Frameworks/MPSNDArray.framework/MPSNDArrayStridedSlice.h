/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArrayStridedSlice : MPSNDArrayUnaryKernel {

	SCD_Struct_MP4 _strides;

}

@property (assign,nonatomic) SCD_Struct_MP4 strides;              //@synthesize strides=_strides - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(SCD_Struct_MP4)strides;
-(void)setStrides:(SCD_Struct_MP4)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(2)stridesAtSourceIndex:(unsigned long long)arg1 ;
@end

