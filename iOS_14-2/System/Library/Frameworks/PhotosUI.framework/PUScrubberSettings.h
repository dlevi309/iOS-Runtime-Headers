/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUScrubberSettings : PXSettings {

	BOOL _usePreviewScrubberMargins;
	BOOL _useTrianglePositionIndicator;
	BOOL _useSmoothingAnimation;
	BOOL _dynamicSeekTolerance;
	unsigned long long _previewInteractiveLoupeBehavior;
	unsigned long long _interactiveLoupeBehavior;
	double _tapAnimationDuration;
	double _smoothingAnimationDuration;
	double _settleAnimationDuration;
	double _settleRequiredDecelerationDistance;
	double _decelerationTargetExpansionDistance;
	double _verticalMargin;
	double _topOutset;
	double _slitAspectRatio;
	double _maxAspectRatio;
	double _interItemSpacing;
	double _interSectionSpacing;
	double _minVideoDuration;
	double _baseVideoWidth;
	double _filmstripAspectRatio;
	long long _defaultPlaybackIndicator;
	long long _initialPlaybackIndicator;
	long long _scrubbingPlaybackIndicator;
	long long _chromeShownPlaybackIndicator;
	long long _playingPlaybackIndicator;

}

@property (assign,nonatomic) unsigned long long previewInteractiveLoupeBehavior;              //@synthesize previewInteractiveLoupeBehavior=_previewInteractiveLoupeBehavior - In the implementation block
@property (assign,nonatomic) BOOL usePreviewScrubberMargins;                                  //@synthesize usePreviewScrubberMargins=_usePreviewScrubberMargins - In the implementation block
@property (assign,nonatomic) BOOL useTrianglePositionIndicator;                               //@synthesize useTrianglePositionIndicator=_useTrianglePositionIndicator - In the implementation block
@property (assign,nonatomic) unsigned long long interactiveLoupeBehavior;                     //@synthesize interactiveLoupeBehavior=_interactiveLoupeBehavior - In the implementation block
@property (assign,nonatomic) double tapAnimationDuration;                                     //@synthesize tapAnimationDuration=_tapAnimationDuration - In the implementation block
@property (assign,nonatomic) double smoothingAnimationDuration;                               //@synthesize smoothingAnimationDuration=_smoothingAnimationDuration - In the implementation block
@property (assign,nonatomic) double settleAnimationDuration;                                  //@synthesize settleAnimationDuration=_settleAnimationDuration - In the implementation block
@property (assign,nonatomic) double settleRequiredDecelerationDistance;                       //@synthesize settleRequiredDecelerationDistance=_settleRequiredDecelerationDistance - In the implementation block
@property (assign,nonatomic) double decelerationTargetExpansionDistance;                      //@synthesize decelerationTargetExpansionDistance=_decelerationTargetExpansionDistance - In the implementation block
@property (assign,nonatomic) double verticalMargin;                                           //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (assign,nonatomic) double topOutset;                                                //@synthesize topOutset=_topOutset - In the implementation block
@property (assign,nonatomic) double slitAspectRatio;                                          //@synthesize slitAspectRatio=_slitAspectRatio - In the implementation block
@property (assign,nonatomic) double maxAspectRatio;                                           //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                                         //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                      //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (assign,nonatomic) BOOL useSmoothingAnimation;                                      //@synthesize useSmoothingAnimation=_useSmoothingAnimation - In the implementation block
@property (assign,nonatomic) double minVideoDuration;                                         //@synthesize minVideoDuration=_minVideoDuration - In the implementation block
@property (assign,nonatomic) double baseVideoWidth;                                           //@synthesize baseVideoWidth=_baseVideoWidth - In the implementation block
@property (assign,nonatomic) double filmstripAspectRatio;                                     //@synthesize filmstripAspectRatio=_filmstripAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL dynamicSeekTolerance;                                       //@synthesize dynamicSeekTolerance=_dynamicSeekTolerance - In the implementation block
@property (assign,nonatomic) long long defaultPlaybackIndicator;                              //@synthesize defaultPlaybackIndicator=_defaultPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long initialPlaybackIndicator;                              //@synthesize initialPlaybackIndicator=_initialPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long scrubbingPlaybackIndicator;                            //@synthesize scrubbingPlaybackIndicator=_scrubbingPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long chromeShownPlaybackIndicator;                          //@synthesize chromeShownPlaybackIndicator=_chromeShownPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long playingPlaybackIndicator;                              //@synthesize playingPlaybackIndicator=_playingPlaybackIndicator - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(double)topOutset;
-(double)interItemSpacing;
-(double)baseVideoWidth;
-(void)setDefaultValues;
-(void)setDecelerationTargetExpansionDistance:(double)arg1 ;
-(void)setInterItemSpacing:(double)arg1 ;
-(void)setTapAnimationDuration:(double)arg1 ;
-(double)smoothingAnimationDuration;
-(double)tapAnimationDuration;
-(void)setSlitAspectRatio:(double)arg1 ;
-(double)minVideoDuration;
-(double)verticalMargin;
-(void)setDynamicSeekTolerance:(BOOL)arg1 ;
-(BOOL)useSmoothingAnimation;
-(BOOL)dynamicSeekTolerance;
-(void)setSettleAnimationDuration:(double)arg1 ;
-(void)setInitialPlaybackIndicator:(long long)arg1 ;
-(void)setUsePreviewScrubberMargins:(BOOL)arg1 ;
-(void)setSmoothingAnimationDuration:(double)arg1 ;
-(long long)playingPlaybackIndicator;
-(void)setSettleRequiredDecelerationDistance:(double)arg1 ;
-(double)decelerationTargetExpansionDistance;
-(long long)chromeShownPlaybackIndicator;
-(void)setPlayingPlaybackIndicator:(long long)arg1 ;
-(double)interSectionSpacing;
-(unsigned long long)previewInteractiveLoupeBehavior;
-(void)setBaseVideoWidth:(double)arg1 ;
-(void)setInterSectionSpacing:(double)arg1 ;
-(void)setDefaultPlaybackIndicator:(long long)arg1 ;
-(void)setUseTrianglePositionIndicator:(BOOL)arg1 ;
-(double)maxAspectRatio;
-(void)setVerticalMargin:(double)arg1 ;
-(void)setMaxAspectRatio:(double)arg1 ;
-(long long)scrubbingPlaybackIndicator;
-(void)setMinVideoDuration:(double)arg1 ;
-(unsigned long long)interactiveLoupeBehavior;
-(long long)initialPlaybackIndicator;
-(double)settleAnimationDuration;
-(void)setPreviewInteractiveLoupeBehavior:(unsigned long long)arg1 ;
-(BOOL)useTrianglePositionIndicator;
-(long long)defaultPlaybackIndicator;
-(void)setScrubbingPlaybackIndicator:(long long)arg1 ;
-(double)filmstripAspectRatio;
-(double)settleRequiredDecelerationDistance;
-(void)setInteractiveLoupeBehavior:(unsigned long long)arg1 ;
-(void)setUseSmoothingAnimation:(BOOL)arg1 ;
-(BOOL)usePreviewScrubberMargins;
-(void)setFilmstripAspectRatio:(double)arg1 ;
-(void)setChromeShownPlaybackIndicator:(long long)arg1 ;
-(double)slitAspectRatio;
-(void)setTopOutset:(double)arg1 ;
@end

