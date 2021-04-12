/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSDictionary;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	unsigned _pipelineStagePriority;
	unsigned _inferencePriority;
	int _deviceType;
	NSDictionary* _sensorIDStringsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	int _redEyeReductionVersion;
	float _overCapturePercentage;
	SCD_Struct_BW19 _overCaptureImageDimensions;
	BOOL _deferredProcessingSupported;
	BOOL _deferredPhotoProcessorEnabled;
	BOOL _adjustablePortraitLightingEffectStrengthSupported;
	BOOL _deepFusionSupported;
	BOOL _captureTimePhotosCurationSupported;
	BOOL _supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
	int _depthDataType;
	BOOL _sifrStillImageCaptureEnabledIfAvailable;
	NSDictionary* _cameraInfoByPortType;

}

@property (assign,nonatomic) unsigned pipelineStagePriority;                                                      //@synthesize pipelineStagePriority=_pipelineStagePriority - In the implementation block
@property (assign,nonatomic) unsigned inferencePriority;                                                          //@synthesize inferencePriority=_inferencePriority - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * sensorIDStringsByPortType;                                            //@synthesize sensorIDStringsByPortType=_sensorIDStringsByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * baseZoomFactorsByPortType;                                            //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (assign,nonatomic) int redEyeReductionVersion;                                                          //@synthesize redEyeReductionVersion=_redEyeReductionVersion - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                         //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW19 overCaptureImageDimensions;                                          //@synthesize overCaptureImageDimensions=_overCaptureImageDimensions - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingSupported;                                                    //@synthesize deferredProcessingSupported=_deferredProcessingSupported - In the implementation block
@property (assign,nonatomic) BOOL deferredPhotoProcessorEnabled;                                                  //@synthesize deferredPhotoProcessorEnabled=_deferredPhotoProcessorEnabled - In the implementation block
@property (assign,nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported;                              //@synthesize adjustablePortraitLightingEffectStrengthSupported=_adjustablePortraitLightingEffectStrengthSupported - In the implementation block
@property (assign,nonatomic) BOOL deepFusionSupported;                                                            //@synthesize deepFusionSupported=_deepFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL captureTimePhotosCurationSupported;                                             //@synthesize captureTimePhotosCurationSupported=_captureTimePhotosCurationSupported - In the implementation block
@property (assign,nonatomic) BOOL supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;              //@synthesize supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto=_supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto - In the implementation block
@property (assign,nonatomic) int depthDataType;                                                                   //@synthesize depthDataType=_depthDataType - In the implementation block
@property (assign,nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;                                        //@synthesize sifrStillImageCaptureEnabledIfAvailable=_sifrStillImageCaptureEnabledIfAvailable - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                 //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
-(void)dealloc;
-(int)depthDataType;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(BOOL)deferredProcessingSupported;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)baseZoomFactorsByPortType;
-(void)setOverCapturePercentage:(float)arg1 ;
-(void)setPipelineStagePriority:(unsigned)arg1 ;
-(void)setInferencePriority:(unsigned)arg1 ;
-(void)setSensorIDStringsByPortType:(NSDictionary *)arg1 ;
-(int)redEyeReductionVersion;
-(void)setRedEyeReductionVersion:(int)arg1 ;
-(void)setOverCaptureImageDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setAdjustablePortraitLightingEffectStrengthSupported:(BOOL)arg1 ;
-(void)setDeepFusionSupported:(BOOL)arg1 ;
-(void)setDeferredProcessingSupported:(BOOL)arg1 ;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg1 ;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg1 ;
-(void)setSifrStillImageCaptureEnabledIfAvailable:(BOOL)arg1 ;
-(void)setDepthDataType:(int)arg1 ;
-(BOOL)sifrStillImageCaptureEnabledIfAvailable;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(float)overCapturePercentage;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(NSDictionary *)cameraInfoByPortType;
-(unsigned)pipelineStagePriority;
-(unsigned)inferencePriority;
-(NSDictionary *)sensorIDStringsByPortType;
-(SCD_Struct_BW19)overCaptureImageDimensions;
-(BOOL)deferredPhotoProcessorEnabled;
-(void)setDeferredPhotoProcessorEnabled:(BOOL)arg1 ;
-(BOOL)adjustablePortraitLightingEffectStrengthSupported;
-(BOOL)deepFusionSupported;
-(BOOL)captureTimePhotosCurationSupported;
@end

