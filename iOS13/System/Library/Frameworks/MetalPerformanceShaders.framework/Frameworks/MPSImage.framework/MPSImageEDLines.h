/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageGaussianBlur, MPSImageConvolution, MPSImageAreaMax;

@interface MPSImageEDLines : MPSKernel {

	float _gaussianSigma;
	unsigned short _minLineLength;
	unsigned long long _maxLines;
	unsigned short _detailRatio;
	float _gradientThreshold;
	float _lineErrorThreshold;
	float _mergeLocalityThreshold;
	SCD_Struct_MP10 _clipRectSource;
	unsigned short _gradientNormalizationRadius;
	MPSImageGaussianBlur* gaussianBlurKernel;
	MPSImageConvolution* sobel3XHKernel;
	MPSImageConvolution* sobel3XVKernel;
	MPSImageConvolution* sobel3YVKernel;
	MPSImageConvolution* sobel3YHKernel;
	MPSImageAreaMax* gradientNormalizeAreaMaxKernel;

}

@property (assign,nonatomic) SCD_Struct_MP10 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
@property (nonatomic,readonly) float gaussianSigma;                       //@synthesize gaussianSigma=_gaussianSigma - In the implementation block
@property (assign,nonatomic) unsigned short minLineLength;                //@synthesize minLineLength=_minLineLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                 //@synthesize maxLines=_maxLines - In the implementation block
@property (assign,nonatomic) unsigned short detailRatio;                  //@synthesize detailRatio=_detailRatio - In the implementation block
@property (assign,nonatomic) float gradientThreshold;                     //@synthesize gradientThreshold=_gradientThreshold - In the implementation block
@property (assign,nonatomic) float lineErrorThreshold;                    //@synthesize lineErrorThreshold=_lineErrorThreshold - In the implementation block
@property (assign,nonatomic) float mergeLocalityThreshold;                //@synthesize mergeLocalityThreshold=_mergeLocalityThreshold - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setClipRectSource:(SCD_Struct_MP10)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)maxLines;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 gaussianSigma:(float)arg2 minLineLength:(unsigned short)arg3 maxLines:(unsigned long long)arg4 detailRatio:(unsigned short)arg5 gradientThreshold:(float)arg6 lineErrorThreshold:(float)arg7 mergeLocalityThreshold:(float)arg8 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 endpointBuffer:(id)arg4 endpointOffset:(unsigned long long)arg5 ;
-(float)gaussianSigma;
-(unsigned short)minLineLength;
-(void)setMinLineLength:(unsigned short)arg1 ;
-(unsigned short)detailRatio;
-(void)setDetailRatio:(unsigned short)arg1 ;
-(float)gradientThreshold;
-(void)setGradientThreshold:(float)arg1 ;
-(float)lineErrorThreshold;
-(void)setLineErrorThreshold:(float)arg1 ;
-(SCD_Struct_MP10)clipRectSource;
-(float)mergeLocalityThreshold;
-(void)setMergeLocalityThreshold:(float)arg1 ;
@end

