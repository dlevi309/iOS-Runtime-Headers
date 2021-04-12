/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@interface _SBGridFloorSwitcherModifier : SBSwitcherModifier
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)isScrollEnabled;
-(double)wallpaperScale;
-(double)dimmingAlpha;
-(double)contentViewScale;
-(long long)wallpaperStyle;
-(double)containerStatusBarAnimationDuration;
-(id)opacitySettings;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(NSRange)fullSizeSnapshotsRange;
-(BOOL)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(long long)plusButtonStyle;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)backdropBlurProgress;
-(id)topMostAppLayouts;
-(double)plusButtonAlpha;
-(double)reopenClosedWindowsButtonAlpha;
-(double)reopenClosedWindowsButtonScale;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(double)homeScreenScale;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandHomeGrabberView;
-(BOOL)shouldTetherTransitionCompletion;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(long long)layoutUpdateMode;
-(BOOL)shouldTruncateAnimationsUponTransitionCompletion;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(id)positionSettingsForIndex:(unsigned long long)arg1 ;
-(id)scaleSettingsForIndex:(unsigned long long)arg1 ;
-(id)cornerRadiusSettingsForIndex:(unsigned long long)arg1 ;
-(BOOL)dimmingViewBlocksTouches;
-(id)appLayoutsForInsertionOrRemoval;
-(double)homeScreenAlpha;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)itemContainersUseBrightMaterial;
-(BOOL)itemContainersAllowContentViewTouches;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(long long)preferredSnapshotOrientation;
-(unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
-(BOOL)isHomeGrabberVisible;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)wantsHomeScreenCursorInteractions;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)dockUpdateMode;
-(double)dockProgress;
-(BOOL)wantsDockWindowLevelAssertion;
-(unsigned long long)dockWindowLevelPriority;
-(double)dockWindowLevel;
-(BOOL)isTetheredScrollingEnabled;
-(unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
@end

