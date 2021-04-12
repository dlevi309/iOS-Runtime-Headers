/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBChainableModifier.h>
#import <libobjc.A.dylib/SBSwitcherMultitaskingQueryProviding.h>
#import <libobjc.A.dylib/SBSwitcherContextProviding.h>

@class NSString;

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding> {

	BOOL _verifyModifierStackCoherencyCheckAfterHandlingEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryProtocol;
+(id)contextProtocol;
+(id)newEventResponse;
-(CGRect)switcherViewBounds;
-(BOOL)isFloatingDockGesturePossible;
-(id)appLayouts;
-(double)switcherWindowLevel;
-(id)homeScreenIconLocationForAppLayout:(id)arg1 ;
-(id)entityRemovalSettings;
-(BOOL)isShowingSpotlightOrTodayView;
-(id)medusaSettings;
-(CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2 ;
-(unsigned long long)newAppLayoutsGenCount;
-(BOOL)isReduceMotionEnabled;
-(id)genericSwitcherAccessoryLayoutElement;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg1 key:(id)arg2 ;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg1 ;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1 ;
-(double)floatingDockHeight;
-(id)switcherSettings;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1 ;
-(long long)homeScreenInterfaceOrientation;
-(BOOL)hasHomeButton;
-(double)floatingDockViewTopMargin;
-(CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(BOOL)isFloatingDockSupported;
-(double)displayCornerRadius;
-(long long)switcherInterfaceOrientation;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1 ;
-(double)morphToPiPTargetScale;
-(double)floatingDockWindowLevel;
-(CGPoint)scrollableQueryModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2 ;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(double)homeScreenIconScaleForAppLayout:(id)arg1 ;
-(BOOL)isStudyLogEnabled;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1 ;
-(BOOL)isHomeScreenSidebarVisible;
-(unsigned long long)appLayoutsGenerationCount;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1 ;
-(BOOL)homeScreenHasOpenFolder;
-(CGPoint)scrollViewContentOffset;
-(CGRect)containerViewBounds;
-(long long)numberOfVisibleCards;
-(id)switcherDimmingViewLayoutElement;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1 ;
-(BOOL)isDevicePad;
-(CGPoint)scrollableQueryModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2 ;
-(BOOL)isFloatingDockFullyPresented;
-(double)morphToPiPSourceAlpha;
-(CGPoint)morphToPiPTargetCenter;
-(id)switcherBackdropLayoutElement;
-(CGRect)homeScreenIconFrameForAppLayout:(id)arg1 ;
-(id)homeGestureSettings;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(unsigned long long)homeScreenIconGridSizeClassForAppLayout:(id)arg1 ;
-(BOOL)isRTLEnabled;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(id)scrollViewAttributes;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(void)resetAdjustedScrollingState;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)reopenClosedWindowsButtonAlpha;
-(double)homeScreenAlpha;
-(BOOL)isIndexSelectable:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)wantsHomeScreenPointerInteractions;
-(long long)switcherBackdropBlurType;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)containerStatusBarAnimationDuration;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(unsigned long long)dockWindowLevelPriority;
-(id)appLayoutsToResignActive;
-(unsigned long long)transactionCompletionOptions;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)wantsSwitcherBackdropBlur;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(long long)shadowStyleForAppLayout:(id)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)switcherDimmingViewBlocksTouches;
-(double)dockWindowLevel;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(long long)dockUpdateMode;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(double)dockProgress;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(id)keyboardSuppressionMode;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(long long)preferredSnapshotOrientationForAppLayout:(id)arg1 ;
-(BOOL)wantsSwitcherDimmingView;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)homeScreenDimmingAlpha;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(double)switcherBackdropBlurProgress;
-(BOOL)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1 ;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonScale;
-(double)switcherDimmingAlpha;
-(double)contentViewScale;
-(long long)plusButtonStyle;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(double)plusButtonAlpha;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(long long)wallpaperStyle;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(id)visibleAppLayouts;
-(long long)homeScreenBackdropBlurType;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(id)init;
-(id)handleScrollEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)loggingCategory;
-(id)handleTimerEvent:(id)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)_handleEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)defaultAppLayoutsToCacheSnapshots;
-(id)appLayoutsToCacheSnapshotsWithVisibleRange:(NSRange)arg1 numberOfSnapshotsToCache:(unsigned long long)arg2 biasForward:(BOOL)arg3 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)handleReduceMotionChangedEvent:(id)arg1 ;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4 ;
-(CGRect)scaledFrameForIndex:(unsigned long long)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleMedusaSettingsChangedEvent:(id)arg1 ;
-(BOOL)runsInternalVerificationAfterEventDispatch;
@end

