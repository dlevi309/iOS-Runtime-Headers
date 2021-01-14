/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinaryKernel.h>

@interface MPSNDArrayDepthwiseConvolutionKernel : MPSNDArrayBinaryKernel {

	MPSNDArrayConv3dOffsets_s _windowOffsets;
	MPSNDArrayConv3dSizes_s _convStrides;
	MPSNDArrayConv3dSizes_s _convDilationRates;

}

@property (assign,nonatomic) MPSNDArrayConv3dOffsets_s windowOffsets;                //@synthesize windowOffsets=_windowOffsets - In the implementation block
@property (assign,nonatomic) MPSNDArrayConv3dSizes_s convStrides;                    //@synthesize convStrides=_convStrides - In the implementation block
@property (assign,nonatomic) MPSNDArrayConv3dSizes_s convDilationRates;              //@synthesize convDilationRates=_convDilationRates - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)supportsGradientForSourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(MPSNDArrayConv3dOffsets_s)windowOffsets;
-(void)setWindowOffsets:(MPSNDArrayConv3dOffsets_s)arg1 ;
-(MPSNDArrayConv3dSizes_s)convStrides;
-(void)setConvStrides:(MPSNDArrayConv3dSizes_s)arg1 ;
-(MPSNDArrayConv3dSizes_s)convDilationRates;
-(void)setConvDilationRates:(MPSNDArrayConv3dSizes_s)arg1 ;
@end

