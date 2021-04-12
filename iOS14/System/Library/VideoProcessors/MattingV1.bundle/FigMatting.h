/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/

#import <MattingV1/MattingV1-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MattingFilter, MTLTexture, MTLComputePipelineState;
@class NSDictionary, FigMetalContext, FocalPlane, FocalPlaneRestriction, MattingSolver, MPSImageBilinearScale, MattingTuningParameters, NSArray, NSString;

@interface FigMatting : NSObject <ImageBufferProcessor> {

	FigMetalContext* _metalContext;
	id<MattingFilter> _mattingFilter1;
	id<MattingFilter> _mattingFilter2;
	FocalPlane* _focalPlane;
	FocalPlaneRestriction* _focalPlaneRestriction;
	MattingSolver* _mattingSolver;
	MattingSolver* _disparitySolver;
	id<MTLTexture> _inputBGRA;
	id<MTLTexture> _inputBGRABilinearDownsampledToSegmentationAndConstraintsRes;
	id<MTLTexture> _inputDisparity;
	id<MTLTexture> _inputSegmentation;
	id<MTLTexture> _outputRefinedDisparity;
	id<MTLTexture> _outputMatte;
	id<MTLTexture> _inputDepth;
	id<MTLTexture> _solverConstraints;
	id<MTLTexture> _refinedSegmentation;
	id<MTLTexture> _refinedDisparity;
	id<MTLComputePipelineState> _copyTextureKernel;
	MPSImageBilinearScale* _bilinearScale;
	unsigned _currentRefinementWidth;
	unsigned _currentRefinementHeight;
	unsigned _currentSegmentationWidth;
	unsigned _currentSegmentationHeight;
	unsigned _currentDisparityWidth;
	unsigned _currentDisparityHeight;
	unsigned _currentImageWidth;
	unsigned _currentImageHeight;
	MattingTuningParameters* _mattingTuningParameters;
	int _disparityRefinementVersion;
	SCD_Struct_Fi8 _disparityRefinementConfig;
	int _exifOrientation;
	NSDictionary* _tuningParameters;
	NSDictionary* _cameraInfoByPortType;
	CVBufferRef _imagePixelBuffer;
	CVBufferRef _inputSegmentationPixelBuffer;
	CVBufferRef _inputDisparityPixelBuffer;
	CVBufferRef _inputDepthPixelBuffer;
	CVBufferRef _inputSemanticsHairPixelBuffer;
	CVBufferRef _inputSemanticsSkinPixelBuffer;
	CVBufferRef _inputSemanticsTeethPixelBuffer;
	CVBufferRef _inputSemanticsGlassesPixelBuffer;
	CVBufferRef _inputSemanticsSkyPixelBuffer;
	CVBufferRef _outputRefinedDisparityPixelBuffer;
	CVBufferRef _outputMattePixelBuffer;
	CVBufferRef _outputSemanticsHairPixelBuffer;
	CVBufferRef _outputSemanticsSkinPixelBuffer;
	CVBufferRef _outputSemanticsTeethPixelBuffer;
	CVBufferRef _outputSemanticsGlassesPixelBuffer;
	CVBufferRef _outputSemanticsSkyPixelBuffer;
	NSDictionary* _options;
	NSArray* _faceLandmarks;
	NSArray* _faceSegments;
	SCD_Struct_Fi9 _config;
	CGRect _syntheticFocusRectangle;

}

@property (assign,nonatomic) CVBufferRef imagePixelBuffer;                               //@synthesize imagePixelBuffer=_imagePixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSegmentationPixelBuffer;                   //@synthesize inputSegmentationPixelBuffer=_inputSegmentationPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputDisparityPixelBuffer;                      //@synthesize inputDisparityPixelBuffer=_inputDisparityPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputDepthPixelBuffer;                          //@synthesize inputDepthPixelBuffer=_inputDepthPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsHairPixelBuffer;                  //@synthesize inputSemanticsHairPixelBuffer=_inputSemanticsHairPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsSkinPixelBuffer;                  //@synthesize inputSemanticsSkinPixelBuffer=_inputSemanticsSkinPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsTeethPixelBuffer;                 //@synthesize inputSemanticsTeethPixelBuffer=_inputSemanticsTeethPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsGlassesPixelBuffer;               //@synthesize inputSemanticsGlassesPixelBuffer=_inputSemanticsGlassesPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef inputSemanticsSkyPixelBuffer;                   //@synthesize inputSemanticsSkyPixelBuffer=_inputSemanticsSkyPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputRefinedDisparityPixelBuffer;              //@synthesize outputRefinedDisparityPixelBuffer=_outputRefinedDisparityPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputMattePixelBuffer;                         //@synthesize outputMattePixelBuffer=_outputMattePixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsHairPixelBuffer;                 //@synthesize outputSemanticsHairPixelBuffer=_outputSemanticsHairPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsSkinPixelBuffer;                 //@synthesize outputSemanticsSkinPixelBuffer=_outputSemanticsSkinPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsTeethPixelBuffer;                //@synthesize outputSemanticsTeethPixelBuffer=_outputSemanticsTeethPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsGlassesPixelBuffer;              //@synthesize outputSemanticsGlassesPixelBuffer=_outputSemanticsGlassesPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputSemanticsSkyPixelBuffer;                  //@synthesize outputSemanticsSkyPixelBuffer=_outputSemanticsSkyPixelBuffer - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi9 config;                                      //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) CGRect syntheticFocusRectangle;                             //@synthesize syntheticFocusRectangle=_syntheticFocusRectangle - In the implementation block
@property (nonatomic,copy) NSArray * faceLandmarks;                                      //@synthesize faceLandmarks=_faceLandmarks - In the implementation block
@property (nonatomic,copy) NSArray * faceSegments;                                       //@synthesize faceSegments=_faceSegments - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                        //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,retain) NSDictionary * tuningParameters;                            //@synthesize tuningParameters=_tuningParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                        //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)FigMattingOutputToShortString:(unsigned)arg1 ;
-(int)process;
-(SCD_Struct_Fi9)config;
-(int)prewarm;
-(int)setup;
-(id)init;
-(int)purgeResources;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(void)setFaceLandmarks:(NSArray *)arg1 ;
-(NSDictionary *)options;
-(NSDictionary *)tuningParameters;
-(void)setOptions:(NSDictionary *)arg1 ;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(void)setExifOrientation:(int)arg1 ;
-(int)exifOrientation;
-(int)resetState;
-(id)initWithCommandQueue:(id)arg1 ;
-(NSArray *)faceSegments;
-(void)setFaceSegments:(NSArray *)arg1 ;
-(void)setConfig:(SCD_Struct_Fi9)arg1 ;
-(CVBufferRef)imagePixelBuffer;
-(void)setImagePixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSegmentationPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputDisparityPixelBuffer:(CVBufferRef)arg1 ;
-(void)setSyntheticFocusRectangle:(CGRect)arg1 ;
-(void)setOutputMattePixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputRefinedDisparityPixelBuffer:(CVBufferRef)arg1 ;
-(int)finishScheduling;
-(int)prepareToProcess:(unsigned)arg1 ;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
-(int)finishProcessing;
-(void)setInputSemanticsHairPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSemanticsSkinPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSemanticsTeethPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInputSemanticsGlassesPixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(void)setInputSemanticsSkyPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsHairPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsSkinPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsTeethPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsGlassesPixelBuffer:(CVBufferRef)arg1 ;
-(void)setOutputSemanticsSkyPixelBuffer:(CVBufferRef)arg1 ;
-(id)_createTextureOfSize:(CGSize)arg1 withFormat:(unsigned long long)arg2 ;
-(int)_allocateResources:(SCD_Struct_Fi9)arg1 ;
-(int)_prewarmMPSKernels;
-(int)_encodeCopyTextureOn:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(int)processFocalPlaneAndSolverOnly;
-(CVBufferRef)inputSegmentationPixelBuffer;
-(CVBufferRef)inputDisparityPixelBuffer;
-(CVBufferRef)inputDepthPixelBuffer;
-(CVBufferRef)inputSemanticsHairPixelBuffer;
-(CVBufferRef)inputSemanticsSkinPixelBuffer;
-(CVBufferRef)inputSemanticsTeethPixelBuffer;
-(CVBufferRef)inputSemanticsGlassesPixelBuffer;
-(CVBufferRef)inputSemanticsSkyPixelBuffer;
-(CVBufferRef)outputRefinedDisparityPixelBuffer;
-(CVBufferRef)outputMattePixelBuffer;
-(CVBufferRef)outputSemanticsHairPixelBuffer;
-(CVBufferRef)outputSemanticsSkinPixelBuffer;
-(CVBufferRef)outputSemanticsTeethPixelBuffer;
-(CVBufferRef)outputSemanticsGlassesPixelBuffer;
-(CVBufferRef)outputSemanticsSkyPixelBuffer;
-(CGRect)syntheticFocusRectangle;
-(NSArray *)faceLandmarks;
@end

