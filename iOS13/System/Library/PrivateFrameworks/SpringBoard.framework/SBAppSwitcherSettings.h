/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _selectionHighlightStyle;
	double _highlightSquishyScale;
	double _highlightDimOpacity;
	double _switcherCardShadowRadius;
	double _switcherCardShadowOpacity;
	double _switcherCardShadowOffset;
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
@property (assign) long long selectionHighlightStyle;                                                      //@synthesize selectionHighlightStyle=_selectionHighlightStyle - In the implementation block
@property (assign) double highlightSquishyScale;                                                           //@synthesize highlightSquishyScale=_highlightSquishyScale - In the implementation block
@property (assign) double highlightDimOpacity;                                                             //@synthesize highlightDimOpacity=_highlightDimOpacity - In the implementation block
@property (assign) double switcherCardShadowRadius;                                                        //@synthesize switcherCardShadowRadius=_switcherCardShadowRadius - In the implementation block
@property (assign) double switcherCardShadowOpacity;                                                       //@synthesize switcherCardShadowOpacity=_switcherCardShadowOpacity - In the implementation block
@property (assign) double switcherCardShadowOffset;                                                        //@synthesize switcherCardShadowOffset=_switcherCardShadowOffset - In the implementation block
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
-(double)centerPoint;
-(void)setDefaultValues;
-(SBFluidSwitcherAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(SBFluidSwitcherAnimationSettings *)arg1 ;
-(double)maxScale;
-(id)archiveValueForKey:(id)arg1 ;
-(void)setMaxScale:(double)arg1 ;
-(double)mScale;
-(double)mAlpha;
-(void)setCenterPoint:(double)arg1 ;
-(double)switcherCardShadowRadius;
-(double)switcherCardShadowOpacity;
-(double)switcherCardShadowOffset;
-(double)highlightDimOpacity;
-(BOOL)shouldSimplifyForOptions:(long long)arg1 ;
-(double)offscreenCardScaleForFlyIn;
-(unsigned long long)numberOfSnapshotsToAlwaysKeepAround;
-(unsigned long long)numberOfSnapshotsToCacheInSwitcher;
-(void)setShowFloats:(BOOL)arg1 ;
-(BOOL)showFloats;
-(BOOL)showModifierDebugLabel;
-(double)deckSwitcherPageScale;
-(BOOL)shouldRoundCornersDuringSwipeUp;
-(double)coplanarSpacingPad;
-(double)coplanarSpacingPhone;
-(SBFloatingSwitcherSettings *)floatingSwitcherSettings;
-(SBAppSwitcherOrbGestureSettings *)orbGestureSettings;
-(double)appExposeFloatingDoubleRowScale;
-(double)appExposeNonFloatingSingleRowScale;
-(double)appExposeNonFloatingDoubleRowScale;
-(long long)selectionHighlightStyle;
-(double)highlightSquishyScale;
-(long long)effectiveSwitcherStyle;
-(double)gridSwitcherPageScale;
-(double)preventMedusaSnapshotsAfterTransitionDuration;
-(BOOL)showMainModifierTimeline;
-(BOOL)showFloatingModifierTimeline;
-(double)asynchronousRenderingDisableSurfaceCacheDelayDuration;
-(long long)switcherStyle;
-(BOOL)shouldDisableSwitcherModelUpdatesForDemo;
-(BOOL)useAsynchronousRendering;
-(double)tetheredInsertionRemovalInsetForDeterminingVisibility;
-(void)setShouldDisableSwitcherModelUpdatesForDemo:(BOOL)arg1 ;
-(void)setMScale:(double)arg1 ;
-(void)setMAlpha:(double)arg1 ;
-(void)setBAlpha:(double)arg1 ;
-(void)setMDarkening:(double)arg1 ;
-(void)setBDarkening:(double)arg1 ;
-(void)setMaxDarkening:(double)arg1 ;
-(void)setTetheredInsertionRemovalInsetForDeterminingVisibility:(double)arg1 ;
-(void)setSelectionHighlightStyle:(long long)arg1 ;
-(void)setHighlightSquishyScale:(double)arg1 ;
-(void)setHighlightDimOpacity:(double)arg1 ;
-(void)setSwitcherCardShadowRadius:(double)arg1 ;
-(void)setSwitcherCardShadowOffset:(double)arg1 ;
-(void)setSwitcherCardShadowOpacity:(double)arg1 ;
-(void)setGridSwitcherPageScale:(double)arg1 ;
-(void)setGridSwitcherHorizontalInterpageSpacingLandscape:(double)arg1 ;
-(void)setGridSwitcherVerticalNaturalSpacingLandscape:(double)arg1 ;
-(void)setGridSwitcherHorizontalInterpageSpacingPortrait:(double)arg1 ;
-(void)setGridSwitcherVerticalNaturalSpacingPortrait:(double)arg1 ;
-(void)setGridSwitcherSnapToControlCenterHeightSlop:(double)arg1 ;
-(void)setGridSwitcherSwipeUpNormalizedRubberbandingRange:(double)arg1 ;
-(void)setGridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale:(double)arg1 ;
-(void)setGridSwitcherSwipeUpMinimumScale:(double)arg1 ;
-(void)setAppExposeNonFloatingSingleRowScale:(double)arg1 ;
-(void)setAppExposeNonFloatingDoubleRowScale:(double)arg1 ;
-(void)setAppExposeFloatingDoubleRowScale:(double)arg1 ;
-(void)setNumberOfSnapshotsToCacheInSwitcher:(unsigned long long)arg1 ;
-(void)setNumberOfSnapshotsToAlwaysKeepAround:(unsigned long long)arg1 ;
-(void)setSpacingBetweenLeadingEdgeAndIcon:(double)arg1 ;
-(void)setSpacingBetweenTrailingEdgeAndLabels:(double)arg1 ;
-(void)setIconSideLength:(double)arg1 ;
-(void)setSpacingBetweenSnapshotAndIcon:(double)arg1 ;
-(void)setSpacingBetweenSnapshotAndDescriptionLabelBaseline:(double)arg1 ;
-(void)setSpacingBetweenTitleAndSubtitleBaseline:(double)arg1 ;
-(void)setSpacingBetweenIconAndLabel:(double)arg1 ;
-(void)setSpacingBetweenLabelAndSecondIcon:(double)arg1 ;
-(void)setSpacingBetweenBoundsCenterAndSecondIcon:(double)arg1 ;
-(void)setSimplicityOptions:(long long)arg1 ;
-(void)setUseAsynchronousRendering:(BOOL)arg1 ;
-(void)setShouldRoundCornersDuringSwipeUp:(BOOL)arg1 ;
-(void)setAsynchronousRenderingDisableSurfaceCacheDelayDuration:(double)arg1 ;
-(void)setPreventMedusaSnapshotsAfterTransitionDuration:(double)arg1 ;
-(void)setCoplanarSpacingPhone:(double)arg1 ;
-(void)setCoplanarSpacingPad:(double)arg1 ;
-(void)setSwitcherStyle:(long long)arg1 ;
-(void)setDeckSwitcherPageScale:(double)arg1 ;
-(void)setDeckSwitcherDecelerationRate:(double)arg1 ;
-(void)setAExpLayoutCoeff:(double)arg1 ;
-(void)setBExpLayoutCoeff:(double)arg1 ;
-(void)setDepthPadding:(double)arg1 ;
-(void)setUseTitleOpacityPrototypeSettings:(BOOL)arg1 ;
-(void)setTitleOpacityACoeff:(double)arg1 ;
-(void)setTitleOpacityBCoeff:(double)arg1 ;
-(void)setTitleOpacityCCoeff:(double)arg1 ;
-(void)setTitleOpacityDCoeff:(double)arg1 ;
-(void)setOffscreenCardScaleForFlyIn:(double)arg1 ;
-(void)setShowModifierDebugLabel:(BOOL)arg1 ;
-(void)setShowMainModifierTimeline:(BOOL)arg1 ;
-(long long)simplicityOptions;
-(void)setSimplicityOptionNoSnapshots:(BOOL)arg1 ;
-(void)setSimplicityOptionNoCrossfade:(BOOL)arg1 ;
-(void)setSimplicityOptionNoLabels:(BOOL)arg1 ;
-(void)setSimplicityOptionNoIcons:(BOOL)arg1 ;
-(void)setSimplicityOptionNoBlurs:(BOOL)arg1 ;
-(void)setSimplicityOptionNoShadows:(BOOL)arg1 ;
-(void)setSimplicityOptionNoControlCenter:(BOOL)arg1 ;
-(void)setFloatingSwitcherSettings:(SBFloatingSwitcherSettings *)arg1 ;
-(void)setOrbGestureSettings:(SBAppSwitcherOrbGestureSettings *)arg1 ;
-(double)bAlpha;
-(double)mDarkening;
-(double)bDarkening;
-(double)maxDarkening;
-(double)gridSwitcherHorizontalInterpageSpacingLandscape;
-(double)gridSwitcherVerticalNaturalSpacingLandscape;
-(double)gridSwitcherHorizontalInterpageSpacingPortrait;
-(double)gridSwitcherVerticalNaturalSpacingPortrait;
-(double)gridSwitcherSnapToControlCenterHeightSlop;
-(double)gridSwitcherSwipeUpNormalizedRubberbandingRange;
-(double)gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;
-(double)gridSwitcherSwipeUpMinimumScale;
-(double)spacingBetweenLeadingEdgeAndIcon;
-(double)spacingBetweenTrailingEdgeAndLabels;
-(double)iconSideLength;
-(double)spacingBetweenSnapshotAndIcon;
-(double)spacingBetweenSnapshotAndDescriptionLabelBaseline;
-(double)spacingBetweenTitleAndSubtitleBaseline;
-(double)spacingBetweenIconAndLabel;
-(double)spacingBetweenLabelAndSecondIcon;
-(double)spacingBetweenBoundsCenterAndSecondIcon;
-(double)deckSwitcherDecelerationRate;
-(double)aExpLayoutCoeff;
-(double)bExpLayoutCoeff;
-(double)depthPadding;
-(BOOL)useTitleOpacityPrototypeSettings;
-(double)titleOpacityACoeff;
-(double)titleOpacityBCoeff;
-(double)titleOpacityCCoeff;
-(double)titleOpacityDCoeff;
-(void)setShowFloatingModifierTimeline:(BOOL)arg1 ;
-(PTOutlet *)stashModelOutlet;
-(void)setStashModelOutlet:(PTOutlet *)arg1 ;
-(PTOutlet *)loadModelOutlet;
-(void)setLoadModelOutlet:(PTOutlet *)arg1 ;
-(PTOutlet *)addAppsToModelOutlet;
-(void)setAddAppsToModelOutlet:(PTOutlet *)arg1 ;
-(PTOutlet *)addPPTAppsToModelOutlet;
-(void)setAddPPTAppsToModelOutlet:(PTOutlet *)arg1 ;
-(BOOL)simplicityOptionNoSnapshots;
-(BOOL)simplicityOptionNoCrossfade;
-(BOOL)simplicityOptionNoLabels;
-(BOOL)simplicityOptionNoIcons;
-(BOOL)simplicityOptionNoBlurs;
-(BOOL)simplicityOptionNoShadows;
-(BOOL)simplicityOptionNoControlCenter;
-(BOOL)simplicityOptionNoSnapshotBkg;
-(void)setSimplicityOptionNoSnapshotBkg:(BOOL)arg1 ;
@end

