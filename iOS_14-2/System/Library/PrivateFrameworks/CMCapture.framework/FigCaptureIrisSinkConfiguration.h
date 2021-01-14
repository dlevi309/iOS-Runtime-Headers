/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings, NSArray;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _movieCaptureEnabled;
	SCD_Struct_BW8 _movieDuration;
	SCD_Struct_BW8 _movieVideoFrameDuration;
	int _movieAutoTrimMethod;
	FigCaptureIrisPreparedSettings* _preparedSettings;
	BOOL _optimizesImagesForOfflineVideoStabilization;
	BOOL _quadraHighResCaptureEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _portraitEffectsMatteDeliveryEnabled;
	NSArray* _enabledSemanticSegmentationMatteURNs;
	BOOL _filterRenderingEnabled;
	BOOL _bravoConstituentPhotoDeliveryEnabled;
	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _spatialOverCaptureEnabled;
	int _maxQualityPrioritization;
	BOOL _deferredProcessingEnabled;
	BOOL _digitalFlashCaptureEnabled;
	BOOL _intelligentDistortionCorrectionEnabled;
	BOOL _previewQualityAdjustedPhotoFilterRenderingEnabled;
	BOOL _fastCapturePrioritizationEnabled;
	BOOL _irisFrameHarvestingEnabled;

}

@property (assign,nonatomic) BOOL irisMovieCaptureEnabled;                                        //@synthesize movieCaptureEnabled=_movieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 irisMovieDuration;                                    //@synthesize movieDuration=_movieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 irisMovieVideoFrameDuration;                          //@synthesize movieVideoFrameDuration=_movieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                         //@synthesize movieAutoTrimMethod=_movieAutoTrimMethod - In the implementation block
@property (assign,nonatomic) BOOL irisFrameHarvestingEnabled;                                     //@synthesize irisFrameHarvestingEnabled=_irisFrameHarvestingEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureIrisPreparedSettings * irisPreparedSettings;               //@synthesize preparedSettings=_preparedSettings - In the implementation block
@property (assign,nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;                    //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;                                    //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                       //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                            //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (nonatomic,retain) NSArray * enabledSemanticSegmentationMatteURNs;                      //@synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs - In the implementation block
@property (assign,nonatomic) BOOL filterRenderingEnabled;                                         //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled;                           //@synthesize bravoConstituentPhotoDeliveryEnabled=_bravoConstituentPhotoDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;                             //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL spatialOverCaptureEnabled;                                      //@synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) int maxQualityPrioritization;                                        //@synthesize maxQualityPrioritization=_maxQualityPrioritization - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                                      //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (assign,nonatomic) BOOL digitalFlashCaptureEnabled;                                     //@synthesize digitalFlashCaptureEnabled=_digitalFlashCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;                         //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewQualityAdjustedPhotoFilterRenderingEnabled;              //@synthesize previewQualityAdjustedPhotoFilterRenderingEnabled=_previewQualityAdjustedPhotoFilterRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL fastCapturePrioritizationEnabled;                               //@synthesize fastCapturePrioritizationEnabled=_fastCapturePrioritizationEnabled - In the implementation block
-(void)setBravoConstituentPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)bravoConstituentPhotoDeliveryEnabled;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)deferredProcessingEnabled;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)spatialOverCaptureEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(BOOL)fastCapturePrioritizationEnabled;
-(BOOL)filterRenderingEnabled;
-(BOOL)digitalFlashCaptureEnabled;
-(NSArray *)enabledSemanticSegmentationMatteURNs;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
-(void)setEnabledSemanticSegmentationMatteURNs:(NSArray *)arg1 ;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(SCD_Struct_BW8)irisMovieVideoFrameDuration;
-(void)setIrisFrameHarvestingEnabled:(BOOL)arg1 ;
-(id)description;
-(int)irisMovieAutoTrimMethod;
-(BOOL)irisMovieCaptureEnabled;
-(void)setPreviewQualityAdjustedPhotoFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setIrisMovieCaptureEnabled:(BOOL)arg1 ;
-(BOOL)portraitEffectsMatteDeliveryEnabled;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg1 ;
-(BOOL)quadraHighResCaptureEnabled;
-(BOOL)irisFrameHarvestingEnabled;
-(void)setIrisMovieDuration:(SCD_Struct_BW8)arg1 ;
-(void)setDigitalFlashCaptureEnabled:(BOOL)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(FigCaptureIrisPreparedSettings *)irisPreparedSettings;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_BW8)arg1 ;
-(void)setIrisPreparedSettings:(FigCaptureIrisPreparedSettings *)arg1 ;
-(int)maxQualityPrioritization;
-(void)setMaxQualityPrioritization:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(SCD_Struct_BW8)irisMovieDuration;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)previewQualityAdjustedPhotoFilterRenderingEnabled;
-(void)dealloc;
@end

