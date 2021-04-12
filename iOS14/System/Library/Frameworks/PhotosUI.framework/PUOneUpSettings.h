/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@class NSNumber, PUScrubberSettings, NSString;

@interface PUOneUpSettings : PXSettings <PXPreferencesObserver> {

	NSNumber* _cachedAutoplayVideoEnabled;
	BOOL _showInitialDetailsIndicator;
	BOOL _enableSuggestionsAnalysis;
	BOOL _initialDetailsIndicatorShouldSlideIn;
	BOOL _allowUserTransform;
	BOOL _allowBadges;
	BOOL _allowScrubber;
	BOOL _allowChromeHiding;
	BOOL _allowDoubleTapZoom;
	BOOL _allowFullsizeJPEGDisplay;
	BOOL _allowToggleOriginalBarItem;
	BOOL _showSaliencyRects;
	BOOL _showFacesRect;
	BOOL _showPaddedFacesRect;
	BOOL _showBestSquareRect;
	BOOL _showToggleCTMButton;
	BOOL _showGainMapButton;
	BOOL _hideToolbarWhenShowingAccessoryView;
	BOOL _useGlobalDetailsVisibility;
	BOOL _useGlobalCommentsVisibility;
	BOOL _persistChromeVisibility;
	BOOL _allowParallax;
	BOOL _allowStatusBar;
	BOOL _doubleTapZoomAreaExcludesBars;
	BOOL _doubleTapZoomAreaExcludesBackground;
	BOOL _enableFigPhotoTiledLayer;
	BOOL _useURLForLargePhotosWithFigPhotoTiledLayer;
	BOOL _forceURLWithFigPhotoTiledLayer;
	BOOL _enableFigPhotoBackgroundSizeBasedDisplay;
	BOOL _simulateWorstCaseFigPhotoBackgroundSize;
	BOOL _autoplayVideo;
	BOOL _unmuteOnChromeHide;
	BOOL _allowPlayButtonInBars;
	BOOL _videoRemuteOnBackgrounding;
	BOOL _videoShowDebugBorders;
	BOOL _applyPerspectiveTransformDuringVitality;
	BOOL _lockScrollDuringLivePhotoPlayback;
	BOOL _livePhotoScrubberShowForPlayback;
	BOOL _shouldMergeOverlappingLivePhotos;
	BOOL _showOffBadgeForDisabledLivePhotos;
	BOOL _showReframedBadge;
	BOOL _allowGIFPlayback;
	BOOL _showGIFLoadingDelays;
	BOOL _simulateAssetContentLoading;
	BOOL _simulateLoadingError;
	BOOL _showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls;
	BOOL _useDebuggingColors;
	BOOL _useDebuggingProgressLabel;
	BOOL _showBufferingIndicatorDuringPlay;
	BOOL _showLoadingIndicatorDuringDownload;
	BOOL _alwaysShowRenderIndicator;
	BOOL _alwaysShowAirPlayButton;
	long long _suggestionsStyle;
	long long _suggestionMaximumAssetAgeInDays;
	long long _simulatedAssetVariationSuggestion;
	double _initialDetailsIndicatorDelay;
	double _initialDetailsIndicatorDuration;
	long long _titleTapAction;
	PUScrubberSettings* _scrubberSettings;
	unsigned long long _scaleToFitBehavior;
	long long _userNavigationMaximumDistance;
	long long _accessoryViewType;
	double _accessoryInitialTopPosition;
	double _minimumVisibleContentHeight;
	double _minimumVisibleCommentedContentHeight;
	double _minimumFullCommentTitleViewWidth;
	double _chromeDefaultAnimationDuration;
	long long _chromeAutoHideBehaviorOnLivePhoto;
	long long _chromeAutoHideBehaviorOnPlayButton;
	long long _chromeAutoHideBehaviorOnSwipe;
	long long _chromeAutoHideBehaviorOnZoom;
	double _chromeAutoHideDelay;
	double _chromeTimedAutoHideAnimationDuration;
	long long _chromeAnimationType;
	long long _chromeBackgroundAnimationType;
	double _interpageSpacing;
	double _pagingSpringPullAdjustment;
	double _pagingFrictionAdjustment;
	long long _parallaxModel;
	double _parallaxFactor;
	double _barsAreaVerticalOutset;
	double _defaultZoomInFactor;
	double _doubleTapZoomFactor;
	double _videoAutoplayThreshold;
	double _videoPauseThreshold;
	double _autoplayScrubberWidth;
	double _livePhotoInteractionThreshold;
	double _livePhotoMinimumOverlappingDuration;
	unsigned long long _overlappingLivePhotosCountLimit;
	double _vitalityMaskBlur;
	double _vitalityFeatherScale;
	double _vitalityMaxAllowedInsetPoints;
	unsigned long long _viewModelCacheCountLimit;
	double _visibilityDurationForEnteringQuickPagingRegime;
	double _visibilityDurationForExitingQuickPagingRegime;
	long long _minNavigationDistanceForQuickPagingRegime;
	double _visibilityDurationForEnteringFastRegime;
	double _visibilityDurationForExitingFastRegime;
	long long _minNavigationDistanceForFastRegime;
	double _bounceDuration;
	double _bounceDelay;
	double _bounceSpringDamping;
	double _bounceInitialVelocity;
	double _playGIFSettledThreshold;
	double _playGIFEnterThreshold;
	double _playGIFMoveOutThreshold;
	double _simulatedAssetContentLoadingDuration;
	long long _simulatedLoadingErrorType;
	long long _debuggingTitleType;
	unsigned long long _debuggingBadges;
	unsigned long long _debuggingBadgesWhenFavorite;
	double _simulatedRenderProgress;

}

@property (assign,nonatomic) long long suggestionsStyle;                                                        //@synthesize suggestionsStyle=_suggestionsStyle - In the implementation block
@property (assign,nonatomic) long long suggestionMaximumAssetAgeInDays;                                         //@synthesize suggestionMaximumAssetAgeInDays=_suggestionMaximumAssetAgeInDays - In the implementation block
@property (assign,nonatomic) long long simulatedAssetVariationSuggestion;                                       //@synthesize simulatedAssetVariationSuggestion=_simulatedAssetVariationSuggestion - In the implementation block
@property (assign,nonatomic) BOOL showInitialDetailsIndicator;                                                  //@synthesize showInitialDetailsIndicator=_showInitialDetailsIndicator - In the implementation block
@property (assign,nonatomic) BOOL enableSuggestionsAnalysis;                                                    //@synthesize enableSuggestionsAnalysis=_enableSuggestionsAnalysis - In the implementation block
@property (assign,nonatomic) BOOL initialDetailsIndicatorShouldSlideIn;                                         //@synthesize initialDetailsIndicatorShouldSlideIn=_initialDetailsIndicatorShouldSlideIn - In the implementation block
@property (assign,nonatomic) double initialDetailsIndicatorDelay;                                               //@synthesize initialDetailsIndicatorDelay=_initialDetailsIndicatorDelay - In the implementation block
@property (assign,nonatomic) double initialDetailsIndicatorDuration;                                            //@synthesize initialDetailsIndicatorDuration=_initialDetailsIndicatorDuration - In the implementation block
@property (assign,nonatomic) long long titleTapAction;                                                          //@synthesize titleTapAction=_titleTapAction - In the implementation block
@property (nonatomic,retain) PUScrubberSettings * scrubberSettings;                                             //@synthesize scrubberSettings=_scrubberSettings - In the implementation block
@property (assign,nonatomic) unsigned long long scaleToFitBehavior;                                             //@synthesize scaleToFitBehavior=_scaleToFitBehavior - In the implementation block
@property (assign,nonatomic) BOOL allowUserTransform;                                                           //@synthesize allowUserTransform=_allowUserTransform - In the implementation block
@property (assign,nonatomic) BOOL allowBadges;                                                                  //@synthesize allowBadges=_allowBadges - In the implementation block
@property (assign,nonatomic) BOOL allowScrubber;                                                                //@synthesize allowScrubber=_allowScrubber - In the implementation block
@property (assign,nonatomic) BOOL allowChromeHiding;                                                            //@synthesize allowChromeHiding=_allowChromeHiding - In the implementation block
@property (assign,nonatomic) BOOL allowDoubleTapZoom;                                                           //@synthesize allowDoubleTapZoom=_allowDoubleTapZoom - In the implementation block
@property (assign,nonatomic) BOOL allowFullsizeJPEGDisplay;                                                     //@synthesize allowFullsizeJPEGDisplay=_allowFullsizeJPEGDisplay - In the implementation block
@property (assign,nonatomic) BOOL allowToggleOriginalBarItem;                                                   //@synthesize allowToggleOriginalBarItem=_allowToggleOriginalBarItem - In the implementation block
@property (assign,nonatomic) long long userNavigationMaximumDistance;                                           //@synthesize userNavigationMaximumDistance=_userNavigationMaximumDistance - In the implementation block
@property (assign,nonatomic) BOOL showSaliencyRects;                                                            //@synthesize showSaliencyRects=_showSaliencyRects - In the implementation block
@property (assign,nonatomic) BOOL showFacesRect;                                                                //@synthesize showFacesRect=_showFacesRect - In the implementation block
@property (assign,nonatomic) BOOL showPaddedFacesRect;                                                          //@synthesize showPaddedFacesRect=_showPaddedFacesRect - In the implementation block
@property (assign,nonatomic) BOOL showBestSquareRect;                                                           //@synthesize showBestSquareRect=_showBestSquareRect - In the implementation block
@property (assign,nonatomic) BOOL showToggleCTMButton;                                                          //@synthesize showToggleCTMButton=_showToggleCTMButton - In the implementation block
@property (assign,nonatomic) BOOL showGainMapButton;                                                            //@synthesize showGainMapButton=_showGainMapButton - In the implementation block
@property (assign,nonatomic) long long accessoryViewType;                                                       //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic) double accessoryInitialTopPosition;                                                //@synthesize accessoryInitialTopPosition=_accessoryInitialTopPosition - In the implementation block
@property (assign,nonatomic) double minimumVisibleContentHeight;                                                //@synthesize minimumVisibleContentHeight=_minimumVisibleContentHeight - In the implementation block
@property (assign,nonatomic) double minimumVisibleCommentedContentHeight;                                       //@synthesize minimumVisibleCommentedContentHeight=_minimumVisibleCommentedContentHeight - In the implementation block
@property (assign,nonatomic) double minimumFullCommentTitleViewWidth;                                           //@synthesize minimumFullCommentTitleViewWidth=_minimumFullCommentTitleViewWidth - In the implementation block
@property (assign,nonatomic) BOOL hideToolbarWhenShowingAccessoryView;                                          //@synthesize hideToolbarWhenShowingAccessoryView=_hideToolbarWhenShowingAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL useGlobalDetailsVisibility;                                                   //@synthesize useGlobalDetailsVisibility=_useGlobalDetailsVisibility - In the implementation block
@property (assign,nonatomic) BOOL useGlobalCommentsVisibility;                                                  //@synthesize useGlobalCommentsVisibility=_useGlobalCommentsVisibility - In the implementation block
@property (assign,nonatomic) double chromeDefaultAnimationDuration;                                             //@synthesize chromeDefaultAnimationDuration=_chromeDefaultAnimationDuration - In the implementation block
@property (assign,nonatomic) long long chromeAutoHideBehaviorOnLivePhoto;                                       //@synthesize chromeAutoHideBehaviorOnLivePhoto=_chromeAutoHideBehaviorOnLivePhoto - In the implementation block
@property (assign,nonatomic) long long chromeAutoHideBehaviorOnPlayButton;                                      //@synthesize chromeAutoHideBehaviorOnPlayButton=_chromeAutoHideBehaviorOnPlayButton - In the implementation block
@property (assign,nonatomic) long long chromeAutoHideBehaviorOnSwipe;                                           //@synthesize chromeAutoHideBehaviorOnSwipe=_chromeAutoHideBehaviorOnSwipe - In the implementation block
@property (assign,nonatomic) long long chromeAutoHideBehaviorOnZoom;                                            //@synthesize chromeAutoHideBehaviorOnZoom=_chromeAutoHideBehaviorOnZoom - In the implementation block
@property (assign,nonatomic) double chromeAutoHideDelay;                                                        //@synthesize chromeAutoHideDelay=_chromeAutoHideDelay - In the implementation block
@property (assign,nonatomic) double chromeTimedAutoHideAnimationDuration;                                       //@synthesize chromeTimedAutoHideAnimationDuration=_chromeTimedAutoHideAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL persistChromeVisibility;                                                      //@synthesize persistChromeVisibility=_persistChromeVisibility - In the implementation block
@property (assign,nonatomic) long long chromeAnimationType;                                                     //@synthesize chromeAnimationType=_chromeAnimationType - In the implementation block
@property (assign,nonatomic) long long chromeBackgroundAnimationType;                                           //@synthesize chromeBackgroundAnimationType=_chromeBackgroundAnimationType - In the implementation block
@property (assign,nonatomic) double interpageSpacing;                                                           //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (assign,nonatomic) double pagingSpringPullAdjustment;                                                 //@synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment - In the implementation block
@property (assign,nonatomic) double pagingFrictionAdjustment;                                                   //@synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment - In the implementation block
@property (assign,nonatomic) BOOL allowParallax;                                                                //@synthesize allowParallax=_allowParallax - In the implementation block
@property (assign,nonatomic) long long parallaxModel;                                                           //@synthesize parallaxModel=_parallaxModel - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                             //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) BOOL allowStatusBar;                                                               //@synthesize allowStatusBar=_allowStatusBar - In the implementation block
@property (assign,nonatomic) double barsAreaVerticalOutset;                                                     //@synthesize barsAreaVerticalOutset=_barsAreaVerticalOutset - In the implementation block
@property (assign,nonatomic) double defaultZoomInFactor;                                                        //@synthesize defaultZoomInFactor=_defaultZoomInFactor - In the implementation block
@property (assign,nonatomic) double doubleTapZoomFactor;                                                        //@synthesize doubleTapZoomFactor=_doubleTapZoomFactor - In the implementation block
@property (assign,nonatomic) BOOL doubleTapZoomAreaExcludesBars;                                                //@synthesize doubleTapZoomAreaExcludesBars=_doubleTapZoomAreaExcludesBars - In the implementation block
@property (assign,nonatomic) BOOL doubleTapZoomAreaExcludesBackground;                                          //@synthesize doubleTapZoomAreaExcludesBackground=_doubleTapZoomAreaExcludesBackground - In the implementation block
@property (assign,nonatomic) BOOL enableFigPhotoTiledLayer;                                                     //@synthesize enableFigPhotoTiledLayer=_enableFigPhotoTiledLayer - In the implementation block
@property (assign,nonatomic) BOOL useURLForLargePhotosWithFigPhotoTiledLayer;                                   //@synthesize useURLForLargePhotosWithFigPhotoTiledLayer=_useURLForLargePhotosWithFigPhotoTiledLayer - In the implementation block
@property (assign,nonatomic) BOOL forceURLWithFigPhotoTiledLayer;                                               //@synthesize forceURLWithFigPhotoTiledLayer=_forceURLWithFigPhotoTiledLayer - In the implementation block
@property (assign,nonatomic) BOOL enableFigPhotoBackgroundSizeBasedDisplay;                                     //@synthesize enableFigPhotoBackgroundSizeBasedDisplay=_enableFigPhotoBackgroundSizeBasedDisplay - In the implementation block
@property (assign,nonatomic) BOOL simulateWorstCaseFigPhotoBackgroundSize;                                      //@synthesize simulateWorstCaseFigPhotoBackgroundSize=_simulateWorstCaseFigPhotoBackgroundSize - In the implementation block
@property (assign,nonatomic) BOOL autoplayVideo;                                                                //@synthesize autoplayVideo=_autoplayVideo - In the implementation block
@property (assign,nonatomic) double videoAutoplayThreshold;                                                     //@synthesize videoAutoplayThreshold=_videoAutoplayThreshold - In the implementation block
@property (assign,nonatomic) BOOL unmuteOnChromeHide;                                                           //@synthesize unmuteOnChromeHide=_unmuteOnChromeHide - In the implementation block
@property (assign,nonatomic) BOOL allowPlayButtonInBars;                                                        //@synthesize allowPlayButtonInBars=_allowPlayButtonInBars - In the implementation block
@property (assign,nonatomic) double videoPauseThreshold;                                                        //@synthesize videoPauseThreshold=_videoPauseThreshold - In the implementation block
@property (assign,nonatomic) BOOL videoRemuteOnBackgrounding;                                                   //@synthesize videoRemuteOnBackgrounding=_videoRemuteOnBackgrounding - In the implementation block
@property (assign,nonatomic) double autoplayScrubberWidth;                                                      //@synthesize autoplayScrubberWidth=_autoplayScrubberWidth - In the implementation block
@property (assign,nonatomic) BOOL videoShowDebugBorders;                                                        //@synthesize videoShowDebugBorders=_videoShowDebugBorders - In the implementation block
@property (assign,nonatomic) double livePhotoInteractionThreshold;                                              //@synthesize livePhotoInteractionThreshold=_livePhotoInteractionThreshold - In the implementation block
@property (assign,nonatomic) BOOL applyPerspectiveTransformDuringVitality;                                      //@synthesize applyPerspectiveTransformDuringVitality=_applyPerspectiveTransformDuringVitality - In the implementation block
@property (assign,nonatomic) BOOL lockScrollDuringLivePhotoPlayback;                                            //@synthesize lockScrollDuringLivePhotoPlayback=_lockScrollDuringLivePhotoPlayback - In the implementation block
@property (assign,nonatomic) BOOL livePhotoScrubberShowForPlayback;                                             //@synthesize livePhotoScrubberShowForPlayback=_livePhotoScrubberShowForPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldMergeOverlappingLivePhotos;                                             //@synthesize shouldMergeOverlappingLivePhotos=_shouldMergeOverlappingLivePhotos - In the implementation block
@property (assign,nonatomic) double livePhotoMinimumOverlappingDuration;                                        //@synthesize livePhotoMinimumOverlappingDuration=_livePhotoMinimumOverlappingDuration - In the implementation block
@property (assign,nonatomic) unsigned long long overlappingLivePhotosCountLimit;                                //@synthesize overlappingLivePhotosCountLimit=_overlappingLivePhotosCountLimit - In the implementation block
@property (assign,nonatomic) BOOL showOffBadgeForDisabledLivePhotos;                                            //@synthesize showOffBadgeForDisabledLivePhotos=_showOffBadgeForDisabledLivePhotos - In the implementation block
@property (assign,nonatomic) double vitalityMaskBlur;                                                           //@synthesize vitalityMaskBlur=_vitalityMaskBlur - In the implementation block
@property (assign,nonatomic) double vitalityFeatherScale;                                                       //@synthesize vitalityFeatherScale=_vitalityFeatherScale - In the implementation block
@property (assign,nonatomic) double vitalityMaxAllowedInsetPoints;                                              //@synthesize vitalityMaxAllowedInsetPoints=_vitalityMaxAllowedInsetPoints - In the implementation block
@property (assign,nonatomic) BOOL showReframedBadge;                                                            //@synthesize showReframedBadge=_showReframedBadge - In the implementation block
@property (assign,nonatomic) unsigned long long viewModelCacheCountLimit;                                       //@synthesize viewModelCacheCountLimit=_viewModelCacheCountLimit - In the implementation block
@property (assign,nonatomic) double visibilityDurationForEnteringQuickPagingRegime;                             //@synthesize visibilityDurationForEnteringQuickPagingRegime=_visibilityDurationForEnteringQuickPagingRegime - In the implementation block
@property (assign,nonatomic) double visibilityDurationForExitingQuickPagingRegime;                              //@synthesize visibilityDurationForExitingQuickPagingRegime=_visibilityDurationForExitingQuickPagingRegime - In the implementation block
@property (assign,nonatomic) long long minNavigationDistanceForQuickPagingRegime;                               //@synthesize minNavigationDistanceForQuickPagingRegime=_minNavigationDistanceForQuickPagingRegime - In the implementation block
@property (assign,nonatomic) double visibilityDurationForEnteringFastRegime;                                    //@synthesize visibilityDurationForEnteringFastRegime=_visibilityDurationForEnteringFastRegime - In the implementation block
@property (assign,nonatomic) double visibilityDurationForExitingFastRegime;                                     //@synthesize visibilityDurationForExitingFastRegime=_visibilityDurationForExitingFastRegime - In the implementation block
@property (assign,nonatomic) long long minNavigationDistanceForFastRegime;                                      //@synthesize minNavigationDistanceForFastRegime=_minNavigationDistanceForFastRegime - In the implementation block
@property (assign,nonatomic) double bounceDuration;                                                             //@synthesize bounceDuration=_bounceDuration - In the implementation block
@property (assign,nonatomic) double bounceDelay;                                                                //@synthesize bounceDelay=_bounceDelay - In the implementation block
@property (assign,nonatomic) double bounceSpringDamping;                                                        //@synthesize bounceSpringDamping=_bounceSpringDamping - In the implementation block
@property (assign,nonatomic) double bounceInitialVelocity;                                                      //@synthesize bounceInitialVelocity=_bounceInitialVelocity - In the implementation block
@property (assign,nonatomic) BOOL allowGIFPlayback;                                                             //@synthesize allowGIFPlayback=_allowGIFPlayback - In the implementation block
@property (assign,nonatomic) BOOL showGIFLoadingDelays;                                                         //@synthesize showGIFLoadingDelays=_showGIFLoadingDelays - In the implementation block
@property (assign,nonatomic) double playGIFSettledThreshold;                                                    //@synthesize playGIFSettledThreshold=_playGIFSettledThreshold - In the implementation block
@property (assign,nonatomic) double playGIFEnterThreshold;                                                      //@synthesize playGIFEnterThreshold=_playGIFEnterThreshold - In the implementation block
@property (assign,nonatomic) double playGIFMoveOutThreshold;                                                    //@synthesize playGIFMoveOutThreshold=_playGIFMoveOutThreshold - In the implementation block
@property (assign,nonatomic) BOOL simulateAssetContentLoading;                                                  //@synthesize simulateAssetContentLoading=_simulateAssetContentLoading - In the implementation block
@property (assign,nonatomic) double simulatedAssetContentLoadingDuration;                                       //@synthesize simulatedAssetContentLoadingDuration=_simulatedAssetContentLoadingDuration - In the implementation block
@property (assign,nonatomic) BOOL simulateLoadingError;                                                         //@synthesize simulateLoadingError=_simulateLoadingError - In the implementation block
@property (assign,nonatomic) long long simulatedLoadingErrorType;                                               //@synthesize simulatedLoadingErrorType=_simulatedLoadingErrorType - In the implementation block
@property (assign,nonatomic) BOOL showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls;              //@synthesize showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls=_showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls - In the implementation block
@property (assign,nonatomic) BOOL useDebuggingColors;                                                           //@synthesize useDebuggingColors=_useDebuggingColors - In the implementation block
@property (assign,nonatomic) long long debuggingTitleType;                                                      //@synthesize debuggingTitleType=_debuggingTitleType - In the implementation block
@property (assign,nonatomic) unsigned long long debuggingBadges;                                                //@synthesize debuggingBadges=_debuggingBadges - In the implementation block
@property (assign,nonatomic) unsigned long long debuggingBadgesWhenFavorite;                                    //@synthesize debuggingBadgesWhenFavorite=_debuggingBadgesWhenFavorite - In the implementation block
@property (assign,nonatomic) BOOL useDebuggingProgressLabel;                                                    //@synthesize useDebuggingProgressLabel=_useDebuggingProgressLabel - In the implementation block
@property (assign,nonatomic) BOOL showBufferingIndicatorDuringPlay;                                             //@synthesize showBufferingIndicatorDuringPlay=_showBufferingIndicatorDuringPlay - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicatorDuringDownload;                                           //@synthesize showLoadingIndicatorDuringDownload=_showLoadingIndicatorDuringDownload - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowRenderIndicator;                                                    //@synthesize alwaysShowRenderIndicator=_alwaysShowRenderIndicator - In the implementation block
@property (assign,nonatomic) double simulatedRenderProgress;                                                    //@synthesize simulatedRenderProgress=_simulatedRenderProgress - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowAirPlayButton;                                                      //@synthesize alwaysShowAirPlayButton=_alwaysShowAirPlayButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)preferencesDidChange;
-(void)setDefaultValues;
-(void)setBounceSpringDamping:(double)arg1 ;
-(double)visibilityDurationForEnteringQuickPagingRegime;
-(double)chromeTimedAutoHideAnimationDuration;
-(BOOL)showGainMapButton;
-(void)setSimulateLoadingError:(BOOL)arg1 ;
-(BOOL)useGlobalCommentsVisibility;
-(void)setViewModelCacheCountLimit:(unsigned long long)arg1 ;
-(double)playGIFMoveOutThreshold;
-(BOOL)initialDetailsIndicatorShouldSlideIn;
-(double)visibilityDurationForExitingQuickPagingRegime;
-(void)setDefaultZoomInFactor:(double)arg1 ;
-(long long)chromeAutoHideBehaviorOnLivePhoto;
-(void)setAllowFullsizeJPEGDisplay:(BOOL)arg1 ;
-(BOOL)doubleTapZoomAreaExcludesBars;
-(void)setLivePhotoMinimumOverlappingDuration:(double)arg1 ;
-(void)setSimulatedRenderProgress:(double)arg1 ;
-(BOOL)useDebuggingProgressLabel;
-(void)setInitialDetailsIndicatorDuration:(double)arg1 ;
-(double)doubleTapZoomFactor;
-(void)setChromeDefaultAnimationDuration:(double)arg1 ;
-(BOOL)videoRemuteOnBackgrounding;
-(double)parallaxFactor;
-(void)setChromeAutoHideBehaviorOnZoom:(long long)arg1 ;
-(long long)accessoryViewType;
-(BOOL)showToggleCTMButton;
-(double)playGIFEnterThreshold;
-(BOOL)showLoadingIndicatorDuringDownload;
-(void)setPagingFrictionAdjustment:(double)arg1 ;
-(double)videoAutoplayThreshold;
-(BOOL)alwaysShowAirPlayButton;
-(void)setAlwaysShowAirPlayButton:(BOOL)arg1 ;
-(double)chromeAutoHideDelay;
-(void)setChromeAutoHideBehaviorOnLivePhoto:(long long)arg1 ;
-(BOOL)shouldMergeOverlappingLivePhotos;
-(void)setBounceInitialVelocity:(double)arg1 ;
-(void)setShowPaddedFacesRect:(BOOL)arg1 ;
-(void)setApplyPerspectiveTransformDuringVitality:(BOOL)arg1 ;
-(void)setSimulatedLoadingErrorType:(long long)arg1 ;
-(double)pagingSpringPullAdjustment;
-(long long)suggestionMaximumAssetAgeInDays;
-(double)playGIFSettledThreshold;
-(void)setAllowBadges:(BOOL)arg1 ;
-(void)setSimulatedAssetVariationSuggestion:(long long)arg1 ;
-(void)setAutoplayVideo:(BOOL)arg1 ;
-(void)setPlayGIFEnterThreshold:(double)arg1 ;
-(double)vitalityFeatherScale;
-(BOOL)autoplayVideo;
-(BOOL)showPaddedFacesRect;
-(double)livePhotoInteractionThreshold;
-(BOOL)enableFigPhotoTiledLayer;
-(void)setUseGlobalCommentsVisibility:(BOOL)arg1 ;
-(unsigned long long)overlappingLivePhotosCountLimit;
-(void)setAllowPlayButtonInBars:(BOOL)arg1 ;
-(void)setPlayGIFSettledThreshold:(double)arg1 ;
-(double)vitalityMaskBlur;
-(void)_updatePrototypeRelatedSettings;
-(void)setInitialDetailsIndicatorDelay:(double)arg1 ;
-(void)setAllowDoubleTapZoom:(BOOL)arg1 ;
-(long long)chromeAutoHideBehaviorOnZoom;
-(void)setUseDebuggingColors:(BOOL)arg1 ;
-(BOOL)allowAutoplayVideoForAsset:(id)arg1 ;
-(void)setShowOffBadgeForDisabledLivePhotos:(BOOL)arg1 ;
-(double)accessoryInitialTopPosition;
-(BOOL)allowPlayButtonInBars;
-(BOOL)simulateLoadingError;
-(long long)minNavigationDistanceForFastRegime;
-(void)setVisibilityDurationForEnteringQuickPagingRegime:(double)arg1 ;
-(BOOL)allowDoubleTapZoom;
-(void)setShowBestSquareRect:(BOOL)arg1 ;
-(void)setMinimumVisibleCommentedContentHeight:(double)arg1 ;
-(long long)debuggingTitleType;
-(void)setDoubleTapZoomFactor:(double)arg1 ;
-(BOOL)enableSuggestionsAnalysis;
-(long long)chromeAutoHideBehaviorOnPlayButton;
-(long long)simulatedAssetVariationSuggestion;
-(double)autoplayScrubberWidth;
-(BOOL)allowParallax;
-(void)setChromeAutoHideBehaviorOnPlayButton:(long long)arg1 ;
-(void)setMinimumVisibleContentHeight:(double)arg1 ;
-(void)setShowGainMapButton:(BOOL)arg1 ;
-(void)setShowFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls:(BOOL)arg1 ;
-(void)setBounceDuration:(double)arg1 ;
-(BOOL)showSaliencyRects;
-(void)setLivePhotoScrubberShowForPlayback:(BOOL)arg1 ;
-(long long)titleTapAction;
-(void)setDebuggingTitleType:(long long)arg1 ;
-(double)chromeDefaultAnimationDuration;
-(void)setShowGIFLoadingDelays:(BOOL)arg1 ;
-(double)bounceDuration;
-(double)visibilityDurationForExitingFastRegime;
-(long long)userNavigationMaximumDistance;
-(void)setUnmuteOnChromeHide:(BOOL)arg1 ;
-(BOOL)videoShowDebugBorders;
-(void)_invalidatePrototypeRelatedSettings;
-(void)setShowLoadingIndicatorDuringDownload:(BOOL)arg1 ;
-(void)setVideoAutoplayThreshold:(double)arg1 ;
-(double)bounceDelay;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setParallaxModel:(long long)arg1 ;
-(BOOL)allowFullsizeJPEGDisplay;
-(void)setVitalityMaskBlur:(double)arg1 ;
-(double)defaultZoomInFactor;
-(void)setChromeTimedAutoHideAnimationDuration:(double)arg1 ;
-(void)setEnableFigPhotoTiledLayer:(BOOL)arg1 ;
-(void)setBounceDelay:(double)arg1 ;
-(void)setUseURLForLargePhotosWithFigPhotoTiledLayer:(BOOL)arg1 ;
-(void)setScrubberSettings:(PUScrubberSettings *)arg1 ;
-(BOOL)allowGIFPlayback;
-(BOOL)allowUserTransform;
-(void)setVideoRemuteOnBackgrounding:(BOOL)arg1 ;
-(BOOL)useURLForLargePhotosWithFigPhotoTiledLayer;
-(BOOL)forceURLWithFigPhotoTiledLayer;
-(BOOL)showFacesRect;
-(long long)chromeBackgroundAnimationType;
-(void)setShowInitialDetailsIndicator:(BOOL)arg1 ;
-(double)interpageSpacing;
-(void)setChromeAutoHideBehaviorOnSwipe:(long long)arg1 ;
-(void)setSuggestionsStyle:(long long)arg1 ;
-(BOOL)allowBadges;
-(double)videoPauseThreshold;
-(double)vitalityMaxAllowedInsetPoints;
-(double)bounceInitialVelocity;
-(void)setUserNavigationMaximumDistance:(long long)arg1 ;
-(void)setHideToolbarWhenShowingAccessoryView:(BOOL)arg1 ;
-(double)simulatedRenderProgress;
-(void)setAllowParallax:(BOOL)arg1 ;
-(void)setLockScrollDuringLivePhotoPlayback:(BOOL)arg1 ;
-(void)setForceURLWithFigPhotoTiledLayer:(BOOL)arg1 ;
-(long long)simulatedLoadingErrorType;
-(void)setDebuggingBadgesWhenFavorite:(unsigned long long)arg1 ;
-(BOOL)allowScrubber;
-(void)setAllowScrubber:(BOOL)arg1 ;
-(unsigned long long)scaleToFitBehavior;
-(BOOL)enableFigPhotoBackgroundSizeBasedDisplay;
-(void)setMinimumFullCommentTitleViewWidth:(double)arg1 ;
-(unsigned long long)debuggingBadges;
-(long long)chromeAnimationType;
-(BOOL)allowToggleOriginalBarItem;
-(void)setDebuggingBadges:(unsigned long long)arg1 ;
-(BOOL)livePhotoScrubberShowForPlayback;
-(void)setLivePhotoInteractionThreshold:(double)arg1 ;
-(void)setShowBufferingIndicatorDuringPlay:(BOOL)arg1 ;
-(void)setShowToggleCTMButton:(BOOL)arg1 ;
-(BOOL)alwaysShowRenderIndicator;
-(void)setVideoPauseThreshold:(double)arg1 ;
-(void)setVisibilityDurationForEnteringFastRegime:(double)arg1 ;
-(void)setAllowUserTransform:(BOOL)arg1 ;
-(void)setAllowToggleOriginalBarItem:(BOOL)arg1 ;
-(void)setAccessoryViewType:(long long)arg1 ;
-(BOOL)showBufferingIndicatorDuringPlay;
-(void)setSimulateAssetContentLoading:(BOOL)arg1 ;
-(BOOL)simulateWorstCaseFigPhotoBackgroundSize;
-(void)setShowFacesRect:(BOOL)arg1 ;
-(BOOL)showInitialDetailsIndicator;
-(BOOL)applyPerspectiveTransformDuringVitality;
-(void)setVisibilityDurationForExitingFastRegime:(double)arg1 ;
-(double)visibilityDurationForEnteringFastRegime;
-(long long)suggestionsStyle;
-(BOOL)persistChromeVisibility;
-(void)setInterpageSpacing:(double)arg1 ;
-(void)setAccessoryInitialTopPosition:(double)arg1 ;
-(void)setShowSaliencyRects:(BOOL)arg1 ;
-(BOOL)useGlobalDetailsVisibility;
-(void)setVitalityFeatherScale:(double)arg1 ;
-(BOOL)showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls;
-(void)setInitialDetailsIndicatorShouldSlideIn:(BOOL)arg1 ;
-(void)setPlayGIFMoveOutThreshold:(double)arg1 ;
-(void)setShowReframedBadge:(BOOL)arg1 ;
-(void)setMinNavigationDistanceForQuickPagingRegime:(long long)arg1 ;
-(unsigned long long)debuggingBadgesWhenFavorite;
-(void)setEnableSuggestionsAnalysis:(BOOL)arg1 ;
-(BOOL)lockScrollDuringLivePhotoPlayback;
-(BOOL)simulateAssetContentLoading;
-(void)setOverlappingLivePhotosCountLimit:(unsigned long long)arg1 ;
-(void)setUseGlobalDetailsVisibility:(BOOL)arg1 ;
-(void)setAutoplayScrubberWidth:(double)arg1 ;
-(BOOL)useDebuggingColors;
-(BOOL)showGIFLoadingDelays;
-(void)setSimulateWorstCaseFigPhotoBackgroundSize:(BOOL)arg1 ;
-(double)pagingFrictionAdjustment;
-(void)setChromeBackgroundAnimationType:(long long)arg1 ;
-(void)setUseDebuggingProgressLabel:(BOOL)arg1 ;
-(void)createChildren;
-(void)setTitleTapAction:(long long)arg1 ;
-(void)setAllowGIFPlayback:(BOOL)arg1 ;
-(void)setSuggestionMaximumAssetAgeInDays:(long long)arg1 ;
-(BOOL)showReframedBadge;
-(PUScrubberSettings *)scrubberSettings;
-(void)setPagingSpringPullAdjustment:(double)arg1 ;
-(double)initialDetailsIndicatorDuration;
-(void)setDoubleTapZoomAreaExcludesBars:(BOOL)arg1 ;
-(double)livePhotoMinimumOverlappingDuration;
-(long long)chromeAutoHideBehaviorOnSwipe;
-(BOOL)showBestSquareRect;
-(BOOL)allowChromeHiding;
-(BOOL)showOffBadgeForDisabledLivePhotos;
-(BOOL)allowStatusBar;
-(void)setMinNavigationDistanceForFastRegime:(long long)arg1 ;
-(void)setAllowStatusBar:(BOOL)arg1 ;
-(void)setSimulatedAssetContentLoadingDuration:(double)arg1 ;
-(void)setAllowChromeHiding:(BOOL)arg1 ;
-(void)setVitalityMaxAllowedInsetPoints:(double)arg1 ;
-(void)setPersistChromeVisibility:(BOOL)arg1 ;
-(long long)parallaxModel;
-(void)setScaleToFitBehavior:(unsigned long long)arg1 ;
-(void)setChromeAnimationType:(long long)arg1 ;
-(double)minimumFullCommentTitleViewWidth;
-(BOOL)hideToolbarWhenShowingAccessoryView;
-(double)barsAreaVerticalOutset;
-(BOOL)doubleTapZoomAreaExcludesBackground;
-(void)setChromeAutoHideDelay:(double)arg1 ;
-(unsigned long long)viewModelCacheCountLimit;
-(double)initialDetailsIndicatorDelay;
-(long long)minNavigationDistanceForQuickPagingRegime;
-(double)bounceSpringDamping;
-(void)setVideoShowDebugBorders:(BOOL)arg1 ;
-(void)setVisibilityDurationForExitingQuickPagingRegime:(double)arg1 ;
-(void)setShouldMergeOverlappingLivePhotos:(BOOL)arg1 ;
-(double)minimumVisibleCommentedContentHeight;
-(void)setBarsAreaVerticalOutset:(double)arg1 ;
-(double)simulatedAssetContentLoadingDuration;
-(double)minimumVisibleContentHeight;
-(void)setDoubleTapZoomAreaExcludesBackground:(BOOL)arg1 ;
-(void)setEnableFigPhotoBackgroundSizeBasedDisplay:(BOOL)arg1 ;
-(BOOL)unmuteOnChromeHide;
-(void)setAlwaysShowRenderIndicator:(BOOL)arg1 ;
@end

