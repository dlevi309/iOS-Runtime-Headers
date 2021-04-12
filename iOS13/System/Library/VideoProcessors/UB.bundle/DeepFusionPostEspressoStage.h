/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class FigMetalContext, PostEspressoShaders, NSMutableArray;

@interface DeepFusionPostEspressoStage : NSObject {

	FigMetalContext* _metal;
	PostEspressoShaders* _shaders;
	NSMutableArray* _yinfTextures[2];
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _pixelFormat;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(void)purgeResources;
-(int)_bindBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(int)allocateResourcesUsingScratchBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)computeScratchBufferSize;
-(int)_validateInputsForTile:(TileBounds*)arg1 espressoOutputTextureArray:(id)arg2 inRefGaussianArray:(id)arg3 inSLGaussianArray:(id)arg4 inRefLaplacianArray:(id)arg5 inSLLaplacianArray:(id)arg6 slFusionMap:(id)arg7 longFusionMap:(id)arg8 prefusionWeightsTexture:(id)arg9 skinMaskTexture:(id)arg10 finalOutputTexture:(id)arg11 lscGains:(id)arg12 refNoisePretuning:(id)arg13 ;
-(int)_collapseWeightsOnTile:(id)arg1 inoutTexNSArray:(id)arg2 ;
-(int)_deghostAndDenoise:(id)arg1 uniforms:(DFApplyEspressoOutputUniforms*)arg2 inTexEspressoWeights:(id)arg3 inRefLaplacian:(id)arg4 inSynthLongLaplacian:(id)arg5 inRefGaussian:(id)arg6 inSynthLongGaussian:(id)arg7 refNoisePretuning:(id)arg8 LSCGains:(id)arg9 inTexPrevLevel:(id)arg10 ;
-(int)_computeTextureness:(id)arg1 applyUniforms:(DFApplyEspressoOutputUniforms*)arg2 inputTexture:(id)arg3 outputTexture:(id)arg4 lscGainsTex:(id)arg5 ;
-(int)_applyEspressoOutputToLevel:(id)arg1 uniforms:(DFApplyEspressoOutputUniforms*)arg2 inRefGaussian:(id)arg3 slFusionMap:(id)arg4 longFusionMap:(id)arg5 prefusionWeightsTexture:(id)arg6 inTexArray:(id)arg7 skinMaskTexture:(id)arg8 deghostedAndDenoisedAndTextureness:(id)arg9 outTex:(id)arg10 tile:(TileBounds*)arg11 ;
-(int)_addPreviousLevel:(id)arg1 inoutTex:(id)arg2 inTexPrevLevel:(id)arg3 writeOffset:(DFApplyEspressoOutputUniforms*)arg4 ;
-(int)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2 andPixelFormat:(unsigned long long)arg3 ;
-(int)applyWeightsOnTile:(id)arg1 uniforms:(DFApplyEspressoOutputUniforms*)arg2 espressoOutputTextureArray:(id)arg3 inRefGaussianArray:(id)arg4 inSLGaussianArray:(id)arg5 inRefLaplacianArray:(id)arg6 inSLLaplacianArray:(id)arg7 slFusionMap:(id)arg8 longFusionMap:(id)arg9 prefusionWeightsTexture:(id)arg10 skinMaskTexture:(id)arg11 lscGains:(id)arg12 refNoisePretuning:(id)arg13 tile:(TileBounds*)arg14 finalOutputTexture:(id)arg15 ;
-(int)convert444to420:(id)arg1 input444:(id)arg2 outputLuma:(id)arg3 outputChroma:(id)arg4 outputOffset:(TileBounds*)arg5 ;
-(int)createShaderUniforms:(id)arg1 totalGain:(float)arg2 EVM_EV0_motionScore:(float)arg3 lscGainGreenMax:(float)arg4 slQuantBounds:(NoiseDivisorQuantizationBoundaries)arg5 espressoModel:(int)arg6 fullSize:(DFApplyEspressoOutputUniforms*)arg7 uniforms:(BOOL)arg8 hasLong:(BOOL)arg9 hasSIFR:(BOOL)arg10 isStationary:(BOOL)arg11 isSyntheticLongWithRealLong:(float)arg12 aeShutterTimeRatio:(SCD_Struct_Wa0)arg13 colorCorrection:(SCD_Struct_Wa0)arg14 ;
-(int)computeAMBNRDenoiseBoostMap:(id)arg1 boostMap:(id)arg2 longFusionMap:(id)arg3 ev0FusionMap:(id)arg4 ev0Metadata:(frameMetadata*)arg5 longMetadata:(frameMetadata*)arg6 numEV0:(int)arg7 ev0FusionTarget:(float)arg8 longFusionTarget:(float)arg9 ;
@end

