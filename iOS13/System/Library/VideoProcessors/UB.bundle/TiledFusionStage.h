/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState, MTLTexture, OS_dispatch_queue;
#import <UB/UB-Structs.h>
@class FigMetalContext, DeepFusionPreEspressoStage, NSString, DeepFusionPostEspressoStage, DeepFusionGaussianPyramid, DeepFusionLaplacianPyramid, NSObject;

@interface TiledFusionStage : NSObject {

	FigMetalContext* _metal;
	void* _espresso_ctx;
	DeepFusionPreEspressoStage* _preEspressoStage;
	void* _espresso_plan;
	SCD_Struct_Ti44* _espresso_net;
	NSString* _networkVersion;
	DeepFusionPostEspressoStage* _postEspresso;
	DFApplyEspressoOutputUniforms _uniforms[4];
	_IOSurface* _inputSurf[24];
	_IOSurface* _outputSurf[24];
	_CVBuffer* _inputSurfPb[24];
	_CVBuffer* _outputSurfPb[24];
	int _padding;
	unsigned _tileWidth;
	unsigned _tileHeight;
	unsigned long long tileBufferStride;
	id<MTLComputePipelineState> _kernelYUV420ToTile;
	id<MTLComputePipelineState> _kernelSyntheticLongHighlightFixYUV420ToTile;
	DeepFusionGaussianPyramid* _YUVGaussian[2][2];
	DeepFusionLaplacianPyramid* _YUVLaplacian[2][2];
	id<MTLTexture> _dfTexIn[2][4];
	id<MTLTexture> _dfTexOut[2][4];
	id<MTLTexture> _tiledOutputYUV444[2];
	id<MTLTexture> _synthRefNoisePretuning[2];
	id<MTLTexture> _synthLongNoisePretuning[2];
	NSObject*<OS_dispatch_queue> _espressoCallbackQueue;
	int _loadedEspressoModel;
	BOOL _isHarvesting;

}

@property (assign,nonatomic) BOOL isHarvesting;              //@synthesize isHarvesting=_isHarvesting - In the implementation block
-(void)dealloc;
-(int)compileShaders;
-(int)allocateResourcesUsingScratchBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 preEspressoStage:(id)arg2 ;
-(void)setIsHarvesting:(BOOL)arg1 ;
-(int)computeScratchBufferSize:(unsigned long long*)arg1 pixelFormat:(unsigned long long)arg2 ;
-(int)runWithReferenceLuma:(id)arg1 referenceChroma:(id)arg2 longLuma:(id)arg3 longChroma:(id)arg4 preFusionMap:(id)arg5 slFusionMap:(id)arg6 slQuantBounds:(NoiseDivisorQuantizationBoundaries*)arg7 longFusionMap:(id)arg8 skinMask:(id)arg9 lscGains:(id)arg10 totalGain:(float)arg11 outLuma:(id)arg12 outChroma:(id)arg13 deferredProcessingPlist:(id)arg14 lscGainGreenMax:(float)arg15 EVM_EV0_motionScore:(float)arg16 eitRatio:(float)arg17 aeShutterTimeRatio:(float)arg18 hasSIFR:(BOOL)arg19 isStationary:(BOOL)arg20 isSyntheticLongWithRealLong:(BOOL)arg21 colorCorrection:(SCD_Struct_Wa0)arg22 espressoModel:(int)arg23 noiseEstimationParams:(NoiseEstimationParameters*)arg24 sideCar:(id)arg25 ;
-(int)computeAMBNRDenoiseBoostMap:(id)arg1 longFusionMap:(id)arg2 ev0FusionMap:(id)arg3 ev0Metadata:(frameMetadata*)arg4 longMetadata:(frameMetadata*)arg5 numEV0:(int)arg6 deferredProcessingPlist:(id)arg7 espressoModel:(int)arg8 isSyntheticLongWithRealLong:(BOOL)arg9 totalGain:(float)arg10 ;
-(void)unloadEspressoNetwork;
-(int)loadEspressoNetworkFromPath:(const char*)arg1 andStoreNetwork:(SCD_Struct_Ti44*)arg2 andPlan:(void*)arg3 ;
-(int)allocateEspressoBuffers;
-(void)freeEspressoBuffers:(BOOL)arg1 ;
-(void)freeAllEspressoBuffers;
-(unsigned long long)computeTileSizeForPixelFormat:(unsigned long long)arg1 ;
-(int)_createTiledNoiseMaps:(id)arg1 referenceChroma:(id)arg2 longLuma:(id)arg3 longChroma:(id)arg4 refNoise:(id)arg5 longNoise:(id)arg6 lscGains:(id)arg7 longFusionMap:(id)arg8 realLongFusionMapTex:(id)arg9 noiseEstimationParams:(NoiseEstimationParameters*)arg10 tile:(TileBounds*)arg11 ;
-(int)maybeLoadEspressoNetwork:(int)arg1 ;
-(int)stage1GPUonTile:(TileBounds*)arg1 refLuma:(id)arg2 referenceChroma:(id)arg3 longLuma:(id)arg4 longChroma:(id)arg5 lscGains:(id)arg6 slFusionMap:(id)arg7 longFusionMap:(id)arg8 eitRatio:(float)arg9 hasSIFR:(BOOL)arg10 noiseEstimationParams:(NoiseEstimationParameters*)arg11 ;
-(int)stage2ANEonTile:(TileBounds*)arg1 ;
-(int)stage3GPUonTile:(TileBounds*)arg1 preFusionMap:(id)arg2 slFusionMap:(id)arg3 longFusionMap:(id)arg4 skinMask:(id)arg5 lscGains:(id)arg6 outLuma:(id)arg7 outChroma:(id)arg8 ;
-(BOOL)isHarvesting;
@end

