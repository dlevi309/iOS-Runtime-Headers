/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSImageHistogram : MPSKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL useMinMaxHistogramKernel;
	SCD_Struct_MP10 _clipRectSource;
	BOOL _zeroHistogram;
	 _minPixelThresholdValue;
	unsigned long long _histogramAtomicType;

}

@property (assign,nonatomic) SCD_Struct_MP10 clipRectSource;               //@synthesize clipRectSource=_clipRectSource - In the implementation block
@property (assign,nonatomic) BOOL zeroHistogram;                           //@synthesize zeroHistogram=_zeroHistogram - In the implementation block
@property (assign,nonatomic)  minPixelThresholdValue;                      //@synthesize minPixelThresholdValue=_minPixelThresholdValue - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setClipRectSource:(SCD_Struct_MP10)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP10)clipRectSource;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(SCD_Struct_MP12)histogramInfo;
-(unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4 ;
-(void)useGlobalAtomics;
-(void)useThreadgroupAtomics;
-(BOOL)zeroHistogram;
-(void)setZeroHistogram:(BOOL)arg1 ;
-()minPixelThresholdValue;
-(void)setMinPixelThresholdValue:;
@end

