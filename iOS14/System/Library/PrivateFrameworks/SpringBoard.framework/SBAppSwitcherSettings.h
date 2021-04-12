/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFloatingSwitcherSettings, SBAppSwitcherOrbGestureSettings, SBFluidSwitcherAnimationSettings, PTOutlet;

@interface SBAppSwitcherSettings : PTSettings {

	long long _simplicityOptions;
	BOOL _useAsynchronousRendering;
	BOOL _shouldRoundCornersDuringSwipeUp;
	BOOL _useTitleOpacityPrototypeSettings;
	BOOL _showModifierDebugLabel;
	BOOL _showMainModifierTimeline;
	BOOL _showFloatingModifierTimeline;
	BOOL _shouldDisableSwitcherModelUpdatesForDemo;
	BOOL _simplicityOptionNoSnapshots;
	BOOL _simplicityOptionNoCrossfade;
	BOOL _simplicityOptionNoLabels;
	BOOL _simplicityOptionNoIcons;
	BOOL _simplicityOptionNoBlurs;
	BOOL _simplicityOptionNoShadows;
	BOOL _simplicityOptionNoControlCenter;
	BOOL _simplicityOptionNoSnapshotBkg;
	BOOL _showFloats;
	long long _switcherStyle;
	double _asynchronousRenderingDisableSurfaceCacheDelayDuration;
	double _preventMedusaSnapshotsAfterTransitionDuration;
	SBFloatingSwitcherSettings* _floatingSwitcherSettings;
	SBAppSwitcherOrbGestureSettings* _orbGestureSettings;
	double _mScale;
	double _centerPoint;
	double _maxScale;
	double _mAlpha;
	double _bAlpha;
	double _mDarkening;
	double _bDarkening;
	double _maxDarkening;
	double _tetheredInsertionRemovalInsetForDeterminingVisibility;
	double _switcherCardScaleWhileTouched;
	double _switcherCardScaleWhileCursorHovered;
	double _switcherCardShadowRadius;
	double _switcherCardShadowOpacity;
	double _switcherCardShadowOffsetHorizontal;
	double _switcherCardShadowOffsetVertical;
	double _switcherCenterYOffsetPercentOfScreenHeight;
	double _switcherCardShadowRadiusWhileTouched;
	double _switcherCardShadowOpacityWhileTouched;
	double _switcherCardShadowOffsetHorizontalWhileTouched;
	double _switcherCardShadowOffsetVerticalWhileTouched;
	double _cursorHoverShadowRadiusInterpolationAmount;
	double _cursorHoverShadowOpacityInterpolationAmount;
	double _cursorHoverShadowOffsetInterpolationAmount;
	double _appExposeNonFloatingSingleRowScale;
	double _appExposeNonFloatingDoubleRowScale;
	double _appExposeFloatingDoubleRowScale;
	double _gridSwitcherPageScale;
	double _gridSwitcherHorizontalInterpageSpacingLandscape;
	double _gridSwitcherVerticalNaturalSpacingLandscape;
	double _gridSwitcherHorizontalInterpageSpacingPortrait;
	double _gridSwitcherVerticalNaturalSpacingPortrait;
	double _gridSwitcherSnapToControlCenterHeightSlop;
	double _gridSwitcherSwipeUpNormalizedRubberbandingRange;
	double _gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;
	double _gridSwitcherSwipeUpMinimumScale;
	unsigned long long _numberOfSnapshotsToCacheInSwitcher;
	unsigned long long _numberOfSnapshotsToAlwaysKeepAround;
	double _spacingBetweenLeadingEdgeAndIcon;
	double _spacingBetweenTrailingEdgeAndLabels;
	double _iconSideLength;
	double _spacingBetweenSnapshotAndIcon;
	double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
	double _spacingBetweenTitleAndSubtitleBaseline;
	double _spacingBetweenIconAndLabel;
	double _spacingBetweenLabelAndSecondIcon;
	double _spacingBetweenBoundsCenterAndSecondIcon;
	double _deckSwitcherPageScale;
	double _deckSwitcherDecelerationRate;
	double _aExpLayoutCoeff;
	double _bExpLayoutCoeff;
	double _depthPadding;
	double _offscreenCardScaleForFlyIn;
	double _coplanarSpacingPhone;
	double _coplanarSpacingPad;
	double _titleOpacityACoeff;
	double _titleOpacityBCoeff;
	double _titleOpacityCCoeff;
	double _titleOpacityDCoeff;
	SBFluidSwitcherAnimationSettings* _animationSettings;
	PTOutlet* _stashModelOutlet;
	PTOutlet* _loadModelOutlet;
	PTOutlet* _addAppsToModelOutlet;
	PTOutlet* _addPPTAppsToModelOutlet;

}

@property (assign) long long simplicityOptions; 
@property (assign) BOOL simplicityOptionNoSnapshots;                                                       //@synthesize simplicityOptionNoSnapshots=_simplicityOptionNoSnapshots - In the implementation block
@property (assign) BOOL simplicityOptionNoCrossfade;                                                       //@synthesize simplicityOptionNoCrossfade=_simplicityOptionNoCrossfade - In the implementation block
@property (assign) BOOL simplicityOptionNoLabels;                                                          //@synthesize simplicityOptionNoLabels=_simplicityOptionNoLabels - In the implementation block
@property (assign) BOOL simplicityOptionNoIcons;                                                           //@synthesize simplicityOptionNoIcons=_simplicityOptionNoIcons - In the implementation block
@property (assign) BOOL simplicityOptionNoBlurs;                                                           //@synthesize simplicityOptionNoBlurs=_simplicityOptionNoBlurs - In the implementation block
@property (assign) BOOL simplicityOptionNoShadows;                                                         //@synthesize simplicityOptionNoShadows=_simplicityOptionNoShadows - In the implementation block
@property (assign) BOOL simplicityOptionNoControlCenter;                                                   //@synthesize simplicityOptionNoControlCenter=_simplicityOptionNoControlCenter - In the implementation block
@property (assign) BOOL simplicityOptionNoSnapshotBkg;                                                     //@synthesize simplicityOptionNoSnapshotBkg=_simplicityOptionNoSnapshotBkg - In the implementation block
@property (assign) BOOL showFloats;                                                                        //@synthesize showFloats=_showFloats - In the implementation block
@property (assign) long long switcherStyle;                                                                //@synthesize switcherStyle=_switcherStyle - In the implementation block
@property (assign) BOOL useAsynchronousRendering;                                                          //@synthesize useAsynchronousRendering=_useAsynchronousRendering - In the implementation block
@property (assign) BOOL shouldRoundCornersDuringSwipeUp;                                                   //@synthesize shouldRoundCornersDuringSwipeUp=_shouldRoundCornersDuringSwipeUp - In the implementation block
@property (assign) double asynchronousRenderingDisableSurfaceCacheDelayDuration;                           //@synthesize asynchronousRenderingDisableSurfaceCacheDelayDuration=_asynchronousRenderingDisableSurfaceCacheDelayDuration - In the implementation block
@property (assign) double preventMedusaSnapshotsAfterTransitionDuration;                                   //@synthesize preventMedusaSnapshotsAfterTransitionDuration=_preventMedusaSnapshotsAfterTransitionDuration - In the implementation block
@property (nonatomic,retain) SBFloatingSwitcherSettings * floatingSwitcherSettings;                        //@synthesize floatingSwitcherSettings=_floatingSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBAppSwitcherOrbGestureSettings * orbGestureSettings;                         //@synthesize orbGestureSettings=_orbGestureSettings - In the implementation block
@property (assign) double mScale;                                                                          //@synthesize mScale=_mScale - In the implementation block
@property (assign) double centerPoint;                                                                     //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign) double maxScale;                                                                        //@synthesize maxScale=_maxScale - In the implementation block
@property (assign) double mAlpha;                                                                          //@synthesize mAlpha=_mAlpha - In the implementation block
@property (assign) double bAlpha;                                                                          //@synthesize bAlpha=_bAlpha - In the implementation block
@property (assign) double mDarkening;                                                                      //@synthesize mDarkening=_mDarkening - In the implementation block
@property (assign) double bDarkening;                                                                      //@synthesize bDarkening=_bDarkening - In the implementation block
@property (assign) double maxDarkening;                                                                    //@synthesize maxDarkening=_maxDarkening - In the implementation block
@property (assign) double tetheredInsertionRemovalInsetForDeterminingVisibility;                           //@synthesize tetheredInsertionRemovalInsetForDeterminingVisibility=_tetheredInsertionRemovalInsetForDeterminingVisibility - In the implementation block
@property (assign) double switcherCardScaleWhileTouched;                                                   //@synthesize switcherCardScaleWhileTouched=_switcherCardScaleWhileTouched - In the implementation block
@property (assign) double switcherCardScaleWhileCursorHovered;                                             //@synthesize switcherCardScaleWhileCursorHovered=_switcherCardScaleWhileCursorHovered - In the implementation block
@property (assign) double switcherCardShadowRadius;                                                        //@synthesize switcherCardShadowRadius=_switcherCardShadowRadius - In the implementation block
@property (assign) double switcherCardShadowOpacity;                                                       //@synthesize switcherCardShadowOpacity=_switcherCardShadowOpacity - In the implementation block
@property (assign) double switcherCardShadowOffsetHorizontal;                                              //@synthesize switcherCardShadowOffsetHorizontal=_switcherCardShadowOffsetHorizontal - In the implementation block
@property (assign) double switcherCardShadowOffsetVertical;                                                //@synthesize switcherCardShadowOffsetVertical=_switcherCardShadowOffsetVertical - In the implementation block
@property (assign) double switcherCenterYOffsetPercentOfScreenHeight;                                      //@synthesize switcherCenterYOffsetPercentOfScreenHeight=_switcherCenterYOffsetPercentOfScreenHeight - In the implementation block
@property (assign) double switcherCardShadowRadiusWhileTouched;                                            //@synthesize switcherCardShadowRadiusWhileTouched=_switcherCardShadowRadiusWhileTouched - In the implementation block
@property (assign) double switcherCardShadowOpacityWhileTouched;                                           //@synthesize switcherCardShadowOpacityWhileTouched=_switcherCardShadowOpacityWhileTouched - In the implementation block
@property (assign) double switcherCardShadowOffsetHorizontalWhileTouched;                                  //@synthesize switcherCardShadowOffsetHorizontalWhileTouched=_switcherCardShadowOffsetHorizontalWhileTouched - In the implementation block
@property (assign) double switcherCardShadowOffsetVerticalWhileTouched;                                    //@synthesize switcherCardShadowOffsetVerticalWhileTouched=_switcherCardShadowOffsetVerticalWhileTouched - In the implementation block
@property (assign) double cursorHoverShadowRadiusInterpolationAmount;                                      //@synthesize cursorHoverShadowRadiusInterpolationAmount=_cursorHoverShadowRadiusInterpolationAmount - In the implementation block
@property (assign) double cursorHoverShadowOpacityInterpolationAmount;                                     //@synthesize cursorHoverShadowOpacityInterpolationAmount=_cursorHoverShadowOpacityInterpolationAmount - In the implementation block
@property (assign) double cursorHoverShadowOffsetInterpolationAmount;                                      //@synthesize cursorHoverShadowOffsetInterpolationAmount=_cursorHoverShadowOffsetInterpolationAmount - In the implementation block
@property (assign) double appExposeNonFloatingSingleRowScale;                                              //@synthesize appExposeNonFloatingSingleRowScale=_appExposeNonFloatingSingleRowScale - In the implementation block
@property (assign) double appExposeNonFloatingDoubleRowScale;                                              //@synthesize appExposeNonFloatingDoubleRowScale=_appExposeNonFloatingDoubleRowScale - In the implementation block
@property (assign) double appExposeFloatingDoubleRowScale;                                                 //@synthesize appExposeFloatingDoubleRowScale=_appExposeFloatingDoubleRowScale - In the implementation block
@property (assign) double gridSwitcherPageScale;                                                           //@synthesize gridSwitcherPageScale=_gridSwitcherPageScale - In the implementation block
@property (assign) double gridSwitcherHorizontalInterpageSpacingLandscape;                                 //@synthesize gridSwitcherHorizontalInterpageSpacingLandscape=_gridSwitcherHorizontalInterpageSpacingLandscape - In the implementation block
@property (assign) double gridSwitcherVerticalNaturalSpacingLandscape;                                     //@synthesize gridSwitcherVerticalNaturalSpacingLandscape=_gridSwitcherVerticalNaturalSpacingLandscape - In the implementation block
@property (assign) double gridSwitcherHorizontalInterpageSpacingPortrait;                                  //@synthesize gridSwitcherHorizontalInterpageSpacingPortrait=_gridSwitcherHorizontalInterpageSpacingPortrait - In the implementation block
@property (assign) double gridSwitcherVerticalNaturalSpacingPortrait;                                      //@synthesize gridSwitcherVerticalNaturalSpacingPortrait=_gridSwitcherVerticalNaturalSpacingPortrait - In the implementation block
@property (assign) double gridSwitcherSnapToControlCenterHeightSlop;                                       //@synthesize gridSwitcherSnapToControlCenterHeightSlop=_gridSwitcherSnapToControlCenterHeightSlop - In the implementation block
@property (assign) double gridSwitcherSwipeUpNormalizedRubberbandingRange;                                 //@synthesize gridSwitcherSwipeUpNormalizedRubberbandingRange=_gridSwitcherSwipeUpNormalizedRubberbandingRange - In the implementation block
@property (assign) double gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;              //@synthesize gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale=_gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale - In the implementation block
@property (assign) double gridSwitcherSwipeUpMinimumScale;                                                 //@synthesize gridSwitcherSwipeUpMinimumScale=_gridSwitcherSwipeUpMinimumScale - In the implementation block
@property (assign) unsigned long long numberOfSnapshotsToCacheInSwitcher;                                  //@synthesize numberOfSnapshotsToCacheInSwitcher=_numberOfSnapshotsToCacheInSwitcher - In the implementation block
@property (assign) unsigned long long numberOfSnapshotsToAlwaysKeepAround;                                 //@synthesize numberOfSnapshotsToAlwaysKeepAround=_numberOfSnapshotsToAlwaysKeepAround - In the implementation block
@property (assign) double spacingBetweenLeadingEdgeAndIcon;                                                //@synthesize spacingBetweenLeadingEdgeAndIcon=_spacingBetweenLeadingEdgeAndIcon - In the implementation block
@property (assign) double spacingBetweenTrailingEdgeAndLabels;                                             //@synthesize spacingBetweenTrailingEdgeAndLabels=_spacingBetweenTrailingEdgeAndLabels - In the implementation block
@property (assign) double iconSideLength;                                                                  //@synthesize iconSideLength=_iconSideLength - In the implementation block
@property (assign) double spacingBetweenSnapshotAndIcon;                                                   //@synthesize spacingBetweenSnapshotAndIcon=_spacingBetweenSnapshotAndIcon - In the implementation block
@property (assign) double spacingBetweenSnapshotAndDescriptionLabelBaseline;                               //@synthesize spacingBetweenSnapshotAndDescriptionLabelBaseline=_spacingBetweenSnapshotAndDescriptionLabelBaseline - In the implementation block
@property (assign) double spacingBetweenTitleAndSubtitleBaseline;                                          //@synthesize spacingBetweenTitleAndSubtitleBaseline=_spacingBetweenTitleAndSubtitleBaseline - In the implementation block
@property (assign) double spacingBetweenIconAndLabel;                                                      //@synthesize spacingBetweenIconAndLabel=_spacingBetweenIconAndLabel - In the implementation block
@property (assign) double spacingBetweenLabelAndSecondIcon;                                                //@synthesize spacingBetweenLabelAndSecondIcon=_spacingBetweenLabelAndSecondIcon - In the implementation block
@property (assign) double spacingBetweenBoundsCenterAndSecondIcon;                                         //@synthesize spacingBetweenBoundsCenterAndSecondIcon=_spacingBetweenBoundsCenterAndSecondIcon - In the implementation block
@property (assign) double deckSwitcherPageScale;                                                           //@synthesize deckSwitcherPageScale=_deckSwitcherPageScale - In the implementation block
@property (assign) double deckSwitcherDecelerationRate;                                                    //@synthesize deckSwitcherDecelerationRate=_deckSwitcherDecelerationRate - In the implementation block
@property (assign) double aExpLayoutCoeff;                                                                 //@synthesize aExpLayoutCoeff=_aExpLayoutCoeff - In the implementation block
@property (assign) double bExpLayoutCoeff;                                                                 //@synthesize bExpLayoutCoeff=_bExpLayoutCoeff - In the implementation block
@property (assign) double depthPadding;                                                                    //@synthesize depthPadding=_depthPadding - In the implementation block
@property (assign) double offscreenCardScaleForFlyIn;                                                      //@synthesize offscreenCardScaleForFlyIn=_offscreenCardScaleForFlyIn - In the implementation block
@property (assign) double coplanarSpacingPhone;                                                            //@synthesize coplanarSpacingPhone=_coplanarSpacingPhone - In the implementation block
@property (assign) double coplanarSpacingPad;                                                              //@synthesize coplanarSpacingPad=_coplanarSpacingPad - In the implementation block
@property (assign) BOOL useTitleOpacityPrototypeSettings;                                                  //@synthesize useTitleOpacityPrototypeSettings=_useTitleOpacityPrototypeSettings - In the implementation block
@property (assign) double titleOpacityACoeff;                                                              //@synthesize titleOpacityACoeff=_titleOpacityACoeff - In the implementation block
@property (assign) double titleOpacityBCoeff;                                                              //@synthesize titleOpacityBCoeff=_titleOpacityBCoeff - In the implementation block
@property (assign) double titleOpacityCCoeff;                                                              //@synthesize titleOpacityCCoeff=_titleOpacityCCoeff - In the implementation block
@property (assign) double titleOpacityDCoeff;                                                              //@synthesize titleOpacityDCoeff=_titleOpacityDCoeff - In the implementation block
@property (assign) BOOL showModifierDebugLabel;                                                            //@synthesize showModifierDebugLabel=_showModifierDebugLabel - In the implementation block
@property (assign) BOOL showMainModifierTimeline;                                                          //@synthesize showMainModifierTimeline=_showMainModifierTimeline - In the implementation block
@property (assign) BOOL showFloatingModifierTimeline;                                                      //@synthesize showFloatingModifierTimeline=_showFloatingModifierTimeline - In the implementation block
@property (assign) BOOL shouldDisableSwitcherModelUpdatesForDemo;                                          //@synthesize shouldDisableSwitcherModelUpdatesForDemo=_shouldDisableSwitcherModelUpdatesForDemo - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherAnimationSettings * animationSettings;                         //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) PTOutlet * stashModelOutlet;                                                  //@synthesize stashModelOutlet=_stashModelOutlet - In the implementation block
@property (nonatomic,retain) PTOutlet * loadModelOutlet;                                                   //@synthesize loadModelOutlet=_loadModelOutlet - In the implementation block
@property (nonatomic,retain) PTOutlet * addAppsToModelOutlet;                                              //@synthesize addAppsToModelOutlet=_addAppsToModelOutlet - In the implementation block
@property (nonatomic,retain) PTOutlet * addPPTAppsToModelOutlet;                                           //@synthesize addPPTAppsToModelOutlet=_addPPTAppsToModelOutlet - In the implementation block
+(id)settingsControllerModule;
-(void)setFloatingSwitcherSettings:(SBFloatingSwitcherSettings *)arg1 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)setDefaultValues;
-(void)setCursorHoverShadowOpacityInterpolationAmount:(double)arg1 ;
-(double)mScale;
-(double)gridSwitcherVerticalNaturalSpacingPortrait;
-(SBFluidSwitcherAnimationSettings *)animationSettings;
-(double)gridSwitcherPageScale;
-(void)setSwitcherStyle:(long long)arg1 ;
-(BOOL)simplicityOptionNoIcons;
-(SBFloatingSwitcherSettings *)floatingSwitcherSettings;
-(void)setGridSwitcherHorizontalInterpageSpacingLandscape:(double)arg1 ;
-(void)setCenterPoint:(double)arg1 ;
-(double)switcherCardScaleWhileTouched;
-(double)gridSwitcherVerticalNaturalSpacingLandscape;
-(void)setSwitcherCardShadowOpacityWhileTouched:(double)arg1 ;
-(void)setMaxDarkening:(double)arg1 ;
-(void)setSpacingBetweenTrailingEdgeAndLabels:(double)arg1 ;
-(SBAppSwitcherOrbGestureSettings *)orbGestureSettings;
-(double)coplanarSpacingPad;
-(BOOL)useAsynchronousRendering;
-(double)asynchronousRenderingDisableSurfaceCacheDelayDuration;
-(void)setAnimationSettings:(SBFluidSwitcherAnimationSettings *)arg1 ;
-(PTOutlet *)addPPTAppsToModelOutlet;
-(void)setGridSwitcherSwipeUpNormalizedRubberbandingRange:(double)arg1 ;
-(double)switcherCardShadowRadius;
-(double)preventMedusaSnapshotsAfterTransitionDuration;
-(double)deckSwitcherDecelerationRate;
-(unsigned long long)numberOfSnapshotsToAlwaysKeepAround;
-(double)titleOpacityCCoeff;
-(void)setSimplicityOptionNoSnapshots:(BOOL)arg1 ;
-(void)setSwitcherCardShadowOffsetVertical:(double)arg1 ;
-(double)cursorHoverShadowOffsetInterpolationAmount;
-(void)setShowModifierDebugLabel:(BOOL)arg1 ;
-(void)setMaxScale:(double)arg1 ;
-(PTOutlet *)stashModelOutlet;
-(void)setSpacingBetweenLeadingEdgeAndIcon:(double)arg1 ;
-(double)switcherCardShadowOffsetVerticalWhileTouched;
-(double)spacingBetweenBoundsCenterAndSecondIcon;
-(double)titleOpacityBCoeff;
-(void)setDeckSwitcherDecelerationRate:(double)arg1 ;
-(void)setCursorHoverShadowRadiusInterpolationAmount:(double)arg1 ;
-(double)depthPadding;
-(void)setGridSwitcherSnapToControlCenterHeightSlop:(double)arg1 ;
-(void)setPreventMedusaSnapshotsAfterTransitionDuration:(double)arg1 ;
-(double)_spacingBetweenLeadingEdgeAndIcon;
-(void)setSwitcherCardScaleWhileCursorHovered:(double)arg1 ;
-(long long)effectiveSwitcherStyle;
-(void)setOffscreenCardScaleForFlyIn:(double)arg1 ;
-(void)setSpacingBetweenBoundsCenterAndSecondIcon:(double)arg1 ;
-(void)setAppExposeNonFloatingSingleRowScale:(double)arg1 ;
-(void)setCoplanarSpacingPhone:(double)arg1 ;
-(double)switcherCenterYOffsetPercentOfScreenHeight;
-(void)setSpacingBetweenSnapshotAndIcon:(double)arg1 ;
-(void)setDepthPadding:(double)arg1 ;
-(double)maxScale;
-(void)setNumberOfSnapshotsToCacheInSwitcher:(unsigned long long)arg1 ;
-(long long)switcherStyle;
-(void)setMScale:(double)arg1 ;
-(void)setAddAppsToModelOutlet:(PTOutlet *)arg1 ;
-(double)bDarkening;
-(double)switcherCardScaleWhileCursorHovered;
-(void)setGridSwitcherSwipeUpMinimumScale:(double)arg1 ;
-(void)setSwitcherCardShadowOffsetHorizontal:(double)arg1 ;
-(void)setSwitcherCardShadowOffsetVerticalWhileTouched:(double)arg1 ;
-(BOOL)shouldDisableSwitcherModelUpdatesForDemo;
-(double)iconSideLength;
-(void)setShouldRoundCornersDuringSwipeUp:(BOOL)arg1 ;
-(void)setCursorHoverShadowOffsetInterpolationAmount:(double)arg1 ;
-(void)setAddPPTAppsToModelOutlet:(PTOutlet *)arg1 ;
-(BOOL)showFloats;
-(void)setSimplicityOptionNoBlurs:(BOOL)arg1 ;
-(double)switcherCardShadowOffsetHorizontal;
-(BOOL)showFloatingModifierTimeline;
-(double)switcherCardShadowRadiusWhileTouched;
-(void)setMDarkening:(double)arg1 ;
-(void)setCoplanarSpacingPad:(double)arg1 ;
-(void)setSimplicityOptionNoShadows:(BOOL)arg1 ;
-(void)setTitleOpacityCCoeff:(double)arg1 ;
-(void)setSpacingBetweenIconAndLabel:(double)arg1 ;
-(void)setAppExposeNonFloatingDoubleRowScale:(double)arg1 ;
-(void)setNumberOfSnapshotsToAlwaysKeepAround:(unsigned long long)arg1 ;
-(double)spacingBetweenTrailingEdgeAndLabels;
-(void)setSpacingBetweenLabelAndSecondIcon:(double)arg1 ;
-(void)setSwitcherCenterYOffsetPercentOfScreenHeight:(double)arg1 ;
-(void)setUseTitleOpacityPrototypeSettings:(BOOL)arg1 ;
-(BOOL)simplicityOptionNoLabels;
-(double)gridSwitcherSwipeUpNormalizedRubberbandingRange;
-(double)spacingBetweenSnapshotAndIcon;
-(void)setAppExposeFloatingDoubleRowScale:(double)arg1 ;
-(double)titleOpacityACoeff;
-(void)setBAlpha:(double)arg1 ;
-(void)setBDarkening:(double)arg1 ;
-(void)setSwitcherCardShadowRadiusWhileTouched:(double)arg1 ;
-(BOOL)useTitleOpacityPrototypeSettings;
-(void)setShowFloats:(BOOL)arg1 ;
-(double)mDarkening;
-(void)setGridSwitcherVerticalNaturalSpacingPortrait:(double)arg1 ;
-(void)setTitleOpacityACoeff:(double)arg1 ;
-(BOOL)simplicityOptionNoShadows;
-(double)titleOpacityDCoeff;
-(long long)simplicityOptions;
-(void)setSimplicityOptionNoControlCenter:(BOOL)arg1 ;
-(double)deckSwitcherPageScale;
-(void)setGridSwitcherPageScale:(double)arg1 ;
-(BOOL)showMainModifierTimeline;
-(void)setAExpLayoutCoeff:(double)arg1 ;
-(BOOL)simplicityOptionNoSnapshots;
-(void)setShowFloatingModifierTimeline:(BOOL)arg1 ;
-(double)switcherCardShadowOffsetHorizontalWhileTouched;
-(void)setSpacingBetweenTitleAndSubtitleBaseline:(double)arg1 ;
-(void)setUseAsynchronousRendering:(BOOL)arg1 ;
-(double)appExposeNonFloatingDoubleRowScale;
-(double)spacingBetweenSnapshotAndDescriptionLabelBaseline;
-(double)appExposeNonFloatingSingleRowScale;
-(double)offscreenCardScaleForFlyIn;
-(void)setSimplicityOptionNoCrossfade:(BOOL)arg1 ;
-(void)setLoadModelOutlet:(PTOutlet *)arg1 ;
-(BOOL)simplicityOptionNoSnapshotBkg;
-(void)setBExpLayoutCoeff:(double)arg1 ;
-(BOOL)simplicityOptionNoBlurs;
-(double)maxDarkening;
-(double)centerPoint;
-(void)setOrbGestureSettings:(SBAppSwitcherOrbGestureSettings *)arg1 ;
-(unsigned long long)numberOfSnapshotsToCacheInSwitcher;
-(double)appExposeFloatingDoubleRowScale;
-(void)setShouldDisableSwitcherModelUpdatesForDemo:(BOOL)arg1 ;
-(double)gridSwitcherSwipeUpMinimumScale;
-(double)switcherCardShadowOffsetVertical;
-(void)setSimplicityOptionNoSnapshotBkg:(BOOL)arg1 ;
-(double)cursorHoverShadowOpacityInterpolationAmount;
-(double)cursorHoverShadowRadiusInterpolationAmount;
-(double)gridSwitcherHorizontalInterpageSpacingLandscape;
-(void)setMAlpha:(double)arg1 ;
-(BOOL)simplicityOptionNoCrossfade;
-(void)setTitleOpacityBCoeff:(double)arg1 ;
-(double)spacingBetweenLabelAndSecondIcon;
-(BOOL)shouldSimplifyForOptions:(long long)arg1 ;
-(void)setStashModelOutlet:(PTOutlet *)arg1 ;
-(double)aExpLayoutCoeff;
-(double)mAlpha;
-(void)setSimplicityOptionNoLabels:(BOOL)arg1 ;
-(void)setIconSideLength:(double)arg1 ;
-(void)setDeckSwitcherPageScale:(double)arg1 ;
-(void)setGridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale:(double)arg1 ;
-(void)setSwitcherCardShadowOpacity:(double)arg1 ;
-(double)coplanarSpacingPhone;
-(void)setTitleOpacityDCoeff:(double)arg1 ;
-(void)setSwitcherCardShadowOffsetHorizontalWhileTouched:(double)arg1 ;
-(double)spacingBetweenIconAndLabel;
-(BOOL)simplicityOptionNoControlCenter;
-(double)switcherCardShadowOpacity;
-(void)setShowMainModifierTimeline:(BOOL)arg1 ;
-(void)setGridSwitcherHorizontalInterpageSpacingPortrait:(double)arg1 ;
-(void)setGridSwitcherVerticalNaturalSpacingLandscape:(double)arg1 ;
-(void)setTetheredInsertionRemovalInsetForDeterminingVisibility:(double)arg1 ;
-(double)switcherCardShadowOpacityWhileTouched;
-(double)gridSwitcherSnapToControlCenterHeightSlop;
-(void)setSwitcherCardShadowRadius:(double)arg1 ;
-(BOOL)shouldRoundCornersDuringSwipeUp;
-(void)setSimplicityOptionNoIcons:(BOOL)arg1 ;
-(double)bAlpha;
-(double)spacingBetweenTitleAndSubtitleBaseline;
-(void)setAsynchronousRenderingDisableSurfaceCacheDelayDuration:(double)arg1 ;
-(PTOutlet *)addAppsToModelOutlet;
-(BOOL)showModifierDebugLabel;
-(void)setSpacingBetweenSnapshotAndDescriptionLabelBaseline:(double)arg1 ;
-(void)setSwitcherCardScaleWhileTouched:(double)arg1 ;
-(double)gridSwitcherHorizontalInterpageSpacingPortrait;
-(double)gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;
-(double)spacingBetweenLeadingEdgeAndIcon;
-(double)bExpLayoutCoeff;
-(void)setSimplicityOptions:(long long)arg1 ;
-(double)tetheredInsertionRemovalInsetForDeterminingVisibility;
-(PTOutlet *)loadModelOutlet;
@end

