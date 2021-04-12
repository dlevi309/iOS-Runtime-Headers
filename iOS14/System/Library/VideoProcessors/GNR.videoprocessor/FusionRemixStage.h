/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLRenderPipelineState, MTLTexture, SidecarWriter;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class FigMetalContext, FusionRemixUniforms;

@interface FusionRemixStage : NSObject {

	FusionRemixStageUniformsSBP _arrayOfinputParams[8];
	AmbnrConfiguration _oisDenoiseConf[4];
	BOOL _isOISDenoiseParamsSet;
	BOOL _isFusionParamsSet;
	FigMetalContext* _metal;
	FusionRemixUniforms* _uniforms[10];
	FusionRemixStageUniformsVertex _vertexUniforms;
	[4 _dcValue];
	CGRect _ROI;
	id<MTLComputePipelineState> _computeGrayGhostCount;
	id<MTLBuffer> _grayGhostCountBuffer;
	id<MTLComputePipelineState> _detectFlickerForHDR;
	id<MTLBuffer> _flickerCountBuffer;
	id<MTLBuffer> _blackSubBandHistogram;
	id<MTLComputePipelineState> _calculateBlackWhiteStrengthCenter;
	id<MTLBuffer> _blackWhiteStrengthCenter;
	id<MTLRenderPipelineState> _blackSubRenderPipeline;
	id<MTLComputePipelineState> _ltmApply;
	id<MTLTexture> _ltcBinsTex;
	id<MTLTexture> _ltcGTCRatioTex;
	id<MTLTexture> _ltcGTCFinalTex;
	id<MTLTexture> _simMapTex;
	id<MTLTexture> _placeHolderTex;
	float _toneMapSaturationFactor;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(BOOL)isSupported;
+(id)getFragmentShader:(id)arg1 bandIndex:(int)arg2 isLuma:(BOOL)arg3 ;
-(int)calculateBlackWhiteContrastCenter:(float)arg1 ;
-(void)computeFusionParams:(id)arg1 exposures:(exposureParameters*)arg2 config:(FusionConfiguration*)arg3 ;
-(int)estimateDCValues:(FusionConfiguration*)arg1 ambnrBuffers:(id)arg2 ;
-(int)runBandFusion:(int)arg1 config:(FusionConfiguration*)arg2 prevFusedTex:(id)arg3 outputTex:(id)arg4 bandFusionParams:(FusionRemixStageUniformsSBP*)arg5 fragmentBufferIndex:(int)arg6 processLuma:(BOOL)arg7 processTopBand:(BOOL)arg8 computeSpecialMap:(int)arg9 hdrFusionMode:(int)arg10 ambnrBuffers:(id)arg11 simMapTex:(id)arg12 toneMapTex:(id)arg13 mismatchCoef:(float)arg14 confidence:(id)arg15 staticOIS:(BOOL)arg16 reduceOisGhosting:(BOOL)arg17 ;
-(int)detectFlickerForHDR:(id)arg1 config:(FusionConfiguration*)arg2 exposures:(exposureParameters*)arg3 tuningParams:(id)arg4 height:(int*)arg5 ;
-(int)computeGrayGhostCount:(id)arg1 atBand:(int)arg2 config:(FusionConfiguration*)arg3 exposures:(exposureParameters*)arg4 tuningParams:(id)arg5 size:(int*)arg6 ;
-(int)computeMismatchCoef:(CVBufferRef)arg1 morphologyBuffer:(char*)arg2 gain:(float)arg3 mismatchCoef:(float*)arg4 config:(FusionConfiguration*)arg5 ;
-(int)performLTM:(id)arg1 bufferOffset:(unsigned long long)arg2 chromaTex:(id)arg3 outChromaTex:(id)arg4 bilateralGrid:(id)arg5 detailEnhance:(SCD_Struct_Re0)arg6 ;
-(int)performBlackSubtractionWithBlackWhiteParams:(float)arg1 maxContrastStrength:(id)arg2 tmpTex:(id)arg3 ;
-(id)initBandFusion:(id)arg1 ;
-(void)setOISDenoiseConf:(AmbnrConfiguration*)arg1 ;
-(void)setArrayOfInputParams:(FusionRemixStageUniformsSBP*)arg1 ;
-(void)setROI:(CGRect)arg1 ;
-(int)prepareForFusion:(id)arg1 config:(FusionConfiguration*)arg2 fusedPyramid:(id)arg3 preAllocatedBuffers:(id)arg4 exposures:(exposureParameters*)arg5 tuningParams:(id)arg6 ;
-(int)selectOisFusionMode:(id)arg1 config:(FusionConfiguration*)arg2 exposures:(exposureParameters*)arg3 tuningParams:(id)arg4 outputFusionMode:(int*)arg5 ;
-(int)selectHdrFusionReferenceFrame:(id)arg1 config:(FusionConfiguration*)arg2 exposures:(exposureParameters*)arg3 tuningParams:(id)arg4 outputFusionMode:(int*)arg5 ;
-(int)runImageFusion:(id)arg1 config:(FusionConfiguration*)arg2 fusedPyramid:(id)arg3 fusedDenoisedPyramid:(id)arg4 preAllocatedBuffers:(id)arg5 denoiser:(id)arg6 bilateralGrid:(id)arg7 exposures:(exposureParameters*)arg8 tuningParams:(id)arg9 confidence:(id)arg10 hdrFusionMode:(int)arg11 oisFusionMode:(int)arg12 ;
-(void)setToneCurvesWithLtmEVM:(ltmCurves*)arg1 ltmEv0:(ltmCurves*)arg2 ;
-(id<SidecarWriter>)sidecarWriter;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
@end

