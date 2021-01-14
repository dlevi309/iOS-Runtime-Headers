/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@interface SBDeckFloatingSwitcherModifier : SBSwitcherModifier {

	unsigned long long _ongoingAppLayoutRemovals;
	CGPoint _previousContentOffset;
	BOOL _isScrollingForward;

}
-(BOOL)isScrollEnabled;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(BOOL)_isIndexVisible:(unsigned long long)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(double)plusButtonAlpha;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)plusButtonStyle;
-(void)resetAdjustedScrollingState;
-(id)handleScrollEvent:(id)arg1 ;
-(double)contentViewScale;
-(double)switcherDimmingAlpha;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(double)reopenClosedWindowsButtonScale;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(double)_cardCornerRadiusInSwitcher;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(BOOL)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1 ;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(double)switcherBackdropBlurProgress;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(double)homeScreenDimmingAlpha;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)wantsSwitcherDimmingView;
-(long long)preferredSnapshotOrientationForAppLayout:(id)arg1 ;
-(double)wallpaperScale;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(id)keyboardSuppressionMode;
-(id)scrollViewAttributes;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)dockProgress;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(long long)dockUpdateMode;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(double)dockWindowLevel;
-(BOOL)switcherDimmingViewBlocksTouches;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)shadowStyleForAppLayout:(id)arg1 ;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(CGSize)_contentSize;
-(NSRange)_visibleAppLayoutRangeForContentOffset:(CGPoint)arg1 ;
-(BOOL)wantsSwitcherBackdropBlur;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionCompletionOptions;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(unsigned long long)dockWindowLevelPriority;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(double)containerStatusBarAnimationDuration;
-(void)_applyPrototypeSettings;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(long long)switcherBackdropBlurType;
-(BOOL)wantsHomeScreenPointerInteractions;
-(unsigned long long)_indexForContentOffset:(CGPoint)arg1 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(unsigned long long)_numberOfItems;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)isIndexSelectable:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonAlpha;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(UIEdgeInsets)_contentInsetsWithContainerViewBounds:(CGRect)arg1 switcherViewBounds:(CGRect)arg2 ;
-(CGSize)_contentSizeWithWithCardSize:(CGSize)arg1 contentInsets:(UIEdgeInsets)arg2 switcherViewBounds:(CGRect)arg3 numberOfItems:(unsigned long long)arg4 ;
-(double)_adjustedIndexForScaleForIndex:(unsigned long long)arg1 withCardSize:(CGSize)arg2 contentOffset:(CGPoint)arg3 contentSize:(CGSize)arg4 contentInsets:(UIEdgeInsets)arg5 switcherViewBounds:(CGRect)arg6 ;
-(double)_scaleForScaleAdjustedIndex:(double)arg1 ;
-(CGRect)_frameForIndex:(unsigned long long)arg1 withCardSize:(CGSize)arg2 scale:(double)arg3 adjustedIndexForScale:(double)arg4 contentOffset:(CGPoint)arg5 contentSize:(CGSize)arg6 contentInsets:(UIEdgeInsets)arg7 switcherViewBounds:(CGRect)arg8 ;
-(CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 withCardSize:(CGSize)arg2 contentOffset:(CGPoint)arg3 contentSize:(CGSize)arg4 contentInsets:(UIEdgeInsets)arg5 switcherViewBounds:(CGRect)arg6 ;
-(double)_distanceFromPreviousCardForCardAtIndex:(unsigned long long)arg1 ;
@end

