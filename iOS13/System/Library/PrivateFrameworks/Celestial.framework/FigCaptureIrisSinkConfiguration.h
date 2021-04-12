/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings, NSArray;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _movieCaptureEnabled;
	SCD_Struct_BW2 _movieDuration;
	SCD_Struct_BW2 _movieVideoFrameDuration;
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
	int _maxQualityPrioritization;
	BOOL _deferredProcessingEnabled;
	BOOL _digitalFlashCaptureEnabled;
	BOOL _irisFrameHarvestingEnabled;

}

@property (assign,nonatomic) BOOL irisMovieCaptureEnabled;                                       //@synthesize movieCaptureEnabled=_movieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieDuration;                                   //@synthesize movieDuration=_movieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieVideoFrameDuration;                         //@synthesize movieVideoFrameDuration=_movieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                        //@synthesize movieAutoTrimMethod=_movieAutoTrimMethod - In the implementation block
@property (assign,nonatomic) BOOL irisFrameHarvestingEnabled;                                    //@synthesize irisFrameHarvestingEnabled=_irisFrameHarvestingEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureIrisPreparedSettings * irisPreparedSettings;              //@synthesize preparedSettings=_preparedSettings - In the implementation block
@property (assign,nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;                   //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;                                   //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                      //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                           //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (nonatomic,retain) NSArray * enabledSemanticSegmentationMatteURNs;                     //@synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs - In the implementation block
@property (assign,nonatomic) BOOL filterRenderingEnabled;                                        //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled;                          //@synthesize bravoConstituentPhotoDeliveryEnabled=_bravoConstituentPhotoDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;                            //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) int maxQualityPrioritization;                                       //@synthesize maxQualityPrioritization=_maxQualityPrioritization - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                                     //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (assign,nonatomic) BOOL digitalFlashCaptureEnabled;                                    //@synthesize digitalFlashCaptureEnabled=_digitalFlashCaptureEnabled - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(BOOL)portraitEffectsMatteDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(void)setIrisMovieCaptureEnabled:(BOOL)arg1 ;
-(BOOL)irisMovieCaptureEnabled;
-(void)setIrisMovieDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setIrisPreparedSettings:(FigCaptureIrisPreparedSettings *)arg1 ;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(void)setEnabledSemanticSegmentationMatteURNs:(NSArray *)arg1 ;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setBravoConstituentPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
-(void)setMaxQualityPrioritization:(int)arg1 ;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(void)setDigitalFlashCaptureEnabled:(BOOL)arg1 ;
-(BOOL)filterRenderingEnabled;
-(BOOL)digitalFlashCaptureEnabled;
-(BOOL)deferredProcessingEnabled;
-(NSArray *)enabledSemanticSegmentationMatteURNs;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(SCD_Struct_BW2)irisMovieVideoFrameDuration;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(FigCaptureIrisPreparedSettings *)irisPreparedSettings;
-(int)irisMovieAutoTrimMethod;
-(int)maxQualityPrioritization;
-(BOOL)bravoConstituentPhotoDeliveryEnabled;
-(BOOL)quadraHighResCaptureEnabled;
-(BOOL)irisFrameHarvestingEnabled;
-(SCD_Struct_BW2)irisMovieDuration;
-(void)setIrisFrameHarvestingEnabled:(BOOL)arg1 ;
@end

