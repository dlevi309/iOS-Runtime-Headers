/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLTexture, SidecarWriter;
#import <UB/UB-Structs.h>
@class FigMetalContext, UBConfig, FusionRemixUniforms;

@interface FusionRemixStage : NSObject {

	FusionRemixStageUniformsIBP _arrayOfinputParams[8];
	BOOL _isFusionParamsSet;
	FigMetalContext* _metal;
	UBConfig* _ubConfig;
	FusionRemixUniforms* _uniforms[10];
	FusionRemixStageUniformsVertex _vertexUniforms;
	id<MTLComputePipelineState> _computeGrayGhostCount;
	id<MTLBuffer> _grayGhostCountBuffer;
	id<MTLComputePipelineState> _detectFlicker;
	id<MTLBuffer> _flickerCountBuffer;
	id<MTLComputePipelineState> _correctGTC;
	id<MTLTexture> _placeHolderTex;
	float _exposureEffectiveTimeSumSoFar;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(BOOL)isSupported;
+(int)prewarmShaders:(id)arg1 ;
+(id)getFragmentShader:(id)arg1 bandIndex:(int)arg2 isLuma:(BOOL)arg3 isFirstBatch:(BOOL)arg4 isLastBatch:(BOOL)arg5 usePatchBasedFusion:(BOOL)arg6 ;
-(id)initBandFusion:(id)arg1 ubConfig:(id)arg2 isPrewarm:(BOOL)arg3 ;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)correctGTC:(id)arg1 ;
-(int)selectUBFusionReferenceFrame:(id)arg1 ev0Bands:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 ubPlist:(id)arg5 outputFusionMode:(int*)arg6 staticScene:(BOOL*)arg7 motionDetection:(id)arg8 grayGhostDetection:(id)arg9 ;
-(int)prepareForFusion:(id)arg1 config:(const FusionConfiguration*)arg2 fusedPyramid:(id)arg3 properties:(const frameProperties_t*)arg4 ubPlist:(id)arg5 staticScene:(BOOL)arg6 isLowLight:(BOOL)arg7 ;
-(int)runImageFusion:(id)arg1 config:(const FusionConfiguration*)arg2 fusedPyramid:(id)arg3 prevFusedPyramid:(id)arg4 accWeightPyramid:(id)arg5 accWeightTempPyramid:(id)arg6 buffers:(id)arg7 properties:(const frameProperties_t*)arg8 ubPlist:(id)arg9 confidence:(id)arg10 batchN:(int)arg11 isLastBatch:(BOOL)arg12 usePatchBasedFusion:(BOOL)arg13 outputChromaBias:(float)arg14 ;
-(id<SidecarWriter>)sidecarWriter;
-(int)computeFusionParams:(id)arg1 properties:(const frameProperties_t*)arg2 config:(const FusionConfiguration*)arg3 fusionMode:(int)arg4 staticScene:(BOOL)arg5 isLowLight:(BOOL)arg6 ;
-(int)detectFlicker:(id)arg1 ev0Bands:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 height:(int*)arg5 ;
-(int)runFusionForBandIndex:(int)arg1 config:(const FusionConfiguration*)arg2 oldFusedUpTex:(id)arg3 oldFusedTex:(id)arg4 fusedUpTex:(id)arg5 fusedTex:(id)arg6 accWeightTex:(id)arg7 accWeightTempTex:(id)arg8 bandFusionParams:(const FusionRemixStageUniformsIBP*)arg9 fragmentBufferIndex:(int)arg10 processLuma:(BOOL)arg11 processTopBand:(BOOL)arg12 computeSpecialMap:(int)arg13 inputs:(id)arg14 simMapTex:(id)arg15 confidence:(id)arg16 noiseMap:(id)arg17 isFirstBatch:(BOOL)arg18 isLastBatch:(BOOL)arg19 usePatchBasedFusion:(BOOL)arg20 minVarWeightSum:(float)arg21 outputChromaBias:(float)arg22 ;
-(int)runStationaryFusionWithParams:(const FusionRemixStageUniformsIBP*)arg1 inputs:(id)arg2 fusedLumaTex:(id)arg3 fusedChromaTex:(id)arg4 noiseMapLumaTex:(id)arg5 noiseMapChromaTex:(id)arg6 accWeightLumaTex:(id)arg7 accWeightChromaTex:(id)arg8 tempAccWeightLumaTex:(id)arg9 tempAccWeightChromaTex:(id)arg10 batchN:(int)arg11 ;
-(int)computeGrayGhostCount:(id)arg1 ev0Bands:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 atBand:(int)arg5 ubPlist:(id)arg6 size:(int*)arg7 ;
@end

