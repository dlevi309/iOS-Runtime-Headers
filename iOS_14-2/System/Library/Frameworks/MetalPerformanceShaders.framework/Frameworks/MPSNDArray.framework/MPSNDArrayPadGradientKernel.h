/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@interface MPSNDArrayPadGradientKernel : MPSNDArrayUnaryGradientKernel {

	unsigned long long _edgeMode;
	MPSNDArrayPaddingSize _paddingSize;

}

@property (nonatomic,readonly) unsigned long long edgeMode;                    //@synthesize edgeMode=_edgeMode - In the implementation block
@property (nonatomic,readonly) MPSNDArrayPaddingSize paddingSize;              //@synthesize paddingSize=_paddingSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)edgeMode;
-(MPSNDArrayPaddingSize)paddingSize;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsToBeRetained;
-(id)initWithDevice:(id)arg1 edgeMode:(unsigned long long)arg2 paddingSize:(MPSNDArrayPaddingSize)arg3 ;
@end

