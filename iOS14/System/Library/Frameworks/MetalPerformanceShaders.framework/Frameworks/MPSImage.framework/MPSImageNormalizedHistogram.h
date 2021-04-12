/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageStatisticsMinAndMax;

@interface MPSImageNormalizedHistogram : MPSKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL useMinMaxHistogramKernel;
	SCD_Struct_MP10 _clipRectSource;
	BOOL _zeroHistogram;
	MPSImageStatisticsMinAndMax* _minmaxFilter;

}

@property (assign,nonatomic) SCD_Struct_MP10 clipRectSource;               //@synthesize clipRectSource=_clipRectSource - In the implementation block
@property (assign,nonatomic) BOOL zeroHistogram;                           //@synthesize zeroHistogram=_zeroHistogram - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setClipRectSource:(SCD_Struct_MP10)arg1 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1 ;
-(SCD_Struct_MP10)clipRectSource;
-(void)dealloc;
-(SCD_Struct_MP12)histogramInfo;
-(BOOL)zeroHistogram;
-(void)setZeroHistogram:(BOOL)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 minmaxTexture:(id)arg3 histogram:(id)arg4 histogramOffset:(unsigned long long)arg5 ;
@end

