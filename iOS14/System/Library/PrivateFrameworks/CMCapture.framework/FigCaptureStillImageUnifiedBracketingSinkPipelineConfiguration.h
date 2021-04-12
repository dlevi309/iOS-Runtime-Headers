/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSDictionary, NSArray;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	unsigned _pipelineStagePriority;
	unsigned _inferencePriority;
	int _deviceType;
	NSDictionary* _sensorIDStringsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	int _redEyeReductionVersion;
	int _semanticRenderingVersion;
	int _semanticDevelopmentVersion;
	NSDictionary* _geometricDistortionCorrectionEnabledByPortType;
	BOOL _intelligentDistortionCorrectionEnabled;
	int _intelligentDistortionCorrectionVersion;
	BOOL _deferredProcessingSupported;
	BOOL _deferredPhotoProcessorEnabled;
	BOOL _adjustablePortraitLightingEffectStrengthSupported;
	BOOL _deepFusionSupported;
	BOOL _responsiveShutterSupported;
	BOOL _fastCapturePrioritizationEnabled;
	BOOL _captureTimePhotosCurationSupported;
	BOOL _supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
	int _depthDataType;
	BOOL _sifrStillImageCaptureEnabledIfAvailable;
	float _gainMapMainImageDownscalingFactor;
	NSArray* _enabledSemanticSegmentationMatteURNs;
	NSDictionary* _cameraInfoByPortType;
	NSArray* _portTypesWithGeometricDistortionCorrectionEnabled;

}

@property (assign,nonatomic) unsigned pipelineStagePriority;                                                      //@synthesize pipelineStagePriority=_pipelineStagePriority - In the implementation block
@property (assign,nonatomic) unsigned inferencePriority;                                                          //@synthesize inferencePriority=_inferencePriority - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * sensorIDStringsByPortType;                                            //@synthesize sensorIDStringsByPortType=_sensorIDStringsByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * baseZoomFactorsByPortType;                                            //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (assign,nonatomic) int redEyeReductionVersion;                                                          //@synthesize redEyeReductionVersion=_redEyeReductionVersion - In the implementation block
@property (assign,nonatomic) int semanticRenderingVersion;                                                        //@synthesize semanticRenderingVersion=_semanticRenderingVersion - In the implementation block
@property (assign,nonatomic) int semanticDevelopmentVersion;                                                      //@synthesize semanticDevelopmentVersion=_semanticDevelopmentVersion - In the implementation block
@property (nonatomic,retain) NSArray * portTypesWithGeometricDistortionCorrectionEnabled;                         //@synthesize portTypesWithGeometricDistortionCorrectionEnabled=_portTypesWithGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;                                         //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionVersion;                                          //@synthesize intelligentDistortionCorrectionVersion=_intelligentDistortionCorrectionVersion - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingSupported;                                                    //@synthesize deferredProcessingSupported=_deferredProcessingSupported - In the implementation block
@property (assign,nonatomic) BOOL deferredPhotoProcessorEnabled;                                                  //@synthesize deferredPhotoProcessorEnabled=_deferredPhotoProcessorEnabled - In the implementation block
@property (assign,nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported;                              //@synthesize adjustablePortraitLightingEffectStrengthSupported=_adjustablePortraitLightingEffectStrengthSupported - In the implementation block
@property (assign,nonatomic) BOOL deepFusionSupported;                                                            //@synthesize deepFusionSupported=_deepFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL responsiveShutterSupported;                                                     //@synthesize responsiveShutterSupported=_responsiveShutterSupported - In the implementation block
@property (assign,nonatomic) BOOL fastCapturePrioritizationEnabled;                                               //@synthesize fastCapturePrioritizationEnabled=_fastCapturePrioritizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL captureTimePhotosCurationSupported;                                             //@synthesize captureTimePhotosCurationSupported=_captureTimePhotosCurationSupported - In the implementation block
@property (assign,nonatomic) BOOL supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;              //@synthesize supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto=_supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto - In the implementation block
@property (assign,nonatomic) int depthDataType;                                                                   //@synthesize depthDataType=_depthDataType - In the implementation block
@property (assign,nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;                                        //@synthesize sifrStillImageCaptureEnabledIfAvailable=_sifrStillImageCaptureEnabledIfAvailable - In the implementation block
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor;                                             //@synthesize gainMapMainImageDownscalingFactor=_gainMapMainImageDownscalingFactor - In the implementation block
@property (nonatomic,retain) NSArray * enabledSemanticSegmentationMatteURNs;                                      //@synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                 //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
-(int)deviceType;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(BOOL)fastCapturePrioritizationEnabled;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)baseZoomFactorsByPortType;
-(NSArray *)enabledSemanticSegmentationMatteURNs;
-(void)setDepthDataType:(int)arg1 ;
-(void)setEnabledSemanticSegmentationMatteURNs:(NSArray *)arg1 ;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)semanticDevelopmentVersion;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(int)semanticRenderingVersion;
-(void)setSemanticDevelopmentVersion:(int)arg1 ;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg1 ;
-(BOOL)deferredProcessingSupported;
-(void)setSemanticRenderingVersion:(int)arg1 ;
-(BOOL)responsiveShutterSupported;
-(int)intelligentDistortionCorrectionVersion;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg1 ;
-(void)setPipelineStagePriority:(unsigned)arg1 ;
-(void)setInferencePriority:(unsigned)arg1 ;
-(void)setSensorIDStringsByPortType:(NSDictionary *)arg1 ;
-(void)setRedEyeReductionVersion:(int)arg1 ;
-(void)setPortTypesWithGeometricDistortionCorrectionEnabled:(NSArray *)arg1 ;
-(void)setDeferredPhotoProcessorEnabled:(BOOL)arg1 ;
-(void)setDeepFusionSupported:(BOOL)arg1 ;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(NSArray *)portTypesWithGeometricDistortionCorrectionEnabled;
-(int)redEyeReductionVersion;
-(int)depthDataType;
-(BOOL)sifrStillImageCaptureEnabledIfAvailable;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setIntelligentDistortionCorrectionVersion:(int)arg1 ;
-(void)setSifrStillImageCaptureEnabledIfAvailable:(BOOL)arg1 ;
-(unsigned)pipelineStagePriority;
-(unsigned)inferencePriority;
-(NSDictionary *)sensorIDStringsByPortType;
-(void)setDeferredProcessingSupported:(BOOL)arg1 ;
-(BOOL)deferredPhotoProcessorEnabled;
-(BOOL)adjustablePortraitLightingEffectStrengthSupported;
-(void)setAdjustablePortraitLightingEffectStrengthSupported:(BOOL)arg1 ;
-(BOOL)deepFusionSupported;
-(void)setResponsiveShutterSupported:(BOOL)arg1 ;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(float)gainMapMainImageDownscalingFactor;
-(BOOL)captureTimePhotosCurationSupported;
-(void)dealloc;
@end

