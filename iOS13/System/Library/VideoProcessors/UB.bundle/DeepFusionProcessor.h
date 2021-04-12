/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

#import <UB/UB-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLTexture, MTLBuffer;
@class NSMutableDictionary, FigMetalContext, NSNumber, NSString, NSDictionary, LSCGainsPlist, UBProcessorInferenceResults, PyramidStorage, ToneMappingCurves, ToneMappingStage, RegDense, TiledFusionStage, DeepFusionPreEspressoStage, AMBNRStage, SyntheticLongStage, ColorCubeCorrectionStage, DeepFusionOutput;

@interface DeepFusionProcessor : NSObject <ImageBufferProcessor> {

	NSMutableDictionary* _tuningParams;
	FigMetalContext* _metal;
	NSNumber* _sensorID;
	NSString* _portType;
	NSDictionary* _ev0MetadataDict;
	frameMetadata _ev0Metadata;
	NSDictionary* _sifrMetadataDict;
	frameMetadata _sifrMetadata;
	NSDictionary* _longMetadataDict;
	frameMetadata _longMetadata;
	float _EVM_EV0_motionScore;
	NSDictionary* _ubSyntheticLongIntermediateMetadataDict;
	NSDictionary* _ubInfoDict;
	NSMutableDictionary* _sidecar;
	LSCGainsPlist* _lscGainsPlist;
	int _applyColorCubeFixOverride;
	id<MTLTexture> _referenceLumaTex;
	id<MTLTexture> _referenceLumaTexRG;
	id<MTLTexture> _referenceChromaTex;
	id<MTLTexture> _longLumaTex;
	id<MTLTexture> _longChromaTex;
	id<MTLTexture> _referenceFusionMapTex;
	id<MTLTexture> _longFusionMapTex;
	id<MTLTexture> _longRealLongFusionMapTex;
	id<MTLTexture> _tmpFusionMapTex;
	id<MTLTexture> _colorCubeFixIntermediate;
	id<MTLBuffer> _aliasedMemory;
	id<MTLBuffer> _regDenseBuffer;
	id<MTLTexture> _tmGainTex;
	id<MTLTexture> _longWarpedLumaTex;
	id<MTLTexture> _longWarpedChromaTex;
	id<MTLTexture> _fusedLumaTex;
	id<MTLTexture> _fusedLumaTexRG;
	id<MTLTexture> _fusedChromaTex;
	id<MTLTexture> _tmLumaTex;
	id<MTLTexture> _tmLumaTexRG;
	id<MTLTexture> _tmChromaTex;
	UBProcessorInferenceResults* _inferenceResults;
	id<MTLBuffer> _tonemappingStorage;
	id<MTLTexture> _denoiseBoostMap;
	PyramidStorage* _sharpeningInPyramid;
	PyramidStorage* _sharpeningLowVarPyramid;
	PyramidStorage* _sharpeningOutPyramid;
	ToneMappingCurves* _toneMappingCurves;
	ToneMappingStage* _toneMappingStage;
	RegDense* _regDense;
	TiledFusionStage* _tiledFusionStage;
	DeepFusionFrameMeta _preEspressoMetaData;
	DeepFusionPreEspressoStage* _preEspressoStage;
	AMBNRStage* _ambnrStage;
	SyntheticLongStage* _syntheticLongStage;
	ColorCubeCorrectionStage* _ColorCubeCorrectionStage;
	BOOL _isShaderHarvesting;
	DeepFusionOutput* _output;

}

@property (nonatomic,retain) DeepFusionOutput * output;              //@synthesize output=_output - In the implementation block
-(id)init;
-(int)finishProcessing;
-(id)initWithContext:(id)arg1 ;
-(int)process;
-(DeepFusionOutput *)output;
-(void)setOutput:(DeepFusionOutput *)arg1 ;
-(int)addBuffer:(CVBufferRef)arg1 metadata:(id)arg2 type:(int)arg3 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2 ;
-(int)resetState;
-(int)setupWithOptions:(id)arg1 ;
-(int)addInferenceResults:(id)arg1 ;
-(int)purgeResources;
-(int)getTuning:(id)arg1 ;
-(id)_createBufferBackedTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 ;
-(id)_createHalfResTexture:(id)arg1 ;
-(id)_createTextureSameAs:(id)arg1 ;
-(int)_saveToYUV420To:(id)arg1 ;
@end

