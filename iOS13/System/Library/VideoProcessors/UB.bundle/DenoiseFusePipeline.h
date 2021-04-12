/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture, MTLBuffer, SidecarWriter;
#import <UB/UB-Structs.h>
@class NSDictionary, FigMetalContext, UBConfig, DenoiseFusePipelineShaders, PyramidStage, NSMutableArray, AMBNRBuffers, WarpStage, FusionRemixStage, OutliersRemovalStage, FusionInputBands, PyramidStorage, ToneMappingStage, ToneMappingCurves, SyntheticReferenceStage, SyntheticLongStage, BilateralGrid, RegDense, ColorCubeCorrectionStage, MotionDetection, GrayGhostDetection;

@interface DenoiseFusePipeline : NSObject {

	NSDictionary* _options;
	BOOL _onlySingleImageDenoising;
	BOOL _progressiveFusionEnabled;
	BOOL _deepFusionEnabled;
	id<MTLTexture> _inputLuma[5];
	id<MTLTexture> _inputChroma[5];
	FigMetalContext* _metal;
	UBConfig* _ubConfig;
	DenoiseFusePipelineShaders* _shaders;
	id<MTLBuffer> _backingBuffer;
	int _currentFrame;
	PyramidStage* _pyramidStage;
	SCD_Struct_De18 _ambnrStageCache;
	NSMutableArray* _ambnrStages;
	AMBNRBuffers* _ambnrBuffers;
	int _fusionAlgo;
	id<MTLTexture> _simMapTex;
	id<MTLTexture> _warpedNonRefLumaTex;
	id<MTLTexture> _warpedNonRefChromaTex;
	WarpStage* _warpStage;
	FusionRemixStage* _fusionRemixStage;
	OutliersRemovalStage* _outliersRemovalStage;
	FusionInputBands* _inputBands;
	PyramidStorage* _fusedBand;
	BOOL _isStaticScene;
	ToneMappingStage* _toneMappingStage;
	ToneMappingCurves* _toneMappingCurvesUBFusion;
	ToneMappingCurves* _toneMappingCurvesSkinMapInput;
	SyntheticReferenceStage* _syntheticReferenceStage;
	SyntheticLongStage* _syntheticLongStage;
	PyramidStorage* _syntheticLongIntermediatePyramid;
	BilateralGrid* _bilateralGrid;
	RegDense* _regDense;
	id<MTLTexture> _ltmLumaTex;
	id<MTLTexture> _ltmLumaTexAsRG;
	id<MTLTexture> _ltmChromaTex;
	id<MTLTexture> _localGainMapTex;
	id<MTLTexture> _fusedResultLuma;
	id<MTLTexture> _fusedResultLumaAsRG;
	id<MTLTexture> _fusedResultChroma;
	id<MTLTexture> _noiseMapLumaTex;
	id<MTLTexture> _noiseMapChromaTex;
	id<MTLTexture> _colorCubeFixIntermediate;
	ColorCubeCorrectionStage* _ColorCubeCorrectionStage;
	unsigned long long _lastWidth;
	unsigned long long _lastHeight;
	unsigned _lastPixelFormat;
	BOOL _lastWarpedNonRefTexturesNeeded;
	CGRect _lastROI;
	int _lastFusionAlgo;
	PyramidStorage* _previousFusedBand;
	PyramidStorage* _accWeightPyramid;
	PyramidStorage* _accWeightTempPyramid;
	MotionDetection* _motionDetection;
	GrayGhostDetection* _grayGhostDetection;
	BOOL _srlEnabled;
	int _fusionReferenceFrame;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
@property (assign,nonatomic) BOOL srlEnabled;                                     //@synthesize srlEnabled=_srlEnabled - In the implementation block
@property (assign,nonatomic) int fusionReferenceFrame;                            //@synthesize fusionReferenceFrame=_fusionReferenceFrame - In the implementation block
+(int)prewarmShaders:(id)arg1 ;
+(int)calculateBackingBufferLayoutForDesc:(id)arg1 ubConfig:(id)arg2 metal:(id)arg3 layout:(SCD_Struct_De19*)arg4 ;
+(unsigned long long)calculateBackingBufferSizeForDesc:(id)arg1 ubConfig:(id)arg2 metal:(id)arg3 ;
-(void)dealloc;
-(void)reset;
-(int)setFusionMode:(int)arg1 ;
-(void)setSrlEnabled:(BOOL)arg1 ;
-(id)getAMBNRStage:(const DenoiseRemixStageOptions*)arg1 ;
-(void)releaseAllBindings;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)fillTexturePaddedArea10BitPacked:(CVBufferRef)arg1 roi:(CGRect*)arg2 fullWidth:(unsigned)arg3 fullHeight:(unsigned)arg4 ;
-(int)fillTexturePaddedArea:(id)arg1 roi:(CGRect*)arg2 ;
-(int)convertColor:(const ColorSpaceConversionParameters*)arg1 inputLuma:(id)arg2 inputChroma:(id)arg3 outputLuma:(id)arg4 outputChroma:(id)arg5 ;
-(int)denoiseFrame:(id)arg1 outputChroma:(id)arg2 inputLuma:(id)arg3 inputChroma:(id)arg4 scratchLuma:(id)arg5 scratchChroma:(id)arg6 localGainMap:(id)arg7 skinMask:(id)arg8 skinMaskExtent:(CGRect)arg9 exposure:(const exposureParameters*)arg10 staticScene:(BOOL)arg11 ubPlist:(id)arg12 isLowLight:(BOOL)arg13 ;
-(int)createPyramidForFrame:(id)arg1 cfp:(const frameProperties_t*)arg2 ;
-(int)copyTexture:(id)arg1 outTex:(id)arg2 ;
-(unsigned)filterOutlierPairsInPlace:(float*)arg1 and:(float*)arg2 withMinX:(float)arg3 maxX:(float)arg4 inputSize:(int)arg5 ;
-(int)sanityCheckRansacColorModel:(RansacModel*)arg1 ;
-(id)initWithContext:(id)arg1 ubConfig:(id)arg2 dasTuningOptions:(id)arg3 toneMappingOptions:(id)arg4 ;
-(int)bindBackingBuffer:(id)arg1 forDesc:(id)arg2 ;
-(int)fillPaddedAreaInFrame:(CVBufferRef)arg1 cfp:(frameProperties_t*)arg2 ;
-(int)denoiseSingleImage:(CVBufferRef)arg1 input:(CVBufferRef)arg2 cfp:(frameProperties_t*)arg3 ubPlist:(id)arg4 colorCubeFixType:(int)arg5 ;
-(int)baseLayer:(CVBufferRef)arg1 ;
-(int)addFrame:(CVBufferRef)arg1 cfp:(const frameProperties_t*)arg2 ;
-(int)selectUBFusionReferenceFrame:(int)arg1 ev0FrameIndex:(int)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(frameProperties_t*)arg4 ubPlist:(id)arg5 ;
-(int)ubFusionDenseRegister:(int)arg1 ev0FrameIndex:(int)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(frameProperties_t*)arg4 scratch:(CVBufferRef)arg5 ;
-(int)lowLightHybridRegister:(int)arg1 refFrameIdx:(int)arg2 nonRefFrameProps:(frameProperties_t*)arg3 refFrameProps:(const frameProperties_t*)arg4 scratch:(CVBufferRef)arg5 ubPlist:(id)arg6 alwaysDense:(BOOL)arg7 ;
-(int)toneMapBand1Frame:(id)arg1 properties:(const frameProperties_t*)arg2 sourceFrameType:(int)arg3 sourceFrameIndex:(int)arg4 ltcFrameIndex:(int)arg5 gtcFrameIndex:(int)arg6 ubPlist:(id)arg7 ;
-(int)fuseFramesWithConfig:(const FusionConfiguration*)arg1 properties:(const frameProperties_t*)arg2 ubPlist:(id)arg3 batchN:(int)arg4 isLastBatch:(BOOL)arg5 usePatchBasedFusion:(BOOL)arg6 isLowLight:(BOOL)arg7 ;
-(int)toneMapAndDenoiseFusedFramesWithConfig:(const FusionConfiguration*)arg1 properties:(const frameProperties_t*)arg2 ubPlist:(id)arg3 output:(CVBufferRef)arg4 inferenceProvider:(/*^block*/id)arg5 colorCubeFixType:(int)arg6 isLowLight:(BOOL)arg7 ;
-(int)computeMotionScore:(int)arg1 ev0FrameIndex:(int)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 motionScore:(float*)arg5 ubPlist:(id)arg6 ;
-(int)startSyntheticReferenceDetectors:(const FusionConfiguration*)arg1 properties:(const frameProperties_t*)arg2 ubPlist:(id)arg3 ;
-(int)collectSyntheticReferenceDetectorsResultsSync:(float*)arg1 srMode:(int*)arg2 ubPlist:(id)arg3 ;
-(int)doSyntheticReference:(id)arg1 noiseDivisorOutputTex:(id)arg2 lscGainsTex:(id)arg3 config:(const FusionConfiguration*)arg4 evmProperties:(const frameProperties_t*)arg5 evmGreenTintAdjustment:(SCD_Struct_De20)arg6 ev0Properties:(const frameProperties_t*)arg7 ubPlist:(id)arg8 intermediateMetadata:(id)arg9 ;
-(int)computeRansacColorMatchingCoefficients:(const FusionConfiguration*)arg1 scaleEv0brightness:(float)arg2 applyToPyramid:(BOOL)arg3 andStoreTransform:(SCD_Struct_De20*)arg4 ;
-(int)doSyntheticLong:(id)arg1 noiseDivisorTex:(id)arg2 realLongNoiseDivisorTex:(id)arg3 lscGainsTex:(id)arg4 config:(const FusionConfiguration*)arg5 properties:(const frameProperties_t*)arg6 motionScore:(float)arg7 ubPlist:(id)arg8 intermediateMetadata:(id)arg9 ;
-(int)runMotionDetectionLL:(BOOL)arg1 imgIndex:(int)arg2 imgProperties:(frameProperties_t*)arg3 refProperties:(frameProperties_t*)arg4 ;
-(int)doDeepFusionProxyAsset:(id)arg1 syntheticReference:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 inferenceResults:(id)arg5 ubPlist:(id)arg6 ;
-(int)doDeepFusionPyramidGeneration:(const FusionConfiguration*)arg1 properties:(const frameProperties_t*)arg2 syntheticReferenceFramesOnly:(BOOL)arg3 pyramidHasBeenBuiltArray:(BOOL*)arg4 ;
-(id<SidecarWriter>)sidecarWriter;
-(BOOL)srlEnabled;
-(int)fusionReferenceFrame;
-(void)setFusionReferenceFrame:(int)arg1 ;
@end

