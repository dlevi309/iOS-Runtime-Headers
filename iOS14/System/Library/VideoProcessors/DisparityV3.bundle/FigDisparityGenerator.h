/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/

#import <DisparityV3/DisparityV3-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol DisparityProcessorInferenceDelegate;
@class NSDictionary, DupDownscaleHalfConvert, GDCProcessor, StereoDisparityEstimator, RegToolboxGPU, FigMetalContext, DisparityDiagnostics, DisparityTuningParameters, FigDisparityMetadata, NSString;

@interface FigDisparityGenerator : NSObject <ImageBufferProcessor> {

	DupDownscaleHalfConvert* _downscaler;
	GDCProcessor* _gdc;
	StereoDisparityEstimator* _stereoDisparityEstimator;
	unsigned _refWidth;
	unsigned _refHeight;
	unsigned _disparityWidth;
	unsigned _disparityHeight;
	RegToolboxGPU* _keypointDetRtb;
	SCD_Struct_Re15* _keypointListRtb;
	unsigned _keypointGridWidth;
	unsigned _keypointGridHeight;
	unsigned _keypointsCount;
	AdaptiveCorrectionRef _adc;
	unsigned _inputImageWidth;
	unsigned _inputImageHeight;
	unsigned _scalerOutputWidth;
	unsigned _scalerOutputHeight;
	unsigned _widePaddedWidthMax;
	unsigned _widePaddedHeightMax;
	CVBufferRef _teleImageLow;
	CVBufferRef _teleImageLowLumaOnly;
	CVBufferRef _wideImageLow;
	CVBufferRef _undistortedTele;
	CVBufferRef _shiftMap;
	FigMetalContext* _metalContext;
	NSDictionary* _wideMeta;
	NSDictionary* _teleMeta;
	double* _adaptiveCorrectionKeypointsTeleDistorted;
	double* _adaptiveCorrectionKeypointsWideDistorted;
	float _pixelSizeTeleMicrometers;
	float _pixelSizeWideMicrometers;
	long long _disparityOrientation;
	DisparityDiagnostics* _diagnostics;
	DisparityTuningParameters* _disparityTuningParameters;
	BOOL _isPrewarming;
	CalModel _initialCalibration;
	CalModel _correctedCalibration;
	SCD_Struct_Fi22 _gdcParametersTele;
	SCD_Struct_Fi22 _gdcParametersWide;
	DistortionModel _teleDistModel;
	DistortionModel _wideDistModel;
	DistortionModel _teleUndistModel;
	DistortionModel _wideUndistModel;
	SCD_Struct_St0 _paddingHInv;
	float _nearLimitDisparityAtFullRes;
	float _midLimitDisparityAtFullRes;
	float _canonicalDisparityScaleFactorOut;
	BOOL _shouldComputeDisparityWhenCalibrationFails;
	BOOL _equalizeTeleGainToMatchReference;
	NSDictionary* _tuningParameters;
	NSDictionary* _cameraInfoByPortType;
	FigDisparityMetadata* _shiftMapMetadata;
	NSDictionary* _options;
	NSDictionary* _disparityDiagnosticMetadata;
	opaqueCMSampleBufferRef _referenceSampleBuffer;
	opaqueCMSampleBufferRef _auxiliarySampleBuffer;
	CVBufferRef _outputShiftmap;
	id<DisparityProcessorInferenceDelegate> _disparityInferenceProcessorDelegate;
	SCD_Struct_Fi25 _disparityConfig;

}

@property (nonatomic,readonly) FigDisparityMetadata * shiftMapMetadata;                                                       //@synthesize shiftMapMetadata=_shiftMapMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                                                                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;                                                 //@synthesize shouldComputeDisparityWhenCalibrationFails=_shouldComputeDisparityWhenCalibrationFails - In the implementation block
@property (assign,nonatomic) BOOL equalizeTeleGainToMatchReference;                                                           //@synthesize equalizeTeleGainToMatchReference=_equalizeTeleGainToMatchReference - In the implementation block
@property (nonatomic,readonly) FigMetalContext * metalContext;                                                                //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * disparityDiagnosticMetadata;                                                    //@synthesize disparityDiagnosticMetadata=_disparityDiagnosticMetadata - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef referenceSampleBuffer;                                                   //@synthesize referenceSampleBuffer=_referenceSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef auxiliarySampleBuffer;                                                   //@synthesize auxiliarySampleBuffer=_auxiliarySampleBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputShiftmap;                                                                      //@synthesize outputShiftmap=_outputShiftmap - In the implementation block
@property (assign,nonatomic,__weak) id<DisparityProcessorInferenceDelegate> disparityInferenceProcessorDelegate;              //@synthesize disparityInferenceProcessorDelegate=_disparityInferenceProcessorDelegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi25 disparityConfig;                                                                 //@synthesize disparityConfig=_disparityConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * tuningParameters;                                                                 //@synthesize tuningParameters=_tuningParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                             //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)process;
-(int)prewarm;
-(int)setup;
-(id)init;
-(int)purgeResources;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(NSDictionary *)options;
-(BOOL)equalizeTeleGainToMatchReference;
-(void)setEqualizeTeleGainToMatchReference:(BOOL)arg1 ;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(void)setOutputShiftmap:(CVBufferRef)arg1 ;
-(void)setDisparityInferenceProcessorDelegate:(id<DisparityProcessorInferenceDelegate>)arg1 ;
-(FigDisparityMetadata *)shiftMapMetadata;
-(NSDictionary *)disparityDiagnosticMetadata;
-(void)setDisparityConfig:(SCD_Struct_Fi25)arg1 ;
-(NSDictionary *)tuningParameters;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setReferenceSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setAuxiliarySampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)resetState;
-(id)initWithCommandQueue:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(void)releaseResources;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(int)finishProcessing;
-(FigMetalContext *)metalContext;
-(void)dealloc;
-(BOOL)allocateResources:(SCD_Struct_Fi25*)arg1 ;
-(BOOL)isImageFullResolution:(CVBufferRef)arg1 ;
-(BOOL)isImageScalerOutputResolution:(CVBufferRef)arg1 ;
-(int)runWithTele:(opaqueCMSampleBufferRef)arg1 wide:(opaqueCMSampleBufferRef)arg2 result:(CVBufferRef)arg3 ;
-(BOOL)sanityChecksTele:(CVBufferRef)arg1 wide:(CVBufferRef)arg2 result:(CVBufferRef)arg3 ;
-(int)computeInitialCalibration:(CalModel*)arg1 teleSbuf:(opaqueCMSampleBufferRef)arg2 wideSbuf:(opaqueCMSampleBufferRef)arg3 ;
-(int)_downscaleTele:(CVBufferRef)arg1 Wide:(CVBufferRef)arg2 teleMagnification:(float)arg3 gainToApplyToTele:(float)arg4 ;
-(int)_detectKeypoints:(float)arg1 ;
-(void)fillShiftMapMetadataWithCalModel:(CalModel*)arg1 teleGDC:(SCD_Struct_Fi22*)arg2 wideGDC:(SCD_Struct_Fi22*)arg3 ;
-(opaqueCMSampleBufferRef)referenceSampleBuffer;
-(opaqueCMSampleBufferRef)auxiliarySampleBuffer;
-(CVBufferRef)outputShiftmap;
-(id<DisparityProcessorInferenceDelegate>)disparityInferenceProcessorDelegate;
-(SCD_Struct_Fi25)disparityConfig;
@end

