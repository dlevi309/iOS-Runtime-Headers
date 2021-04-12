/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@interface _SBGridFloorSwitcherModifier : SBSwitcherModifier
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
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(double)plusButtonAlpha;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)plusButtonStyle;
-(void)resetAdjustedScrollingState;
-(double)contentViewScale;
-(double)switcherDimmingAlpha;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)reopenClosedWindowsButtonScale;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
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
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)shadowStyleForAppLayout:(id)arg1 ;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsSwitcherBackdropBlur;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(double)homeScreenBackdropBlurProgress;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionCompletionOptions;
-(id)appLayoutsToResignActive;
-(unsigned long long)dockWindowLevelPriority;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(double)containerStatusBarAnimationDuration;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(long long)switcherBackdropBlurType;
-(BOOL)wantsHomeScreenPointerInteractions;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
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
@end

