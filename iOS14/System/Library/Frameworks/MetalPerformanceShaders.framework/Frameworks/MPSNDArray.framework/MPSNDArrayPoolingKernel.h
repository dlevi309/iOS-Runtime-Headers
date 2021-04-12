/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArrayPoolingKernel : MPSNDArrayUnaryKernel {

	int _poolingMode;
	MPSNDArrayPoolingSizes_s _poolingKernelSizes;
	MPSNDArrayPoolingOffsets_s _poolingOffsets;
	MPSNDArrayPoolingSizes_s _poolingStrides;
	MPSNDArrayPoolingSizes_s _poolingDilationRates;

}

@property (nonatomic,readonly) MPSNDArrayPoolingSizes_s poolingKernelSizes;              //@synthesize poolingKernelSizes=_poolingKernelSizes - In the implementation block
@property (nonatomic,readonly) int poolingMode;                                          //@synthesize poolingMode=_poolingMode - In the implementation block
@property (assign,nonatomic) MPSNDArrayPoolingOffsets_s poolingOffsets;                  //@synthesize poolingOffsets=_poolingOffsets - In the implementation block
@property (assign,nonatomic) MPSNDArrayPoolingSizes_s poolingStrides;                    //@synthesize poolingStrides=_poolingStrides - In the implementation block
@property (assign,nonatomic) MPSNDArrayPoolingSizes_s poolingDilationRates;              //@synthesize poolingDilationRates=_poolingDilationRates - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)supportsGradientForSourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4 ;
-(id)initWithDevice:(id)arg1 kernelSizes:(MPSNDArrayPoolingSizes_s)arg2 poolingMode:(int)arg3 ;
-(MPSNDArrayPoolingSizes_s)poolingKernelSizes;
-(int)poolingMode;
-(MPSNDArrayPoolingOffsets_s)poolingOffsets;
-(void)setPoolingOffsets:(MPSNDArrayPoolingOffsets_s)arg1 ;
-(MPSNDArrayPoolingSizes_s)poolingStrides;
-(void)setPoolingStrides:(MPSNDArrayPoolingSizes_s)arg1 ;
-(MPSNDArrayPoolingSizes_s)poolingDilationRates;
-(void)setPoolingDilationRates:(MPSNDArrayPoolingSizes_s)arg1 ;
@end

