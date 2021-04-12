/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSString;

@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	int _payloadType;
	int _settingsProvider;
	unsigned _outputFormat;
	int _outputFileType;
	unsigned _rawOutputFormat;
	int _rawOutputFileType;
	unsigned _outputWidth;
	unsigned _outputHeight;
	BOOL _squareCropEnabled;
	BOOL _outputMirroring;
	int _outputOrientation;
	BOOL _previewEnabled;
	unsigned _previewFormat;
	unsigned _previewWidth;
	unsigned _previewHeight;
	BOOL _previewMirroring;
	int _previewOrientation;
	BOOL _thumbnailEnabled;
	unsigned _thumbnailFormat;
	unsigned _thumbnailWidth;
	unsigned _thumbnailHeight;
	BOOL _rawThumbnailEnabled;
	unsigned _rawThumbnailFormat;
	unsigned _rawThumbnailWidth;
	unsigned _rawThumbnailHeight;
	BOOL _noiseReductionEnabled;
	BOOL _burstQualityCaptureEnabled;
	float _scaleFactor;
	BOOL _zoomWithoutUpscalingEnabled;
	unsigned _shutterSound;
	int _flashMode;
	BOOL _autoRedEyeReductionEnabled;
	int _digitalFlashMode;
	int _wideColorMode;
	int _HDRMode;
	BOOL _depthDataDeliveryEnabled;
	BOOL _embedsDepthDataInImage;
	BOOL _depthDataFiltered;
	BOOL _cameraCalibrationDataDeliveryEnabled;
	BOOL _portraitEffectsMatteDeliveryEnabled;
	BOOL _embedsPortraitEffectsMatteInImage;
	NSArray* _enabledSemanticSegmentationMatteURNs;
	BOOL _embedsSemanticSegmentationMattesInImage;
	NSDictionary* _metadata;
	NSDictionary* _metadataForOriginalImage;
	NSArray* _originalImageFilters;
	NSArray* _processedImageFilters;
	float _simulatedAperture;
	float _portraitLightingEffectStrength;
	BOOL _providesOriginalImage;
	NSArray* _bravoConstituentImageDeliveryDeviceTypes;
	NSDictionary* _spatialOverCaptureMetadata;
	NSDictionary* _spatialOverCaptureMetadataForOriginalImage;
	BOOL _autoDeferredProcessingEnabled;
	int _qualityPrioritization;
	int _bravoImageFusionMode;
	BOOL _autoIntelligentDistortionCorrectionEnabled;
	NSDictionary* _vtCompressionProperties;
	int _bracketType;
	unsigned _bracketImageCount;
	BOOL _lensStabilizationDuringBracketEnabled;
	SCD_Struct_BW8* _exposureDurations;
	float* _ISOs;
	float* _exposureTargetBiases;
	unsigned long long _stillImageUserInitiatedRequestTime;
	SCD_Struct_BW8 _stillImageUserInitiatedRequestPTS;
	long long _stillImageRequestTime;
	long long _stillImageCaptureStartTime;
	double _stillImageCaptureAbsoluteStartTime;
	NSString* _imageGroupIdentifier;
	NSString* _captureRequestIdentifier;
	BOOL _clientInitiatedPrepareSettings;
	BOOL _userInitiatedRequestSettings;
	BOOL _beginMomentCaptureSettings;
	float _videoStabilizationOverscanCropMultiplier;

}

@property (assign,nonatomic) NSString * imageGroupIdentifier;                                                          //@synthesize imageGroupIdentifier=_imageGroupIdentifier - In the implementation block
@property (nonatomic,readonly) long long settingsID;                                                                   //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) int payloadType;                                                                          //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic) int settingsProvider;                                                                     //@synthesize settingsProvider=_settingsProvider - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                                                    //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputFileType;                                                                       //@synthesize outputFileType=_outputFileType - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                                                 //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) int rawOutputFileType;                                                                    //@synthesize rawOutputFileType=_rawOutputFileType - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                                                     //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                                                    //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) BOOL squareCropEnabled;                                                                   //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL outputMirroring;                                                                     //@synthesize outputMirroring=_outputMirroring - In the implementation block
@property (assign,nonatomic) int outputOrientation;                                                                    //@synthesize outputOrientation=_outputOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputPixelBufferAttributes; 
@property (getter=isOutputFormatCompressed,nonatomic,readonly) BOOL outputFormatCompressed; 
@property (assign,nonatomic) BOOL previewEnabled;                                                                      //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) unsigned previewFormat;                                                                   //@synthesize previewFormat=_previewFormat - In the implementation block
@property (assign,nonatomic) unsigned previewWidth;                                                                    //@synthesize previewWidth=_previewWidth - In the implementation block
@property (assign,nonatomic) unsigned previewHeight;                                                                   //@synthesize previewHeight=_previewHeight - In the implementation block
@property (assign,nonatomic) BOOL previewMirroring;                                                                    //@synthesize previewMirroring=_previewMirroring - In the implementation block
@property (assign,nonatomic) int previewOrientation;                                                                   //@synthesize previewOrientation=_previewOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewPixelBufferAttributes; 
@property (assign,nonatomic) BOOL thumbnailEnabled;                                                                    //@synthesize thumbnailEnabled=_thumbnailEnabled - In the implementation block
@property (assign,nonatomic) unsigned thumbnailFormat;                                                                 //@synthesize thumbnailFormat=_thumbnailFormat - In the implementation block
@property (assign,nonatomic) unsigned thumbnailWidth;                                                                  //@synthesize thumbnailWidth=_thumbnailWidth - In the implementation block
@property (assign,nonatomic) unsigned thumbnailHeight;                                                                 //@synthesize thumbnailHeight=_thumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL rawThumbnailEnabled;                                                                 //@synthesize rawThumbnailEnabled=_rawThumbnailEnabled - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailFormat;                                                              //@synthesize rawThumbnailFormat=_rawThumbnailFormat - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailWidth;                                                               //@synthesize rawThumbnailWidth=_rawThumbnailWidth - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailHeight;                                                              //@synthesize rawThumbnailHeight=_rawThumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL noiseReductionEnabled;                                                               //@synthesize noiseReductionEnabled=_noiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled;                                                          //@synthesize burstQualityCaptureEnabled=_burstQualityCaptureEnabled - In the implementation block
@property (assign,nonatomic) float scaleFactor;                                                                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,getter=isZoomWithoutUpscalingEnabled,nonatomic) BOOL zoomWithoutUpscalingEnabled;                    //@synthesize zoomWithoutUpscalingEnabled=_zoomWithoutUpscalingEnabled - In the implementation block
@property (assign,nonatomic) unsigned shutterSound;                                                                    //@synthesize shutterSound=_shutterSound - In the implementation block
@property (assign,nonatomic) int flashMode;                                                                            //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) BOOL autoRedEyeReductionEnabled;                                                          //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                                                     //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (assign,nonatomic) int wideColorMode;                                                                        //@synthesize wideColorMode=_wideColorMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                                              //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                                            //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL embedsDepthDataInImage;                                                              //@synthesize embedsDepthDataInImage=_embedsDepthDataInImage - In the implementation block
@property (assign,nonatomic) BOOL depthDataFiltered;                                                                   //@synthesize depthDataFiltered=_depthDataFiltered - In the implementation block
@property (assign,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled;                                                //@synthesize cameraCalibrationDataDeliveryEnabled=_cameraCalibrationDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                                                 //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL embedsPortraitEffectsMatteInImage;                                                   //@synthesize embedsPortraitEffectsMatteInImage=_embedsPortraitEffectsMatteInImage - In the implementation block
@property (nonatomic,retain) NSArray * enabledSemanticSegmentationMatteURNs;                                           //@synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs - In the implementation block
@property (assign,nonatomic) BOOL embedsSemanticSegmentationMattesInImage;                                             //@synthesize embedsSemanticSegmentationMattesInImage=_embedsSemanticSegmentationMattesInImage - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                                                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSDictionary * metadataForOriginalImage;                                                    //@synthesize metadataForOriginalImage=_metadataForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * originalImageFilters;                                                             //@synthesize originalImageFilters=_originalImageFilters - In the implementation block
@property (nonatomic,copy) NSArray * processedImageFilters;                                                            //@synthesize processedImageFilters=_processedImageFilters - In the implementation block
@property (assign,nonatomic) float simulatedAperture;                                                                  //@synthesize simulatedAperture=_simulatedAperture - In the implementation block
@property (assign,nonatomic) float portraitLightingEffectStrength;                                                     //@synthesize portraitLightingEffectStrength=_portraitLightingEffectStrength - In the implementation block
@property (assign,nonatomic) BOOL providesOriginalImage;                                                               //@synthesize providesOriginalImage=_providesOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * bravoConstituentImageDeliveryDeviceTypes;                                         //@synthesize bravoConstituentImageDeliveryDeviceTypes=_bravoConstituentImageDeliveryDeviceTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * spatialOverCaptureMetadata;                                                  //@synthesize spatialOverCaptureMetadata=_spatialOverCaptureMetadata - In the implementation block
@property (nonatomic,copy) NSDictionary * spatialOverCaptureMetadataForOriginalImage;                                  //@synthesize spatialOverCaptureMetadataForOriginalImage=_spatialOverCaptureMetadataForOriginalImage - In the implementation block
@property (assign,nonatomic) BOOL autoDeferredProcessingEnabled;                                                       //@synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                                                //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int bravoImageFusionMode;                                                                 //@synthesize bravoImageFusionMode=_bravoImageFusionMode - In the implementation block
@property (assign,nonatomic) BOOL autoIntelligentDistortionCorrectionEnabled;                                          //@synthesize autoIntelligentDistortionCorrectionEnabled=_autoIntelligentDistortionCorrectionEnabled - In the implementation block
@property (nonatomic,copy) NSDictionary * vtCompressionProperties;                                                     //@synthesize vtCompressionProperties=_vtCompressionProperties - In the implementation block
@property (nonatomic,readonly) int bracketType;                                                                        //@synthesize bracketType=_bracketType - In the implementation block
@property (nonatomic,readonly) unsigned bracketImageCount;                                                             //@synthesize bracketImageCount=_bracketImageCount - In the implementation block
@property (assign,nonatomic) BOOL lensStabilizationDuringBracketEnabled;                                               //@synthesize lensStabilizationDuringBracketEnabled=_lensStabilizationDuringBracketEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8* exposureDurations;                                                      //@synthesize exposureDurations=_exposureDurations - In the implementation block
@property (nonatomic,readonly) float* ISOs;                                                                            //@synthesize ISOs=_ISOs - In the implementation block
@property (nonatomic,readonly) float* exposureTargetBiases;                                                            //@synthesize exposureTargetBiases=_exposureTargetBiases - In the implementation block
@property (assign,nonatomic) unsigned long long stillImageUserInitiatedRequestTime;                                    //@synthesize stillImageUserInitiatedRequestTime=_stillImageUserInitiatedRequestTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 stillImageUserInitiatedRequestPTS;                                         //@synthesize stillImageUserInitiatedRequestPTS=_stillImageUserInitiatedRequestPTS - In the implementation block
@property (assign,nonatomic) long long stillImageRequestTime;                                                          //@synthesize stillImageRequestTime=_stillImageRequestTime - In the implementation block
@property (assign,nonatomic) long long stillImageCaptureStartTime;                                                     //@synthesize stillImageCaptureStartTime=_stillImageCaptureStartTime - In the implementation block
@property (assign,nonatomic) double stillImageCaptureAbsoluteStartTime;                                                //@synthesize stillImageCaptureAbsoluteStartTime=_stillImageCaptureAbsoluteStartTime - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;                                                    //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
@property (assign,getter=isClientInitiatedPrepareSettings,nonatomic) BOOL clientInitiatedPrepareSettings;              //@synthesize clientInitiatedPrepareSettings=_clientInitiatedPrepareSettings - In the implementation block
@property (assign,getter=isUserInitiatedRequestSettings,nonatomic) BOOL userInitiatedRequestSettings;                  //@synthesize userInitiatedRequestSettings=_userInitiatedRequestSettings - In the implementation block
@property (assign,getter=isBeginMomentCaptureSettings,nonatomic) BOOL beginMomentCaptureSettings;                      //@synthesize beginMomentCaptureSettings=_beginMomentCaptureSettings - In the implementation block
@property (assign,nonatomic) float videoStabilizationOverscanCropMultiplier;                                           //@synthesize videoStabilizationOverscanCropMultiplier=_videoStabilizationOverscanCropMultiplier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFlashMode:(int)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(int)flashMode;
-(BOOL)depthDataDeliveryEnabled;
-(void)setHDRMode:(int)arg1 ;
-(void)setScaleFactor:(float)arg1 ;
-(void)setSettingsProvider:(int)arg1 ;
-(float)scaleFactor;
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)outputWidth;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(unsigned)outputHeight;
-(float*)ISOs;
-(int)outputFileType;
-(int)qualityPrioritization;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(NSArray *)bravoConstituentImageDeliveryDeviceTypes;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)previewEnabled;
-(BOOL)autoRedEyeReductionEnabled;
-(unsigned)outputFormat;
-(void)setOutputFileType:(int)arg1 ;
-(BOOL)depthDataFiltered;
-(BOOL)cameraCalibrationDataDeliveryEnabled;
-(BOOL)squareCropEnabled;
-(BOOL)burstQualityCaptureEnabled;
-(unsigned)shutterSound;
-(BOOL)autoDeferredProcessingEnabled;
-(NSDictionary *)spatialOverCaptureMetadata;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)enabledSemanticSegmentationMatteURNs;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(int)payloadType;
-(void)setPayloadType:(int)arg1 ;
-(void)setSpatialOverCaptureMetadata:(NSDictionary *)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setAutoDeferredProcessingEnabled:(BOOL)arg1 ;
-(void)setBravoConstituentImageDeliveryDeviceTypes:(NSArray *)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setEnabledSemanticSegmentationMatteURNs:(NSArray *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(float)simulatedAperture;
-(int)HDRMode;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(NSString *)captureRequestIdentifier;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)setVideoStabilizationOverscanCropMultiplier:(float)arg1 ;
-(id)description;
-(float)portraitLightingEffectStrength;
-(float)videoStabilizationOverscanCropMultiplier;
-(void)setQualityPrioritization:(int)arg1 ;
-(void)setRawOutputFileType:(int)arg1 ;
-(void)setThumbnailEnabled:(BOOL)arg1 ;
-(BOOL)thumbnailEnabled;
-(void)setThumbnailWidth:(unsigned)arg1 ;
-(void)setThumbnailHeight:(unsigned)arg1 ;
-(void)setThumbnailFormat:(unsigned)arg1 ;
-(void)setRawThumbnailEnabled:(BOOL)arg1 ;
-(BOOL)rawThumbnailEnabled;
-(int)rawOutputFileType;
-(void)setRawThumbnailWidth:(unsigned)arg1 ;
-(void)setRawThumbnailHeight:(unsigned)arg1 ;
-(void)setRawThumbnailFormat:(unsigned)arg1 ;
-(void)setProvidesOriginalImage:(BOOL)arg1 ;
-(void)setEmbedsDepthDataInImage:(BOOL)arg1 ;
-(void)setEmbedsPortraitEffectsMatteInImage:(BOOL)arg1 ;
-(void)setEmbedsSemanticSegmentationMattesInImage:(BOOL)arg1 ;
-(void)setMetadataForOriginalImage:(NSDictionary *)arg1 ;
-(void)setOriginalImageFilters:(NSArray *)arg1 ;
-(void)setProcessedImageFilters:(NSArray *)arg1 ;
-(BOOL)providesOriginalImage;
-(void)setSpatialOverCaptureMetadataForOriginalImage:(NSDictionary *)arg1 ;
-(BOOL)portraitEffectsMatteDeliveryEnabled;
-(void)setZoomWithoutUpscalingEnabled:(BOOL)arg1 ;
-(void)setAutoIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setStillImageUserInitiatedRequestTime:(unsigned long long)arg1 ;
-(unsigned)rawOutputFormat;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)thumbnailWidth;
-(BOOL)noiseReductionEnabled;
-(long long)settingsID;
-(id)initWithSettingsID:(long long)arg1 ;
-(void)setOutputMirroring:(BOOL)arg1 ;
-(void)setOutputOrientation:(int)arg1 ;
-(void)setPreviewWidth:(unsigned)arg1 ;
-(void)setPreviewHeight:(unsigned)arg1 ;
-(void)setPreviewFormat:(unsigned)arg1 ;
-(BOOL)outputMirroring;
-(void)setPreviewMirroring:(BOOL)arg1 ;
-(int)outputOrientation;
-(void)setPreviewOrientation:(int)arg1 ;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setWideColorMode:(int)arg1 ;
-(void)setBravoImageFusionMode:(int)arg1 ;
-(void)setVtCompressionProperties:(NSDictionary *)arg1 ;
-(unsigned)bracketImageCount;
-(NSString *)imageGroupIdentifier;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(void)setLensStabilizationDuringBracketEnabled:(BOOL)arg1 ;
-(void)setBracketType:(int)arg1 imageCount:(unsigned)arg2 ;
-(SCD_Struct_BW8*)exposureDurations;
-(float*)exposureTargetBiases;
-(int)digitalFlashMode;
-(int)settingsProvider;
-(long long)stillImageRequestTime;
-(NSDictionary *)metadata;
-(unsigned)previewWidth;
-(unsigned)previewHeight;
-(unsigned)thumbnailFormat;
-(unsigned)thumbnailHeight;
-(BOOL)embedsDepthDataInImage;
-(BOOL)embedsPortraitEffectsMatteInImage;
-(BOOL)embedsSemanticSegmentationMattesInImage;
-(NSDictionary *)vtCompressionProperties;
-(void)setSimulatedAperture:(float)arg1 ;
-(int)bracketType;
-(unsigned)previewFormat;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOutputFormatCompressed;
-(unsigned)rawThumbnailWidth;
-(unsigned)rawThumbnailHeight;
-(id)_initWithSettingsID:(long long)arg1 captureRequestIdentifier:(id)arg2 imageGroupIdentifier:(id)arg3 ;
-(void)_teardownBracketStorage;
-(void)setStillImageUserInitiatedRequestPTS:(SCD_Struct_BW8)arg1 ;
-(void)setStillImageCaptureStartTime:(long long)arg1 ;
-(void)setStillImageCaptureAbsoluteStartTime:(double)arg1 ;
-(BOOL)previewMirroring;
-(void)setImageGroupIdentifier:(NSString *)arg1 ;
-(void)setClientInitiatedPrepareSettings:(BOOL)arg1 ;
-(void)setUserInitiatedRequestSettings:(BOOL)arg1 ;
-(int)previewOrientation;
-(unsigned)rawThumbnailFormat;
-(BOOL)isZoomWithoutUpscalingEnabled;
-(int)wideColorMode;
-(NSDictionary *)metadataForOriginalImage;
-(NSArray *)originalImageFilters;
-(NSArray *)processedImageFilters;
-(NSDictionary *)spatialOverCaptureMetadataForOriginalImage;
-(int)bravoImageFusionMode;
-(BOOL)autoIntelligentDistortionCorrectionEnabled;
-(BOOL)lensStabilizationDuringBracketEnabled;
-(unsigned long long)stillImageUserInitiatedRequestTime;
-(SCD_Struct_BW8)stillImageUserInitiatedRequestPTS;
-(long long)stillImageCaptureStartTime;
-(double)stillImageCaptureAbsoluteStartTime;
-(BOOL)isClientInitiatedPrepareSettings;
-(BOOL)isUserInitiatedRequestSettings;
-(NSDictionary *)outputPixelBufferAttributes;
-(NSDictionary *)previewPixelBufferAttributes;
-(id)figCaptureIrisPreparedSettingsRepresentation;
-(BOOL)isBeginMomentCaptureSettings;
-(void)setBeginMomentCaptureSettings:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOutputHeight:(unsigned)arg1 ;
@end

