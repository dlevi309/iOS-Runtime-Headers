/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/

#import <MattingV2/MattingV2-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLComputePipelineState;
@class FigMetalContext, Texture2DWrapper, NSMutableDictionary, NSMutableArray, NSDictionary, ConstraintsGenerator, FocalPlaneV2, MPSImageSpatioTemporalGuidedFilter, MattingV2TuningParameters, NSArray;

@interface FigMatting : NSObject <ImageBufferProcessor> {

	FigMetalContext* _metalContext;
	Texture2DWrapper* _image;
	Texture2DWrapper* _inputDepth;
	Texture2DWrapper* _preprocessedDisparity;
	Texture2DWrapper* _preprocessedSkin;
	Texture2DWrapper* _refinedDisparityGuide;
	Texture2DWrapper* _rgbdGuide;
	NSMutableDictionary* _sourceTextures;
	NSMutableDictionary* _destinationTextures;
	NSMutableDictionary* _constraintsTextures;
	NSMutableArray* _preallocatedFaceNonSkinTextures;
	NSMutableDictionary* _faceNonSkinTextures;
	NSDictionary* _semanticConfigurations;
	ConstraintsGenerator* _constraintsGenerator;
	FocalPlaneV2* _focalPlane;
	NSMutableArray* _semanticOutputCollections;
	MPSImageSpatioTemporalGuidedFilter* _refinedDisparityFilter;
	unsigned _currentRefinementWidth;
	unsigned _currentRefinementHeight;
	unsigned _currentSegmentationWidth;
	unsigned _currentSegmentationHeight;
	unsigned _currentDisparityWidth;
	unsigned _currentDisparityHeight;
	unsigned _currentImageWidth;
	unsigned _currentImageHeight;
	MattingV2TuningParameters* _tuningParameters;
	int _disparityRefinementVersion;
	SCD_Struct_Fi4 _disparityRefinementConfig;
	unsigned long long _maximumNumberOfFacesToConsider;
	id<MTLComputePipelineState> _copyTextureKernel;
	id<MTLComputePipelineState> _bilinearScaleKernel;
	id<MTLComputePipelineState> _composeRGBAGuideKernel;
	id<MTLComputePipelineState> _addTexturesKernel;
	id<MTLComputePipelineState> _excludeNonSkinKernel;
	BOOL _isShaderHarvesting;
	int _exifOrientation;
	CVBufferRef _imagePixelBuffer;
	CVBufferRef _inputSegmentationPixelBuffer;
	CVBufferRef _inputDisparityPixelBuffer;
	CVBufferRef _inputDepthPixelBuffer;
	CVBufferRef _inputSemanticsHairPixelBuffer;
	CVBufferRef _inputSemanticsSkinPixelBuffer;
	CVBufferRef _inputSemanticsTeethPixelBuffer;
	CVBufferRef _outputRefinedDisparityPixelBuffer;
	CVBufferRef _outputMattePixelBuffer;
	CVBufferRef _outputSemanticsHairPixelBuffer;
	CVBufferRef _outputSemanticsSkinPixelBuffer;
	CVBufferRef _outputSemanticsTeethPixelBuffer;
	NSDictionary* _options;
	NSArray* _faceLandmarks;
	NSArray* _faceSegments;
	SCD_Struct_Fi5 _config;
	CGRect _syntheticFocusRectangle;

}

@property (assign,nonatomic) CVBufferRef imagePixelBuffer;                               //@synthesize imagePixelBuffer=_imagePixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSegmentationPixelBuffer;                   //@synthesize inputSegmentationPixelBuffer=_inputSegmentationPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputDisparityPixelBuffer;                      //@synthesize inputDisparityPixelBuffer=_inputDisparityPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputDepthPixelBuffer;                          //@synthesize inputDepthPixelBuffer=_inputDepthPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsHairPixelBuffer;                  //@synthesize inputSemanticsHairPixelBuffer=_inputSemanticsHairPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsSkinPixelBuffer;                  //@synthesize inputSemanticsSkinPixelBuffer=_inputSemanticsSkinPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsTeethPixelBuffer;                 //@synthesize inputSemanticsTeethPixelBuffer=_inputSemanticsTeethPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputRefinedDisparityPixelBuffer;              //@synthesize outputRefinedDisparityPixelBuffer=_outputRefinedDisparityPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputMattePixelBuffer;                         //@synthesize outputMattePixelBuffer=_outputMattePixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsHairPixelBuffer;                 //@synthesize outputSemanticsHairPixelBuffer=_outputSemanticsHairPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsSkinPixelBuffer;                 //@synthesize outputSemanticsSkinPixelBuffer=_outputSemanticsSkinPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsTeethPixelBuffer;                //@synthesize outputSemanticsTeethPixelBuffer=_outputSemanticsTeethPixelBuffer - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi5 config;                                      //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) CGRect syntheticFocusRectangle;                             //@synthesize syntheticFocusRectangle=_syntheticFocusRectangle - In the implementation block
@property (nonatomic,copy) NSArray * faceLandmarks;                                      //@synthesize faceLandmarks=_faceLandmarks - In the implementation block
@property (nonatomic,copy) NSArray * faceSegments;                                       //@synthesize faceSegments=_faceSegments - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                        //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)FigMattingOutputToShortString:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(int)finishProcessing;
-(SCD_Struct_Fi5)config;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setConfig:(SCD_Struct_Fi5)arg1 ;
-(NSArray *)faceSegments;
-(int)process;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(void)setFaceSegments:(NSArray *)arg1 ;
-(CVBufferRef)imagePixelBuffer;
-(void)setImagePixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(void)setInputSegmentationPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputDisparityPixelBuffer:(CVBufferRef)arg1 ;
-(void)setSyntheticFocusRectangle:(CGRect)arg1 ;
-(void)setFaceLandmarks:(NSArray *)arg1 ;
-(void)setOutputMattePixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputRefinedDisparityPixelBuffer:(CVBufferRef)arg1 ;
-(int)finishScheduling;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(int)resetState;
-(void)setInputSemanticsHairPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSemanticsSkinPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSemanticsTeethPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsHairPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsSkinPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsTeethPixelBuffer:(CVBufferRef)arg1 ;
-(int)purgeResources;
-(int)_compileShaders;
-(int)_allocateResources;
-(int)_prewarmMPSKernels;
-(id)_createTextureOfSize:(CGSize)arg1 withFormat:(unsigned long long)arg2 ;
-(BOOL)outputEnabled:(unsigned)arg1 ;
-(void)encodeComposeRGBAGuideToCommandBuffer:(id)arg1 rgbTexture:(id)arg2 alphaTexture:(id)arg3 destinationTexture:(id)arg4 rgbWeight:(float)arg5 ;
-(int)validateAndBindInputsAndOutputs;
-(void)encodeComposeRGBAGuideToCommandBuffer:(id)arg1 rgbTexture:(id)arg2 alphaTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeAddTexturesToCommandBuffer:(id)arg1 sourceTextureA:(id)arg2 sourceTextureB:(id)arg3 destinationTexture:(id)arg4 thresholdBeginValue:(float)arg5 thresholdEndValue:(float)arg6 ;
-(void)encodePreprocessSkinToCommandBuffer:(id)arg1 inputSkinTexture:(id)arg2 faceNonSkinTextures:(id)arg3 outputSkinTexture:(id)arg4 ;
-(id)enabledOutputArray;
-(void)isShaderHarvesting:(id)arg1 ;
-(int)processFocalPlaneAndSolverOnly;
-(CVBufferRef)inputSegmentationPixelBuffer;
-(CVBufferRef)inputDisparityPixelBuffer;
-(CVBufferRef)inputDepthPixelBuffer;
-(CVBufferRef)inputSemanticsHairPixelBuffer;
-(CVBufferRef)inputSemanticsSkinPixelBuffer;
-(CVBufferRef)inputSemanticsTeethPixelBuffer;
-(CVBufferRef)outputRefinedDisparityPixelBuffer;
-(CVBufferRef)outputMattePixelBuffer;
-(CVBufferRef)outputSemanticsHairPixelBuffer;
-(CVBufferRef)outputSemanticsSkinPixelBuffer;
-(CVBufferRef)outputSemanticsTeethPixelBuffer;
-(CGRect)syntheticFocusRectangle;
-(NSArray *)faceLandmarks;
@end

