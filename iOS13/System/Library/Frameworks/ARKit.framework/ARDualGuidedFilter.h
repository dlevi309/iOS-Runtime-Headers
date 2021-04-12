/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture;
@class MPSImageGuidedFilter;

@interface ARDualGuidedFilter : NSObject {

	id<MTLDevice> _device;
	MPSImageGuidedFilter* _guidedFilter;
	id<MTLLibrary> _mattingLibrary;
	id<MTLComputePipelineState> _boxblurVPSO;
	id<MTLComputePipelineState> _boxblurHPSO;
	id<MTLComputePipelineState> _erodeVPSO;
	id<MTLComputePipelineState> _erodeHPSO;
	id<MTLComputePipelineState> _invertPSO;
	id<MTLComputePipelineState> _smoothCoeficients;
	id<MTLComputePipelineState> _getConfidence;
	id<MTLComputePipelineState> _combineFGBGStencil;
	unsigned long long _uncertaintyRadius;
	unsigned long long _erodeRadius;
	id<MTLTexture> _overlayCoefficentsNonBlurredBG;
	id<MTLTexture> _overlayCoefficentsNonBlurred;
	id<MTLTexture> _overlayStencilDownsampled;
	id<MTLTexture> _overlayStencilDownsampledBG;
	id<MTLTexture> _smoothedCoefficientsTextureFG;
	id<MTLTexture> _smoothedCoefficientsTextureBG;
	id<MTLTexture> _erodeIntermediate;
	id<MTLTexture> _blurIntermediate;
	id<MTLTexture> _confidenceMap;
	id<MTLTexture> _combinedFGBG;
	BOOL _usingSmoothing;
	BOOL _useSoftGuidedFilter;
	BOOL _enableDoubleMLResolutionMatting;
	unsigned _width;
	unsigned _height;
	double _epsilon;

}

@property (assign,nonatomic) unsigned long long uncertaintyRadius;              //@synthesize uncertaintyRadius=_uncertaintyRadius - In the implementation block
@property (assign,nonatomic) unsigned long long erosionRadius;                  //@synthesize erodeRadius=_erodeRadius - In the implementation block
@property (assign,nonatomic) double epsilon;                                    //@synthesize epsilon=_epsilon - In the implementation block
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
-(id)initWithDevice:(id)arg1 useSmoothing:(BOOL)arg2 ;
-(unsigned long long)uncertaintyRadius;
-(void)setUncertaintyRadius:(unsigned long long)arg1 ;
-(unsigned long long)erosionRadius;
-(void)setErosionRadius:(unsigned long long)arg1 ;
-(void)encodeDualCoefficients:(id)arg1 guide:(id)arg2 stencil:(id)arg3 coefficientsTextureFG:(id)arg4 coefficientsTextureBG:(id)arg5 ;
-(void)setupBuffersWithWidth:(unsigned)arg1 andHeight:(unsigned)arg2 ;
-(id)encodeBoxBlurToCommandBuffer:(id)arg1 input:(id)arg2 intermediate:(id)arg3 output:(id)arg4 ;
@end

