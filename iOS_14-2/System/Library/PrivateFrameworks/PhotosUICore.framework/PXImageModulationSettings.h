/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXImageModulationSettings : PXSettings {

	BOOL _enabled;
	BOOL _gainMapEnabled;
	BOOL _showGainMapBorder;
	BOOL _animateGainMapAppearance;
	BOOL _useThresholdForVideos;
	BOOL _forceCurrentScreenSupportsHDR;
	float _gainMapFaceMaxStops;
	float _gainMapFaceKneeStops;
	float _gainMapFaceKnee;
	float _gainMapFaceMinStops;
	float _gainMapMaxStops;
	float _gainMapKneeStops;
	float _gainMapKnee;
	float _gainMapMinStops;
	long long _filterType;
	long long _HDRConsideration;
	double _gainMapAnimationDuration;
	NSString* _gainMapAnimationTimingFunction;
	double _gainMapAnimationActivationThreshold;
	double _HDRModulationIntensity;
	double _SDRModulationIntensity;
	double _videoComplementModulationIntensity;
	long long _EDRHeadroomRequestScheme;
	long long _EDRHeadroomUsageScheme;
	double _manualEDRHeadroomRequestStops;
	double _EDRHeadroomRequestHDRThreshold;
	double _EDRHeadroomRequestSustainDuration;
	double _lowEDRRequestedHeadroomStops;
	double _highEDRRequestedHeadroomStops;
	double _deviceMaximumEDRHeadroomStops;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long filterType;                                                    //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) long long HDRConsideration;                                              //@synthesize HDRConsideration=_HDRConsideration - In the implementation block
@property (assign,nonatomic) BOOL gainMapEnabled;                                                     //@synthesize gainMapEnabled=_gainMapEnabled - In the implementation block
@property (assign,nonatomic) BOOL showGainMapBorder;                                                  //@synthesize showGainMapBorder=_showGainMapBorder - In the implementation block
@property (assign,nonatomic) BOOL animateGainMapAppearance;                                           //@synthesize animateGainMapAppearance=_animateGainMapAppearance - In the implementation block
@property (assign,nonatomic) double gainMapAnimationDuration;                                         //@synthesize gainMapAnimationDuration=_gainMapAnimationDuration - In the implementation block
@property (nonatomic,copy) NSString * gainMapAnimationTimingFunction;                                 //@synthesize gainMapAnimationTimingFunction=_gainMapAnimationTimingFunction - In the implementation block
@property (assign,nonatomic) double gainMapAnimationActivationThreshold;                              //@synthesize gainMapAnimationActivationThreshold=_gainMapAnimationActivationThreshold - In the implementation block
@property (assign,nonatomic) double HDRModulationIntensity;                                           //@synthesize HDRModulationIntensity=_HDRModulationIntensity - In the implementation block
@property (assign,setter=DRModulationIntensity,nonatomic) double SDRModulationIntensity;              //@synthesize SDRModulationIntensity=_SDRModulationIntensity - In the implementation block
@property (assign,nonatomic) double videoComplementModulationIntensity;                               //@synthesize videoComplementModulationIntensity=_videoComplementModulationIntensity - In the implementation block
@property (assign,nonatomic) long long EDRHeadroomRequestScheme;                                      //@synthesize EDRHeadroomRequestScheme=_EDRHeadroomRequestScheme - In the implementation block
@property (assign,nonatomic) BOOL useThresholdForVideos;                                              //@synthesize useThresholdForVideos=_useThresholdForVideos - In the implementation block
@property (assign,nonatomic) long long EDRHeadroomUsageScheme;                                        //@synthesize EDRHeadroomUsageScheme=_EDRHeadroomUsageScheme - In the implementation block
@property (assign,nonatomic) double manualEDRHeadroomRequestStops;                                    //@synthesize manualEDRHeadroomRequestStops=_manualEDRHeadroomRequestStops - In the implementation block
@property (assign,nonatomic) double EDRHeadroomRequestHDRThreshold;                                   //@synthesize EDRHeadroomRequestHDRThreshold=_EDRHeadroomRequestHDRThreshold - In the implementation block
@property (assign,nonatomic) double EDRHeadroomRequestSustainDuration;                                //@synthesize EDRHeadroomRequestSustainDuration=_EDRHeadroomRequestSustainDuration - In the implementation block
@property (assign,nonatomic) double lowEDRRequestedHeadroomStops;                                     //@synthesize lowEDRRequestedHeadroomStops=_lowEDRRequestedHeadroomStops - In the implementation block
@property (assign,nonatomic) double highEDRRequestedHeadroomStops;                                    //@synthesize highEDRRequestedHeadroomStops=_highEDRRequestedHeadroomStops - In the implementation block
@property (assign,nonatomic) double deviceMaximumEDRHeadroomStops;                                    //@synthesize deviceMaximumEDRHeadroomStops=_deviceMaximumEDRHeadroomStops - In the implementation block
@property (assign,nonatomic) BOOL forceCurrentScreenSupportsHDR;                                      //@synthesize forceCurrentScreenSupportsHDR=_forceCurrentScreenSupportsHDR - In the implementation block
@property (assign,nonatomic) float gainMapFaceMaxStops;                                               //@synthesize gainMapFaceMaxStops=_gainMapFaceMaxStops - In the implementation block
@property (assign,nonatomic) float gainMapFaceKneeStops;                                              //@synthesize gainMapFaceKneeStops=_gainMapFaceKneeStops - In the implementation block
@property (assign,nonatomic) float gainMapFaceKnee;                                                   //@synthesize gainMapFaceKnee=_gainMapFaceKnee - In the implementation block
@property (assign,nonatomic) float gainMapFaceMinStops;                                               //@synthesize gainMapFaceMinStops=_gainMapFaceMinStops - In the implementation block
@property (assign,nonatomic) float gainMapMaxStops;                                                   //@synthesize gainMapMaxStops=_gainMapMaxStops - In the implementation block
@property (assign,nonatomic) float gainMapKneeStops;                                                  //@synthesize gainMapKneeStops=_gainMapKneeStops - In the implementation block
@property (assign,nonatomic) float gainMapKnee;                                                       //@synthesize gainMapKnee=_gainMapKnee - In the implementation block
@property (assign,nonatomic) float gainMapMinStops;                                                   //@synthesize gainMapMinStops=_gainMapMinStops - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setGainMapFaceMinStops:(float)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(BOOL)showGainMapBorder;
-(float)gainMapFaceKnee;
-(void)setGainMapAnimationDuration:(double)arg1 ;
-(void)setGainMapKneeStops:(float)arg1 ;
-(void)setVideoComplementModulationIntensity:(double)arg1 ;
-(void)setHDRConsideration:(long long)arg1 ;
-(double)lowEDRRequestedHeadroomStops;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAnimateGainMapAppearance:(BOOL)arg1 ;
-(double)videoComplementModulationIntensity;
-(void)setGainMapKnee:(float)arg1 ;
-(double)gainMapAnimationDuration;
-(void)setDeviceMaximumEDRHeadroomStops:(double)arg1 ;
-(void)setEDRHeadroomRequestSustainDuration:(double)arg1 ;
-(void)setShowGainMapBorder:(BOOL)arg1 ;
-(void)setEDRHeadroomRequestScheme:(long long)arg1 ;
-(float)gainMapFaceMaxStops;
-(void)setManualEDRHeadroomRequestStops:(double)arg1 ;
-(long long)HDRConsideration;
-(double)SDRModulationIntensity;
-(float)gainMapKnee;
-(double)EDRHeadroomRequestSustainDuration;
-(void)setLowEDRRequestedHeadroomStops:(double)arg1 ;
-(void)setSDRModulationIntensity:(double)arg1 ;
-(float)gainMapMinStops;
-(float)gainMapFaceKneeStops;
-(double)deviceMaximumEDRHeadroomStops;
-(NSString *)gainMapAnimationTimingFunction;
-(BOOL)animateGainMapAppearance;
-(float)gainMapFaceMinStops;
-(void)setHDRModulationIntensity:(double)arg1 ;
-(void)setHighEDRRequestedHeadroomStops:(double)arg1 ;
-(double)manualEDRHeadroomRequestStops;
-(float)gainMapKneeStops;
-(void)setGainMapAnimationTimingFunction:(NSString *)arg1 ;
-(long long)EDRHeadroomUsageScheme;
-(void)setGainMapMaxStops:(float)arg1 ;
-(double)gainMapAnimationActivationThreshold;
-(double)HDRModulationIntensity;
-(float)gainMapMaxStops;
-(void)setGainMapMinStops:(float)arg1 ;
-(BOOL)useThresholdForVideos;
-(BOOL)isEnabled;
-(double)highEDRRequestedHeadroomStops;
-(void)setGainMapFaceKneeStops:(float)arg1 ;
-(long long)EDRHeadroomRequestScheme;
-(void)setEDRHeadroomRequestHDRThreshold:(double)arg1 ;
-(void)setUseThresholdForVideos:(BOOL)arg1 ;
-(void)setEDRHeadroomUsageScheme:(long long)arg1 ;
-(void)setForceCurrentScreenSupportsHDR:(BOOL)arg1 ;
-(BOOL)forceCurrentScreenSupportsHDR;
-(void)setGainMapAnimationActivationThreshold:(double)arg1 ;
-(void)setGainMapFaceKnee:(float)arg1 ;
-(double)EDRHeadroomRequestHDRThreshold;
-(void)setGainMapFaceMaxStops:(float)arg1 ;
-(void)setGainMapEnabled:(BOOL)arg1 ;
-(BOOL)gainMapEnabled;
@end

