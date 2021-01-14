/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXCuratedLibrarySettings : PXSettings {

	BOOL _enablePlayMovieInYears;
	BOOL _enableSlideshowInYears;
	BOOL _launchToSavedAllPhotosScrollPosition;
	BOOL _emulatesEmptyLibrary;
	BOOL _showStatusBar;
	BOOL _secondaryToolbarAlwaysVisible;
	BOOL _alwaysShowSecondaryToolbarAtBottom;
	BOOL _enableTapOnTitleToScroll;
	BOOL _enableCustomScrollToTopOrBottom;
	BOOL _useSaliency;
	BOOL _showSaliencyRects;
	BOOL _hideStatusFooter;
	BOOL _hideStatusFooterInSelectMode;
	BOOL _hideAnalyzingStatus;
	BOOL _forceFloatingHeaderVisible;
	BOOL _showDebugInformationInFloatingHeader;
	BOOL _enableShowAllButtons;
	BOOL _allowsCustomDateTitles;
	BOOL _showAllHighlights;
	BOOL _useCustomDaysCurationType;
	BOOL _hideRecents;
	BOOL _hideAggregations;
	BOOL _enableInlinePlayback;
	BOOL _forcePlayback;
	BOOL _playBestTimeRange;
	BOOL _enablePlaybackDiagnostics;
	BOOL _stabilizeLivePhotos;
	BOOL _firstTimeExperienceAlwaysLogReadiness;
	BOOL _enbaleInteractiveTransition;
	BOOL _enableSnapshotMode;
	BOOL _enableRecentlyEditedAlbum;
	BOOL _exaggerateContrast;
	BOOL _forceBadgesOnAllAssets;
	BOOL _forceShowAllButtonsVisible;
	unsigned short _daysCurationType;
	double _recentHighlightsTimeInterval;
	NSString* _savedAllPhotosScrollPositionAnchorAssetIdentifier;
	double _bottomCenterSecondaryToolbarWidth;
	double _scrollSnapMaximumDecelerationFactor;
	double _scrollSnapMaximumAccelerationFactor;
	double _scrollSnapMinimumSpeed;
	double _floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
	double _floatingHeaderFadeOverDistance;
	double _floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
	double _floatingHeaderButtonsFadeOverDistance;
	double _floatingHeadersAppearanceCrossfadeDuration;
	double _monthsFloatingHeadersDistanceFromSafeAreaTop;
	double _monthsFloatingHeadersAppearanceCrossfadeStartDistance;
	double _monthsFloatingHeadersAppearanceCrossfadeDistance;
	double _monthsFloatingHeadersFadeoutDistance;
	double _monthsFloatingHeadersSubtitleAlpha;
	double _monthsInlineHeadersFadeoutOffset;
	double _monthsInlineHeadersFadeoutDistance;
	double _monthsInlineHeadersFadeoutMinimumAlpha;
	double _yearsHeadersFadeoutOffset;
	double _yearsHeadersFadeoutDistance;
	double _yearsHeadersFadeoutMinimumAlpha;
	long long _largeHeroDensity;
	double _largeHeroMinimumScore;
	double _aspectRatioForCompactPortraitYears;
	double _aspectRatioForCompactLandscapeYears;
	double _aspectRatioForRegularYears;
	long long _forcedNumberOfYearsColumn;
	double _aspectRatioForCompactPortraitMonths;
	double _spacingBetweenDays;
	double _interitemSpacingForDays;
	double _allowSpecialPanoHeaders;
	double _topInsetForVisibilityAnchoring;
	double _sectionShadowOpacity;
	double _skimmingScale;
	long long _sectionsToPrefetch;
	double _faultInDistance;
	double _faultOutPadding;
	double _minimumVisibleHeightForTopMostSection;
	double _yearsHeaderGradientAlpha;
	double _yearsHeaderGradientHeight;
	double _monthsHeaderGradientAlpha;
	double _monthsHeaderGradientHeight;
	double _monthsSmallHeaderGradientHeight;
	double _daysHeaderGradientAlpha;
	double _daysHeaderGradientHeight;
	double _statusBarGradientAlpha;
	double _statusBarGradientHeight;
	double _statusBarGradientAndStyleFadeDuration;
	long long _initialZoomLevel;
	double _nonInterestingPromotionScore;
	double _minAutoplaySuggestionScore;
	long long _maxNumberOfPlayingItems;
	double _playbackVisibleRectEdgeInset;
	double _livePhotoLoopingCrossfadeDuration;
	double _slideshowTriggerDelay;
	double _slideshowIntervalDelay;
	long long _firstTimeExperienceMaxNonProcessedHighlights;
	long long _firstTimeExperienceMaxNonProcessedAssets;
	double _defaultZoomLevelTransitionAnimationDuration;
	double _defaultZoomLevelTransitionMaximumScaleAroundAnchor;
	double _nonAnchorYearsFadeSpeed;
	double _nonAnchorMonthsFadeSpeed;
	double _nonAnchorDaysFadeSpeed;
	double _transitionToOrFromAllPhotosAnimationDuration;
	double _transitionToOrFromAllPhotosScale;
	double _transitionScaleForDayNotMatchingMonths;
	double _zoomLevelPinchSignificantScaleDelta;
	double _swipeBackGestureMinAngle;
	double _swipeBackGestureMinTranslation;
	double _zoomLevelControlSegmentExpansionFactor;

}

@property (assign,nonatomic) BOOL enablePlayMovieInYears;                                                          //@synthesize enablePlayMovieInYears=_enablePlayMovieInYears - In the implementation block
@property (assign,nonatomic) BOOL enableSlideshowInYears;                                                          //@synthesize enableSlideshowInYears=_enableSlideshowInYears - In the implementation block
@property (assign,nonatomic) BOOL launchToSavedAllPhotosScrollPosition;                                            //@synthesize launchToSavedAllPhotosScrollPosition=_launchToSavedAllPhotosScrollPosition - In the implementation block
@property (nonatomic,copy) NSString * savedAllPhotosScrollPositionAnchorAssetIdentifier;                           //@synthesize savedAllPhotosScrollPositionAnchorAssetIdentifier=_savedAllPhotosScrollPositionAnchorAssetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL emulatesEmptyLibrary;                                                            //@synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary - In the implementation block
@property (assign,nonatomic) BOOL showStatusBar;                                                                   //@synthesize showStatusBar=_showStatusBar - In the implementation block
@property (assign,nonatomic) BOOL secondaryToolbarAlwaysVisible;                                                   //@synthesize secondaryToolbarAlwaysVisible=_secondaryToolbarAlwaysVisible - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowSecondaryToolbarAtBottom;                                              //@synthesize alwaysShowSecondaryToolbarAtBottom=_alwaysShowSecondaryToolbarAtBottom - In the implementation block
@property (assign,nonatomic) double bottomCenterSecondaryToolbarWidth;                                             //@synthesize bottomCenterSecondaryToolbarWidth=_bottomCenterSecondaryToolbarWidth - In the implementation block
@property (assign,nonatomic) BOOL enableTapOnTitleToScroll;                                                        //@synthesize enableTapOnTitleToScroll=_enableTapOnTitleToScroll - In the implementation block
@property (assign,nonatomic) BOOL enableCustomScrollToTopOrBottom;                                                 //@synthesize enableCustomScrollToTopOrBottom=_enableCustomScrollToTopOrBottom - In the implementation block
@property (assign,nonatomic) double scrollSnapMaximumDecelerationFactor;                                           //@synthesize scrollSnapMaximumDecelerationFactor=_scrollSnapMaximumDecelerationFactor - In the implementation block
@property (assign,nonatomic) double scrollSnapMaximumAccelerationFactor;                                           //@synthesize scrollSnapMaximumAccelerationFactor=_scrollSnapMaximumAccelerationFactor - In the implementation block
@property (assign,nonatomic) double scrollSnapMinimumSpeed;                                                        //@synthesize scrollSnapMinimumSpeed=_scrollSnapMinimumSpeed - In the implementation block
@property (assign,nonatomic) double floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;                      //@synthesize floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom=_floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom - In the implementation block
@property (assign,nonatomic) double floatingHeaderFadeOverDistance;                                                //@synthesize floatingHeaderFadeOverDistance=_floatingHeaderFadeOverDistance - In the implementation block
@property (assign,nonatomic) double floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;              //@synthesize floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop=_floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop - In the implementation block
@property (assign,nonatomic) double floatingHeaderButtonsFadeOverDistance;                                         //@synthesize floatingHeaderButtonsFadeOverDistance=_floatingHeaderButtonsFadeOverDistance - In the implementation block
@property (assign,nonatomic) double floatingHeadersAppearanceCrossfadeDuration;                                    //@synthesize floatingHeadersAppearanceCrossfadeDuration=_floatingHeadersAppearanceCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersDistanceFromSafeAreaTop;                                  //@synthesize monthsFloatingHeadersDistanceFromSafeAreaTop=_monthsFloatingHeadersDistanceFromSafeAreaTop - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersAppearanceCrossfadeStartDistance;                         //@synthesize monthsFloatingHeadersAppearanceCrossfadeStartDistance=_monthsFloatingHeadersAppearanceCrossfadeStartDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDistance;                              //@synthesize monthsFloatingHeadersAppearanceCrossfadeDistance=_monthsFloatingHeadersAppearanceCrossfadeDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersFadeoutDistance;                                          //@synthesize monthsFloatingHeadersFadeoutDistance=_monthsFloatingHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersSubtitleAlpha;                                            //@synthesize monthsFloatingHeadersSubtitleAlpha=_monthsFloatingHeadersSubtitleAlpha - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutOffset;                                              //@synthesize monthsInlineHeadersFadeoutOffset=_monthsInlineHeadersFadeoutOffset - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutDistance;                                            //@synthesize monthsInlineHeadersFadeoutDistance=_monthsInlineHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutMinimumAlpha;                                        //@synthesize monthsInlineHeadersFadeoutMinimumAlpha=_monthsInlineHeadersFadeoutMinimumAlpha - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutOffset;                                                     //@synthesize yearsHeadersFadeoutOffset=_yearsHeadersFadeoutOffset - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutDistance;                                                   //@synthesize yearsHeadersFadeoutDistance=_yearsHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutMinimumAlpha;                                               //@synthesize yearsHeadersFadeoutMinimumAlpha=_yearsHeadersFadeoutMinimumAlpha - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                                                     //@synthesize useSaliency=_useSaliency - In the implementation block
@property (assign,nonatomic) BOOL showSaliencyRects;                                                               //@synthesize showSaliencyRects=_showSaliencyRects - In the implementation block
@property (assign,nonatomic) long long largeHeroDensity;                                                           //@synthesize largeHeroDensity=_largeHeroDensity - In the implementation block
@property (assign,nonatomic) double largeHeroMinimumScore;                                                         //@synthesize largeHeroMinimumScore=_largeHeroMinimumScore - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactPortraitYears;                                            //@synthesize aspectRatioForCompactPortraitYears=_aspectRatioForCompactPortraitYears - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactLandscapeYears;                                           //@synthesize aspectRatioForCompactLandscapeYears=_aspectRatioForCompactLandscapeYears - In the implementation block
@property (assign,nonatomic) double aspectRatioForRegularYears;                                                    //@synthesize aspectRatioForRegularYears=_aspectRatioForRegularYears - In the implementation block
@property (assign,nonatomic) long long forcedNumberOfYearsColumn;                                                  //@synthesize forcedNumberOfYearsColumn=_forcedNumberOfYearsColumn - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactPortraitMonths;                                           //@synthesize aspectRatioForCompactPortraitMonths=_aspectRatioForCompactPortraitMonths - In the implementation block
@property (assign,nonatomic) double spacingBetweenDays;                                                            //@synthesize spacingBetweenDays=_spacingBetweenDays - In the implementation block
@property (assign,nonatomic) double interitemSpacingForDays;                                                       //@synthesize interitemSpacingForDays=_interitemSpacingForDays - In the implementation block
@property (assign,nonatomic) double allowSpecialPanoHeaders;                                                       //@synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders - In the implementation block
@property (assign,nonatomic) double topInsetForVisibilityAnchoring;                                                //@synthesize topInsetForVisibilityAnchoring=_topInsetForVisibilityAnchoring - In the implementation block
@property (assign,nonatomic) double sectionShadowOpacity;                                                          //@synthesize sectionShadowOpacity=_sectionShadowOpacity - In the implementation block
@property (assign,nonatomic) double skimmingScale;                                                                 //@synthesize skimmingScale=_skimmingScale - In the implementation block
@property (assign,nonatomic) long long sectionsToPrefetch;                                                         //@synthesize sectionsToPrefetch=_sectionsToPrefetch - In the implementation block
@property (assign,nonatomic) double faultInDistance;                                                               //@synthesize faultInDistance=_faultInDistance - In the implementation block
@property (assign,nonatomic) double faultOutPadding;                                                               //@synthesize faultOutPadding=_faultOutPadding - In the implementation block
@property (assign,nonatomic) BOOL hideStatusFooter;                                                                //@synthesize hideStatusFooter=_hideStatusFooter - In the implementation block
@property (assign,nonatomic) BOOL hideStatusFooterInSelectMode;                                                    //@synthesize hideStatusFooterInSelectMode=_hideStatusFooterInSelectMode - In the implementation block
@property (assign,nonatomic) BOOL hideAnalyzingStatus;                                                             //@synthesize hideAnalyzingStatus=_hideAnalyzingStatus - In the implementation block
@property (assign,nonatomic) BOOL forceFloatingHeaderVisible;                                                      //@synthesize forceFloatingHeaderVisible=_forceFloatingHeaderVisible - In the implementation block
@property (assign,nonatomic) BOOL showDebugInformationInFloatingHeader;                                            //@synthesize showDebugInformationInFloatingHeader=_showDebugInformationInFloatingHeader - In the implementation block
@property (assign,nonatomic) double minimumVisibleHeightForTopMostSection;                                         //@synthesize minimumVisibleHeightForTopMostSection=_minimumVisibleHeightForTopMostSection - In the implementation block
@property (assign,nonatomic) BOOL enableShowAllButtons;                                                            //@synthesize enableShowAllButtons=_enableShowAllButtons - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomDateTitles;                                                          //@synthesize allowsCustomDateTitles=_allowsCustomDateTitles - In the implementation block
@property (assign,nonatomic) double yearsHeaderGradientAlpha;                                                      //@synthesize yearsHeaderGradientAlpha=_yearsHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double yearsHeaderGradientHeight;                                                     //@synthesize yearsHeaderGradientHeight=_yearsHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double monthsHeaderGradientAlpha;                                                     //@synthesize monthsHeaderGradientAlpha=_monthsHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double monthsHeaderGradientHeight;                                                    //@synthesize monthsHeaderGradientHeight=_monthsHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double monthsSmallHeaderGradientHeight;                                               //@synthesize monthsSmallHeaderGradientHeight=_monthsSmallHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double daysHeaderGradientAlpha;                                                       //@synthesize daysHeaderGradientAlpha=_daysHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double daysHeaderGradientHeight;                                                      //@synthesize daysHeaderGradientHeight=_daysHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double statusBarGradientAlpha;                                                        //@synthesize statusBarGradientAlpha=_statusBarGradientAlpha - In the implementation block
@property (assign,nonatomic) double statusBarGradientHeight;                                                       //@synthesize statusBarGradientHeight=_statusBarGradientHeight - In the implementation block
@property (assign,nonatomic) double statusBarGradientAndStyleFadeDuration;                                         //@synthesize statusBarGradientAndStyleFadeDuration=_statusBarGradientAndStyleFadeDuration - In the implementation block
@property (assign,nonatomic) long long initialZoomLevel;                                                           //@synthesize initialZoomLevel=_initialZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL showAllHighlights;                                                               //@synthesize showAllHighlights=_showAllHighlights - In the implementation block
@property (assign,nonatomic) BOOL useCustomDaysCurationType;                                                       //@synthesize useCustomDaysCurationType=_useCustomDaysCurationType - In the implementation block
@property (assign,nonatomic) unsigned short daysCurationType;                                                      //@synthesize daysCurationType=_daysCurationType - In the implementation block
@property (assign,nonatomic) double nonInterestingPromotionScore;                                                  //@synthesize nonInterestingPromotionScore=_nonInterestingPromotionScore - In the implementation block
@property (assign,nonatomic) BOOL hideRecents;                                                                     //@synthesize hideRecents=_hideRecents - In the implementation block
@property (assign,nonatomic) BOOL hideAggregations;                                                                //@synthesize hideAggregations=_hideAggregations - In the implementation block
@property (assign,nonatomic) BOOL enableInlinePlayback;                                                            //@synthesize enableInlinePlayback=_enableInlinePlayback - In the implementation block
@property (assign,nonatomic) BOOL forcePlayback;                                                                   //@synthesize forcePlayback=_forcePlayback - In the implementation block
@property (assign,nonatomic) double minAutoplaySuggestionScore;                                                    //@synthesize minAutoplaySuggestionScore=_minAutoplaySuggestionScore - In the implementation block
@property (assign,nonatomic) BOOL playBestTimeRange;                                                               //@synthesize playBestTimeRange=_playBestTimeRange - In the implementation block
@property (assign,nonatomic) long long maxNumberOfPlayingItems;                                                    //@synthesize maxNumberOfPlayingItems=_maxNumberOfPlayingItems - In the implementation block
@property (assign,nonatomic) double playbackVisibleRectEdgeInset;                                                  //@synthesize playbackVisibleRectEdgeInset=_playbackVisibleRectEdgeInset - In the implementation block
@property (assign,nonatomic) double livePhotoLoopingCrossfadeDuration;                                             //@synthesize livePhotoLoopingCrossfadeDuration=_livePhotoLoopingCrossfadeDuration - In the implementation block
@property (assign,nonatomic) BOOL enablePlaybackDiagnostics;                                                       //@synthesize enablePlaybackDiagnostics=_enablePlaybackDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL stabilizeLivePhotos;                                                             //@synthesize stabilizeLivePhotos=_stabilizeLivePhotos - In the implementation block
@property (assign,nonatomic) double slideshowTriggerDelay;                                                         //@synthesize slideshowTriggerDelay=_slideshowTriggerDelay - In the implementation block
@property (assign,nonatomic) double slideshowIntervalDelay;                                                        //@synthesize slideshowIntervalDelay=_slideshowIntervalDelay - In the implementation block
@property (assign,nonatomic) double recentHighlightsTimeInterval;                                                  //@synthesize recentHighlightsTimeInterval=_recentHighlightsTimeInterval - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceMaxNonProcessedHighlights;                               //@synthesize firstTimeExperienceMaxNonProcessedHighlights=_firstTimeExperienceMaxNonProcessedHighlights - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceMaxNonProcessedAssets;                                   //@synthesize firstTimeExperienceMaxNonProcessedAssets=_firstTimeExperienceMaxNonProcessedAssets - In the implementation block
@property (assign,nonatomic) BOOL firstTimeExperienceAlwaysLogReadiness;                                           //@synthesize firstTimeExperienceAlwaysLogReadiness=_firstTimeExperienceAlwaysLogReadiness - In the implementation block
@property (assign,nonatomic) BOOL enbaleInteractiveTransition;                                                     //@synthesize enbaleInteractiveTransition=_enbaleInteractiveTransition - In the implementation block
@property (assign,nonatomic) double defaultZoomLevelTransitionAnimationDuration;                                   //@synthesize defaultZoomLevelTransitionAnimationDuration=_defaultZoomLevelTransitionAnimationDuration - In the implementation block
@property (assign,nonatomic) double defaultZoomLevelTransitionMaximumScaleAroundAnchor;                            //@synthesize defaultZoomLevelTransitionMaximumScaleAroundAnchor=_defaultZoomLevelTransitionMaximumScaleAroundAnchor - In the implementation block
@property (assign,nonatomic) double nonAnchorYearsFadeSpeed;                                                       //@synthesize nonAnchorYearsFadeSpeed=_nonAnchorYearsFadeSpeed - In the implementation block
@property (assign,nonatomic) double nonAnchorMonthsFadeSpeed;                                                      //@synthesize nonAnchorMonthsFadeSpeed=_nonAnchorMonthsFadeSpeed - In the implementation block
@property (assign,nonatomic) double nonAnchorDaysFadeSpeed;                                                        //@synthesize nonAnchorDaysFadeSpeed=_nonAnchorDaysFadeSpeed - In the implementation block
@property (assign,nonatomic) double transitionToOrFromAllPhotosAnimationDuration;                                  //@synthesize transitionToOrFromAllPhotosAnimationDuration=_transitionToOrFromAllPhotosAnimationDuration - In the implementation block
@property (assign,nonatomic) double transitionToOrFromAllPhotosScale;                                              //@synthesize transitionToOrFromAllPhotosScale=_transitionToOrFromAllPhotosScale - In the implementation block
@property (assign,nonatomic) double transitionScaleForDayNotMatchingMonths;                                        //@synthesize transitionScaleForDayNotMatchingMonths=_transitionScaleForDayNotMatchingMonths - In the implementation block
@property (assign,nonatomic) double zoomLevelPinchSignificantScaleDelta;                                           //@synthesize zoomLevelPinchSignificantScaleDelta=_zoomLevelPinchSignificantScaleDelta - In the implementation block
@property (assign,nonatomic) double swipeBackGestureMinAngle;                                                      //@synthesize swipeBackGestureMinAngle=_swipeBackGestureMinAngle - In the implementation block
@property (assign,nonatomic) double swipeBackGestureMinTranslation;                                                //@synthesize swipeBackGestureMinTranslation=_swipeBackGestureMinTranslation - In the implementation block
@property (assign,nonatomic) double zoomLevelControlSegmentExpansionFactor;                                        //@synthesize zoomLevelControlSegmentExpansionFactor=_zoomLevelControlSegmentExpansionFactor - In the implementation block
@property (assign,nonatomic) BOOL enableSnapshotMode;                                                              //@synthesize enableSnapshotMode=_enableSnapshotMode - In the implementation block
@property (assign,nonatomic) BOOL enableRecentlyEditedAlbum;                                                       //@synthesize enableRecentlyEditedAlbum=_enableRecentlyEditedAlbum - In the implementation block
@property (assign,nonatomic) BOOL exaggerateContrast;                                                              //@synthesize exaggerateContrast=_exaggerateContrast - In the implementation block
@property (assign,nonatomic) BOOL forceBadgesOnAllAssets;                                                          //@synthesize forceBadgesOnAllAssets=_forceBadgesOnAllAssets - In the implementation block
@property (assign,nonatomic) BOOL forceShowAllButtonsVisible;                                                      //@synthesize forceShowAllButtonsVisible=_forceShowAllButtonsVisible - In the implementation block
+(id)sharedInstance;
+(BOOL)enableEmptyYearsMonthsDaysForTesting;
+(id)settingsControllerModule;
+(void)setEnableEmptyYearsMonthsDaysForTesting:(BOOL)arg1 ;
-(id)parentSettings;
-(double)allowSpecialPanoHeaders;
-(void)setLargeHeroDensity:(long long)arg1 ;
-(void)setDefaultValues;
-(/*^block*/id)acceptableLargeHeroPredicate;
-(long long)forcedNumberOfYearsColumn;
-(long long)largeHeroDensity;
-(void)setAllowSpecialPanoHeaders:(double)arg1 ;
-(BOOL)forcePlayback;
-(double)minAutoplaySuggestionScore;
-(void)setHideAnalyzingStatus:(BOOL)arg1 ;
-(void)setYearsHeaderGradientHeight:(double)arg1 ;
-(void)setSectionShadowOpacity:(double)arg1 ;
-(double)scrollSnapMinimumSpeed;
-(void)setNonInterestingPromotionScore:(double)arg1 ;
-(void)setMonthsInlineHeadersFadeoutOffset:(double)arg1 ;
-(double)yearsHeadersFadeoutOffset;
-(void)setScrollSnapMaximumDecelerationFactor:(double)arg1 ;
-(void)setYearsHeadersFadeoutOffset:(double)arg1 ;
-(BOOL)hideAnalyzingStatus;
-(void)setHideAggregations:(BOOL)arg1 ;
-(void)setUseCustomDaysCurationType:(BOOL)arg1 ;
-(void)setFirstTimeExperienceMaxNonProcessedHighlights:(long long)arg1 ;
-(double)playbackVisibleRectEdgeInset;
-(BOOL)stabilizeLivePhotos;
-(void)setInitialZoomLevel:(long long)arg1 ;
-(void)setTopInsetForVisibilityAnchoring:(double)arg1 ;
-(void)setRecentHighlightsTimeInterval:(double)arg1 ;
-(double)scrollSnapMaximumDecelerationFactor;
-(long long)sectionsToPrefetch;
-(double)monthsInlineHeadersFadeoutDistance;
-(void)setFaultOutPadding:(double)arg1 ;
-(BOOL)hideAggregations;
-(void)setSecondaryToolbarAlwaysVisible:(BOOL)arg1 ;
-(double)monthsFloatingHeadersAppearanceCrossfadeDistance;
-(BOOL)showAllHighlights;
-(BOOL)alwaysShowSecondaryToolbarAtBottom;
-(double)nonAnchorMonthsFadeSpeed;
-(void)setEnableRecentlyEditedAlbum:(BOOL)arg1 ;
-(void)setLaunchToSavedAllPhotosScrollPosition:(BOOL)arg1 ;
-(BOOL)firstTimeExperienceAlwaysLogReadiness;
-(BOOL)hideStatusFooter;
-(void)setYearsHeaderGradientAlpha:(double)arg1 ;
-(void)setForceShowAllButtonsVisible:(BOOL)arg1 ;
-(double)monthsFloatingHeadersFadeoutDistance;
-(void)setNonAnchorDaysFadeSpeed:(double)arg1 ;
-(BOOL)hideStatusFooterInSelectMode;
-(double)zoomLevelControlSegmentExpansionFactor;
-(void)setStatusBarGradientAlpha:(double)arg1 ;
-(double)aspectRatioForCompactPortraitYears;
-(unsigned short)daysCurationType;
-(double)swipeBackGestureMinAngle;
-(BOOL)playBestTimeRange;
-(void)setSwipeBackGestureMinAngle:(double)arg1 ;
-(void)setFloatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop:(double)arg1 ;
-(void)setTransitionToOrFromAllPhotosAnimationDuration:(double)arg1 ;
-(void)setZoomLevelControlSegmentExpansionFactor:(double)arg1 ;
-(double)defaultZoomLevelTransitionAnimationDuration;
-(BOOL)enableTapOnTitleToScroll;
-(double)yearsHeadersFadeoutDistance;
-(void)setMonthsHeaderGradientAlpha:(double)arg1 ;
-(double)sectionShadowOpacity;
-(double)defaultZoomLevelTransitionMaximumScaleAroundAnchor;
-(void)setBottomCenterSecondaryToolbarWidth:(double)arg1 ;
-(void)setNonAnchorYearsFadeSpeed:(double)arg1 ;
-(double)statusBarGradientAlpha;
-(void)setMinimumVisibleHeightForTopMostSection:(double)arg1 ;
-(double)zoomLevelPinchSignificantScaleDelta;
-(void)setScrollSnapMinimumSpeed:(double)arg1 ;
-(BOOL)enableRecentlyEditedAlbum;
-(double)statusBarGradientAndStyleFadeDuration;
-(double)recentHighlightsTimeInterval;
-(void)setAllowsCustomDateTitles:(BOOL)arg1 ;
-(double)livePhotoLoopingCrossfadeDuration;
-(double)slideshowIntervalDelay;
-(double)monthsFloatingHeadersSubtitleAlpha;
-(void)setEnableTapOnTitleToScroll:(BOOL)arg1 ;
-(double)monthsSmallHeaderGradientHeight;
-(void)setStabilizeLivePhotos:(BOOL)arg1 ;
-(void)setFaultInDistance:(double)arg1 ;
-(BOOL)forceShowAllButtonsVisible;
-(void)setDaysCurationType:(unsigned short)arg1 ;
-(void)setForcePlayback:(BOOL)arg1 ;
-(double)nonInterestingPromotionScore;
-(BOOL)enbaleInteractiveTransition;
-(void)setDefaultZoomLevelTransitionMaximumScaleAroundAnchor:(double)arg1 ;
-(void)setForcedNumberOfYearsColumn:(long long)arg1 ;
-(BOOL)showSaliencyRects;
-(void)setMonthsFloatingHeadersAppearanceCrossfadeDistance:(double)arg1 ;
-(void)setForceBadgesOnAllAssets:(BOOL)arg1 ;
-(void)setPlayBestTimeRange:(BOOL)arg1 ;
-(double)aspectRatioForCompactPortraitMonths;
-(void)setZoomLevelPinchSignificantScaleDelta:(double)arg1 ;
-(void)setStatusBarGradientHeight:(double)arg1 ;
-(void)setLargeHeroMinimumScore:(double)arg1 ;
-(void)setUseSaliency:(BOOL)arg1 ;
-(double)swipeBackGestureMinTranslation;
-(BOOL)hideRecents;
-(double)monthsInlineHeadersFadeoutMinimumAlpha;
-(double)minimumVisibleHeightForTopMostSection;
-(void)setYearsHeadersFadeoutDistance:(double)arg1 ;
-(double)slideshowTriggerDelay;
-(void)setEnablePlayMovieInYears:(BOOL)arg1 ;
-(void)setSwipeBackGestureMinTranslation:(double)arg1 ;
-(double)transitionScaleForDayNotMatchingMonths;
-(void)setMonthsFloatingHeadersAppearanceCrossfadeStartDistance:(double)arg1 ;
-(double)transitionToOrFromAllPhotosAnimationDuration;
-(void)setMonthsInlineHeadersFadeoutMinimumAlpha:(double)arg1 ;
-(void)setFloatingHeaderFadeOverDistance:(double)arg1 ;
-(void)setExaggerateContrast:(BOOL)arg1 ;
-(BOOL)enablePlaybackDiagnostics;
-(double)aspectRatioForCompactLandscapeYears;
-(double)yearsHeaderGradientAlpha;
-(double)faultInDistance;
-(void)setEnableInlinePlayback:(BOOL)arg1 ;
-(void)setInteritemSpacingForDays:(double)arg1 ;
-(long long)firstTimeExperienceMaxNonProcessedHighlights;
-(void)setScrollSnapMaximumAccelerationFactor:(double)arg1 ;
-(void)setFirstTimeExperienceAlwaysLogReadiness:(BOOL)arg1 ;
-(void)setMonthsSmallHeaderGradientHeight:(double)arg1 ;
-(double)transitionToOrFromAllPhotosScale;
-(double)spacingBetweenDays;
-(double)yearsHeadersFadeoutMinimumAlpha;
-(BOOL)enableSnapshotMode;
-(void)setMonthsInlineHeadersFadeoutDistance:(double)arg1 ;
-(void)setMinAutoplaySuggestionScore:(double)arg1 ;
-(BOOL)enableSlideshowInYears;
-(void)setYearsHeadersFadeoutMinimumAlpha:(double)arg1 ;
-(BOOL)forceBadgesOnAllAssets;
-(void)setSpacingBetweenDays:(double)arg1 ;
-(double)statusBarGradientHeight;
-(void)setHideRecents:(BOOL)arg1 ;
-(BOOL)allowsModularLayoutForZoomLevel:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 ;
-(void)setDaysHeaderGradientAlpha:(double)arg1 ;
-(void)setAspectRatioForCompactLandscapeYears:(double)arg1 ;
-(double)floatingHeaderFadeOverDistance;
-(void)setAlwaysShowSecondaryToolbarAtBottom:(BOOL)arg1 ;
-(void)setMonthsFloatingHeadersSubtitleAlpha:(double)arg1 ;
-(double)monthsFloatingHeadersDistanceFromSafeAreaTop;
-(void)setTransitionScaleForDayNotMatchingMonths:(double)arg1 ;
-(double)floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
-(void)setSavedAllPhotosScrollPositionAnchorAssetIdentifier:(NSString *)arg1 ;
-(void)setShowDebugInformationInFloatingHeader:(BOOL)arg1 ;
-(long long)firstTimeExperienceMaxNonProcessedAssets;
-(BOOL)enablePlayMovieInYears;
-(double)floatingHeadersAppearanceCrossfadeDuration;
-(double)aspectRatioForRegularYears;
-(double)monthsInlineHeadersFadeoutOffset;
-(void)setMaxNumberOfPlayingItems:(long long)arg1 ;
-(void)setAspectRatioForCompactPortraitMonths:(double)arg1 ;
-(double)bottomCenterSecondaryToolbarWidth;
-(void)setMonthsFloatingHeadersFadeoutDistance:(double)arg1 ;
-(double)daysHeaderGradientAlpha;
-(double)yearsHeaderGradientHeight;
-(BOOL)allowsCustomDateTitles;
-(void)setAspectRatioForRegularYears:(double)arg1 ;
-(double)largeHeroMinimumScore;
-(BOOL)secondaryToolbarAlwaysVisible;
-(long long)initialZoomLevel;
-(void)setShowSaliencyRects:(BOOL)arg1 ;
-(BOOL)emulatesEmptyLibrary;
-(void)setAspectRatioForCompactPortraitYears:(double)arg1 ;
-(double)floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
-(void)setSkimmingScale:(double)arg1 ;
-(void)setFloatingHeadersAppearanceCrossfadeDuration:(double)arg1 ;
-(void)setFloatingHeaderButtonsFadeOverDistance:(double)arg1 ;
-(double)skimmingScale;
-(double)daysHeaderGradientHeight;
-(double)scrollSnapMaximumAccelerationFactor;
-(double)monthsFloatingHeadersAppearanceCrossfadeStartDistance;
-(BOOL)showDebugInformationInFloatingHeader;
-(double)monthsHeaderGradientHeight;
-(void)setTransitionToOrFromAllPhotosScale:(double)arg1 ;
-(void)setSectionsToPrefetch:(long long)arg1 ;
-(double)faultOutPadding;
-(void)setSlideshowIntervalDelay:(double)arg1 ;
-(double)interitemSpacingForDays;
-(void)setEnableShowAllButtons:(BOOL)arg1 ;
-(double)monthsHeaderGradientAlpha;
-(BOOL)showStatusBar;
-(void)setMonthsHeaderGradientHeight:(double)arg1 ;
-(void)setSlideshowTriggerDelay:(double)arg1 ;
-(void)setFirstTimeExperienceMaxNonProcessedAssets:(long long)arg1 ;
-(void)setEmulatesEmptyLibrary:(BOOL)arg1 ;
-(void)setDaysHeaderGradientHeight:(double)arg1 ;
-(BOOL)enableShowAllButtons;
-(void)setEnbaleInteractiveTransition:(BOOL)arg1 ;
-(void)setHideStatusFooterInSelectMode:(BOOL)arg1 ;
-(void)setEnableSnapshotMode:(BOOL)arg1 ;
-(void)setHideStatusFooter:(BOOL)arg1 ;
-(BOOL)forceFloatingHeaderVisible;
-(NSString *)savedAllPhotosScrollPositionAnchorAssetIdentifier;
-(void)setShowAllHighlights:(BOOL)arg1 ;
-(void)setLivePhotoLoopingCrossfadeDuration:(double)arg1 ;
-(void)setEnablePlaybackDiagnostics:(BOOL)arg1 ;
-(void)setStatusBarGradientAndStyleFadeDuration:(double)arg1 ;
-(double)topInsetForVisibilityAnchoring;
-(BOOL)exaggerateContrast;
-(void)setForceFloatingHeaderVisible:(BOOL)arg1 ;
-(void)setDefaultZoomLevelTransitionAnimationDuration:(double)arg1 ;
-(long long)version;
-(BOOL)launchToSavedAllPhotosScrollPosition;
-(void)setNonAnchorMonthsFadeSpeed:(double)arg1 ;
-(double)nonAnchorDaysFadeSpeed;
-(BOOL)enableInlinePlayback;
-(BOOL)useSaliency;
-(void)setEnableCustomScrollToTopOrBottom:(BOOL)arg1 ;
-(void)setShowStatusBar:(BOOL)arg1 ;
-(long long)maxNumberOfPlayingItems;
-(void)setMonthsFloatingHeadersDistanceFromSafeAreaTop:(double)arg1 ;
-(void)setEnableSlideshowInYears:(BOOL)arg1 ;
-(BOOL)useCustomDaysCurationType;
-(void)setPlaybackVisibleRectEdgeInset:(double)arg1 ;
-(double)floatingHeaderButtonsFadeOverDistance;
-(BOOL)enableCustomScrollToTopOrBottom;
-(void)setFloatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom:(double)arg1 ;
-(double)nonAnchorYearsFadeSpeed;
@end

