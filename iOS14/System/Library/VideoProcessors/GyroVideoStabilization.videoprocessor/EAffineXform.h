/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
*/

#import <GyroVideoStabilization.videoprocessor/GyroVideoStabilization.videoprocessor-Structs.h>
#import <GyroVideoStabilization.videoprocessor/AFilter.h>

@interface EAffineXform : AFilter {

	int _renderMethod;
	unsigned _TexMatCount;
	float* _TexMats;
	unsigned _transformRowStride;
	BOOL _renderFromTopLeft;
	int _overscanWidth;
	int _overscanHeight;
	CGSize _overscanForBlur;
	BOOL _blurEnabled;
	BOOL _blurMixEnabled;
	_CVBuffer* _blurTempBuffer[2];
	_CVBuffer* _previousBlurBuffers[3];
	int _blurNoiseRadius;
	int _blurPasses;
	int _frameCount;
	int _previousBufferIndex;
	unsigned _unsharpTexture;
	int _unsharpWidth;
	int _unsharpHeight;
	int _lastUnsharpWidth;
	int _lastUnsharpHeight;
	float _usmBlurRadius;
	float _usmBaseAmount;
	float _usmAdaptiveAmount;
	unsigned _USMv10LumaDownSampleProgram;
	unsigned _USMv10LumaSharpProgram;
	unsigned _USMv15LumaSharpProgram;
	unsigned _USMv20LumaSharpProgram;
	unsigned _AUSMLumaSharpProgram;
	unsigned _AUSMSharpLutWidth;
	unsigned _AUSMSharpLutHeight;
	float _ausmBlurRadius;
	float _ausmLowLumaDelta;
	float _ausmLowLumaDeltaBlurAmount;
	float _ausmHighLumaDelta;
	float _ausmHighLumaDeltaBlurAmount;
	unsigned _AUSMSharpLutTexture;
	unsigned _USMChromaProgram;

}
-(void)setRenderFromTopLeft:(BOOL)arg1 ;
-(void)setAdaptiveUnsharpMaskParameters:(float)arg1 lowLumaDelta:(float)arg2 lowLumaDeltaBlurAmount:(float)arg3 highLumaDelta:(float)arg4 highLumaDeltaBlurAmount:(float)arg5 ;
-(void)blurDuplicatedPixelsForLuma:(BOOL)arg1 andChroma:(BOOL)arg2 forYUVImage:(CVBufferRef)arg3 usingVertices:(float*)arg4 andMatrices:(float*)arg5 inputSize:(CGSize)arg6 forContext:(id)arg7 ;
-(id)initWithContext:(id)arg1 ;
-(void)processYUVImage:(CVBufferRef)arg1 forContext:(id)arg2 pixelBufferValidRect:(CGRect*)arg3 outputPixelBuffer:(CVBufferRef)arg4 ;
-(void)setUnsharpMaskParameters:(float)arg1 baseAmount:(float)arg2 adaptiveAmount:(float)arg3 ;
-(void)setTransform:(float)arg1 ;
-(void)setRenderMethod:(int)arg1 ;
-(void)blurDealloc;
-(void)configureP3ToBT2020conversion:(BOOL)arg1 ;
-(void)setupRenderingProgram:(unsigned)arg1 ;
-(void)setRenderMethodInternal:(int)arg1 pixelFormat:(unsigned)arg2 ;
-(void)setTransformArray:(unsigned)arg1 transforms3x3:(float*)arg2 transformRowStride:(unsigned)arg3 ;
-(void)processBGRAImage:(CVBufferRef)arg1 forContext:(id)arg2 outputBGRAPixelBuffer:(CVBufferRef)arg3 ;
-(void)setOverscan:(int)arg1 height:(int)arg2 ;
-(void)compileBlurPrograms;
-(int)renderMethod;
-(void)configureBlurWith:(SCD_Struct_af6*)arg1 ;
-(SCD_Struct_EA13)computePositionOfSwathVerticesInStabilizedImageFrom:(float*)arg1 to:(float*)arg2 usingMatrices:(float*)arg3 swathCount:(unsigned)arg4 inputSize:(CGSize)arg5 outputSize:(CGSize)arg6 insetMargin:(CGSize)arg7 ;
-(int)getBlurBuffersDecimationFactor;
-(void)processUnsharpMask:(CVBufferRef)arg1 forContext:(id)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(void)resetFirstFrameParameters;
-(BOOL)renderFromTopLeft;
-(void)dealloc;
@end

