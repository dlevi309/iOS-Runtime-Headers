/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/

#import <DisparityV4/DisparityV4-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLTexture;
@class DupDownscaleHalfConvert, GDCProcessor, StereoDisparityEstimator, Demosaic, Calibration, RegToolboxGPU, FigMetalContext, NSDictionary, DisparityDiagnostics, NSArray, NSMutableDictionary, FigDisparityMetadata;

@interface FigDisparityGenerator : NSObject <ImageBufferProcessor> {

	DupDownscaleHalfConvert* _downscaler;
	GDCProcessor* _gdc;
	StereoDisparityEstimator* _stereoDisparityEstimator;
	Demosaic* _referenceDemosaic;
	Demosaic* _auxiliaryDemosaic;
	Calibration* _calibration;
	CVBufferRef _auxiliaryImageFull;
	CVBufferRef _referenceImageFull;
	id<MTLTexture> _demosaicLumaTex;
	id<MTLTexture> _demosaicChromaTex;
	id<MTLTexture> _auxiliaryImageFullYTex;
	id<MTLTexture> _auxiliaryImageFullUVTex;
	id<MTLTexture> _referenceImageFullYTex;
	id<MTLTexture> _referenceImageFullUVTex;
	unsigned _refWidth;
	unsigned _refHeight;
	unsigned _disparityWidth;
	unsigned _disparityHeight;
	RegToolboxGPU* _keypointDetRtb;
	SCD_Struct_Re8* _keypointListRtb;
	unsigned _keypointGridWidth;
	unsigned _keypointGridHeight;
	unsigned _keypointsCount;
	unsigned _keypointsTemplateRadius;
	unsigned _keypointsSearchRadius;
	float _keypointsMinCornerScore;
	float _keypointsMinNccScore;
	float _keypointsMinSelectionScore;
	unsigned _inputImageWidth;
	unsigned _inputImageHeight;
	unsigned _scalerOutputWidth;
	unsigned _scalerOutputHeight;
	unsigned _auxiliaryPaddedWidthMax;
	unsigned _auxiliaryPaddedHeightMax;
	CVBufferRef _referenceImageLow;
	CVBufferRef _referenceImageLowLumaOnly;
	CVBufferRef _auxiliaryImageLow;
	CVBufferRef _undistortedReference;
	CVBufferRef _shiftMap;
	FigMetalContext* _metalContext;
	NSDictionary* _auxiliaryMeta;
	NSDictionary* _referenceMeta;
	double* _adaptiveCorrectionKeypointsReferenceDistorted;
	double* _adaptiveCorrectionKeypointsAuxiliaryDistorted;
	DisparityDiagnostics* _diagnostics;
	NSArray* _portsToConfig;
	NSMutableDictionary* _tuningParameters;
	BOOL _isPrewarming;
	CalModel _correctedCalibration;
	SCD_Struct_Fi26 _gdcParametersReference;
	SCD_Struct_Fi26 _gdcParametersAuxiliary;
	float _canonicalDisparityScaleFactorOut;
	BOOL _shouldComputeDisparityWhenCalibrationFails;
	BOOL _equalizeTeleGainToMatchReference;
	FigDisparityMetadata* _shiftMapMetadata;
	NSDictionary* _options;
	NSDictionary* _disparityDiagnosticMetadata;
	opaqueCMSampleBufferRef _referenceSampleBuffer;
	opaqueCMSampleBufferRef _auxiliarySampleBuffer;
	CVBufferRef _outputShiftmap;
	SCD_Struct_Fi28 _disparityConfig;

}

@property (nonatomic,readonly) FigDisparityMetadata * shiftMapMetadata;                    //@synthesize shiftMapMetadata=_shiftMapMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;              //@synthesize shouldComputeDisparityWhenCalibrationFails=_shouldComputeDisparityWhenCalibrationFails - In the implementation block
@property (assign,nonatomic) BOOL equalizeTeleGainToMatchReference;                        //@synthesize equalizeTeleGainToMatchReference=_equalizeTeleGainToMatchReference - In the implementation block
@property (nonatomic,readonly) FigMetalContext * metalContext;                             //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * disparityDiagnosticMetadata;                 //@synthesize disparityDiagnosticMetadata=_disparityDiagnosticMetadata - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef referenceSampleBuffer;                //@synthesize referenceSampleBuffer=_referenceSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef auxiliarySampleBuffer;                //@synthesize auxiliarySampleBuffer=_auxiliarySampleBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputShiftmap;                                   //@synthesize outputShiftmap=_outputShiftmap - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi28 disparityConfig;                              //@synthesize disparityConfig=_disparityConfig - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(int)finishProcessing;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)allocateResources;
-(FigMetalContext *)metalContext;
-(BOOL)allocateResources:(SCD_Struct_Fi28*)arg1 ;
-(void)releaseResources;
-(int)process;
-(id)initWithCommandQueue:(id)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(int)resetState;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(void)setReferenceSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setAuxiliarySampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDisparityConfig:(SCD_Struct_Fi28)arg1 ;
-(void)setEqualizeTeleGainToMatchReference:(BOOL)arg1 ;
-(void)setOutputShiftmap:(CVBufferRef)arg1 ;
-(FigDisparityMetadata *)shiftMapMetadata;
-(NSDictionary *)disparityDiagnosticMetadata;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(BOOL)isImageFullResolution:(CVBufferRef)arg1 ;
-(BOOL)isImageScalerOutputResolution:(CVBufferRef)arg1 ;
-(BOOL)_extractAndRunSanityChecks;
-(id)selectTuningParametersForCapture;
-(int)_downscaleReference:(CVBufferRef)arg1 auxiliary:(CVBufferRef)arg2 referenceMagnification:(float)arg3 gainToApplyToReference:(float)arg4 ;
-(int)_detectKeypoints:(float)arg1 ;
-(void)fillShiftMapMetadataWithCalModel:(CalModel*)arg1 referenceGDC:(SCD_Struct_Fi26*)arg2 auxiliaryGDC:(SCD_Struct_Fi26*)arg3 ;
-(int)purgeResources;
-(opaqueCMSampleBufferRef)referenceSampleBuffer;
-(opaqueCMSampleBufferRef)auxiliarySampleBuffer;
-(BOOL)equalizeTeleGainToMatchReference;
-(CVBufferRef)outputShiftmap;
-(SCD_Struct_Fi28)disparityConfig;
-(id)allocateTextureForSize:(CGSize)arg1 format:(unsigned long long)arg2 ;
-(int)_demosaic;
@end

