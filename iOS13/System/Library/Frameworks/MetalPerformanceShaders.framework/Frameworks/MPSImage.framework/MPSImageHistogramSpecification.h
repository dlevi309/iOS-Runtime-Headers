/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL optimized256BinsUseCase;
	id<MTLBuffer> specificationBuffer;
	BOOL encodeTransform;

}

@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(SCD_Struct_MP12)histogramInfo;
-(void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned long long)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned long long)arg6 ;
@end

