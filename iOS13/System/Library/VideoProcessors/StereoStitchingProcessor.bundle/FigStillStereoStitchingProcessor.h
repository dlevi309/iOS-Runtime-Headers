/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/

#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLTexture, MTLBuffer;
@class NSDictionary, CameraCalibrationV2, RegPyramid, StereoStitchingGpuUtilities, ShiftmapExtension, SmoothFlowTransition, ColorMatching, PyramidBlending, QualityEstimation, PlanarSceneDetection, LineDetector, LineBendingDetection, FigStillStereoStitchingTuningParameters, FigMetalContext, FigWiredMemory;

@interface FigStillStereoStitchingProcessor : NSObject <ImageBufferProcessor> {

	unsigned _processingType;
	CVBufferRef _wideImagePixelBuffer;
	NSDictionary* _wideImageMetadata;
	id<MTLTexture> _wideInputLumaTexture;
	id<MTLTexture> _wideInputChromaTexture;
	CVBufferRef _narrowInputPixelBuffer;
	NSDictionary* _narrowInputMetadata;
	id<MTLTexture> _narrowInputLumaTexture;
	id<MTLTexture> _narrowInputChromaTexture;
	SCD_Struct_Fi4 _narrowValidPixelsRect;
	CVBufferRef _outputImagePixelBuffer;
	id<MTLTexture> _outputLumaTexture;
	id<MTLTexture> _outputChromaTexture;
	CameraCalibrationV2* _cameraCalibrationProcessor;
	RegPyramid* _pyramidRegistrationProcessor;
	StereoStitchingGpuUtilities* _utilitiesProcessor;
	SCD_Struct_Fi5 _shiftmapExtensionParams;
	ShiftmapExtension* _shiftmapExtensionProcessor;
	SmoothFlowTransition* _smoothFlowTransitionProcessor;
	ColorMatching* _colorMatchingProcessor;
	ColorMatchingDescriptor _colorMatchingDesc;
	PyramidBlending* _pyramidBlendingProcessor;
	QualityEstimation* _qualityEstimationProcessor;
	PlanarSceneDetection* _planarSceneDetectionProcessor;
	LineDetector* _lineDetectorProcessor;
	LineBendingDetection* _lineBendingDetectionProcessor;
	BOOL _resourcesAssigned;
	SCD_Struct_Fi7 _offsets;
	unsigned _stereoStitchingType;
	FigStillStereoStitchingTuningParameters* _tuningParameters[2];
	unsigned _outputImageWidth;
	unsigned _outputImageHeight;
	unsigned _shiftmapWidth;
	unsigned _shiftmapHeight;
	unsigned _imageExtensionWidth;
	unsigned _imageExtensionHeight;
	unsigned _shiftmapExtensionWidth;
	unsigned _shiftmapExtensionHeight;
	unsigned _extendedShiftmapWidth;
	unsigned _extendedShiftmapHeight;
	SCD_Struct_Fi9 _cameraCalibrationResults;
	SCD_Struct_Fi8 _extendShiftmapTransform;
	float _effectiveIntegrationTime;
	id<MTLTexture> _jbfConfidenceMap;
	id<MTLTexture> _extendedShiftmapTexture;
	id<MTLTexture> _warpedNarrowLumaTexture;
	id<MTLTexture> _warpedNarrowChromaTexture;
	BOOL _isShaderHarvesting;
	BOOL _areAllShadersCompiled;
	id<MTLTexture> _smoothFlowShiftmapX;
	id<MTLTexture> _smoothFlowShiftmapY;
	BOOL _horizonLinePresent;
	unsigned _stitchingConfidenceScore;
	float _horizonLineAngleInDegrees;
	float _horizonLineVerticalCenterlineIntersection;
	NSDictionary* _options;
	FigMetalContext* _metalContext;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;
	opaqueCMSampleBufferRef _wideImageSampleBuffer;
	opaqueCMSampleBufferRef _narrowImageSampleBuffer;
	opaqueCMSampleBufferRef _outputImageSampleBuffer;
	SCD_Struct_Fi11 _processorConfiguration;
	CGRect _primaryImageZoomRect;
	CGRect _primaryImageOutputRect;

}

@property (assign,nonatomic) SCD_Struct_Fi11 processorConfiguration;                         //@synthesize processorConfiguration=_processorConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FigMetalContext * metalContext;                                 //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> sharedMetalBuffer;                                //@synthesize sharedMetalBuffer=_sharedMetalBuffer - In the implementation block
@property (nonatomic,retain) FigWiredMemory * sharedRegWarpBuffer;                           //@synthesize sharedRegWarpBuffer=_sharedRegWarpBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef wideImageSampleBuffer;                  //@synthesize wideImageSampleBuffer=_wideImageSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef narrowImageSampleBuffer;                //@synthesize narrowImageSampleBuffer=_narrowImageSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef outputImageSampleBuffer;                //@synthesize outputImageSampleBuffer=_outputImageSampleBuffer - In the implementation block
@property (assign,nonatomic) CGRect primaryImageZoomRect;                                    //@synthesize primaryImageZoomRect=_primaryImageZoomRect - In the implementation block
@property (assign,nonatomic) CGRect primaryImageOutputRect;                                  //@synthesize primaryImageOutputRect=_primaryImageOutputRect - In the implementation block
@property (nonatomic,readonly) unsigned stitchingConfidenceScore;                            //@synthesize stitchingConfidenceScore=_stitchingConfidenceScore - In the implementation block
@property (nonatomic,readonly) BOOL horizonLinePresent;                                      //@synthesize horizonLinePresent=_horizonLinePresent - In the implementation block
@property (nonatomic,readonly) float horizonLineAngleInDegrees;                              //@synthesize horizonLineAngleInDegrees=_horizonLineAngleInDegrees - In the implementation block
@property (nonatomic,readonly) float horizonLineVerticalCenterlineIntersection;              //@synthesize horizonLineVerticalCenterlineIntersection=_horizonLineVerticalCenterlineIntersection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(int)finishProcessing;
-(void)setOptions:(NSDictionary *)arg1 ;
-(FigMetalContext *)metalContext;
-(void)releaseResources;
-(int)process;
-(id)initWithCommandQueue:(id)arg1 ;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(void)setWideImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setNarrowImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)resetState;
-(void)setSharedMetalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setSharedRegWarpBuffer:(FigWiredMemory *)arg1 ;
-(void)setOutputImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned)stitchingConfidenceScore;
-(BOOL)horizonLinePresent;
-(float)horizonLineAngleInDegrees;
-(float)horizonLineVerticalCenterlineIntersection;
-(void)setProcessorConfiguration:(SCD_Struct_Fi11)arg1 ;
-(int)determineWorkingBufferRequirementsToProcess:(unsigned)arg1 memoryAllocationInfo:(SCD_Struct_Fi15*)arg2 ;
-(int)runPipeline;
-(void)setMetalContext:(FigMetalContext *)arg1 ;
-(int)purgeResources;
-(void)isShaderHarvesting:(id)arg1 ;
-(int)compileShaders:(BOOL)arg1 ;
-(int)computeResourcesFootprint:(unsigned long long*)arg1 regwarpFootprint:(unsigned long long*)arg2 ;
-(void)extractValidBufferRect:(id)arg1 region:(SCD_Struct_Fi4*)arg2 ;
-(int)bindMetalTexturesToCVPixelBuffers;
-(int)assignSharedMetalBuffer;
-(int)assignSharedRegWarpBuffer;
-(int)mapWorkTextures;
-(int)runHorizonDetection;
-(void)releaseBindings;
-(int)shiftmapExtension;
-(int)lineBendingDetection;
-(int)wideImageWarping;
-(void)computeStitchingScore:(char*)arg1 ;
-(SCD_Struct_Fi11)processorConfiguration;
-(opaqueCMSampleBufferRef)wideImageSampleBuffer;
-(opaqueCMSampleBufferRef)narrowImageSampleBuffer;
-(opaqueCMSampleBufferRef)outputImageSampleBuffer;
-(CGRect)primaryImageZoomRect;
-(void)setPrimaryImageZoomRect:(CGRect)arg1 ;
-(CGRect)primaryImageOutputRect;
-(void)setPrimaryImageOutputRect:(CGRect)arg1 ;
@end

