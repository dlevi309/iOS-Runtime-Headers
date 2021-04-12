/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBChainableModifier.h>
#import <libobjc.A.dylib/SBSwitcherQueryProviding.h>
#import <libobjc.A.dylib/SBSwitcherContextProviding.h>

@class NSString;

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherQueryProviding, SBSwitcherContextProviding> {

	long long _state;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryProtocol;
+(id)contextProtocol;
-(CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2 ;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1 ;
-(double)morphToPiPSourceAlpha;
-(double)morphToPiPTargetScale;
-(CGPoint)morphToPiPTargetCenter;
-(double)floatingDockWindowLevel;
-(double)switcherWindowLevel;
-(CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(BOOL)isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg1 ;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1 ;
-(id)homeScreenIconLocationForAppLayout:(id)arg1 ;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1 ;
-(double)homeScreenIconScaleForAppLayout:(id)arg1 ;
-(CGRect)homeScreenIconFrameForAppLayout:(id)arg1 ;
-(BOOL)isStudyLogEnabled;
-(BOOL)isDevicePad;
-(long long)numberOfVisibleCards;
-(id)entityRemovalSettings;
-(id)homeGestureSettings;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1 ;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1 ;
-(BOOL)homeScreenHasOpenFolder;
-(BOOL)isFloatingDockGesturePossible;
-(double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
-(CGSize)tetheredScrollViewContentSize;
-(unsigned long long)numberOfTetheredAppLayouts;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(long long)switcherInterfaceOrientation;
-(BOOL)isFloatingDockFullyPresented;
-(double)floatingDockViewTopMargin;
-(double)floatingDockHeight;
-(CGRect)containerViewBounds;
-(BOOL)isRTLEnabled;
-(CGRect)switcherViewBounds;
-(id)switcherSettings;
-(id)appLayouts;
-(id)medusaSettings;
-(BOOL)isShowingSpotlightOrTodayView;
-(BOOL)isReduceMotionEnabled;
-(CGPoint)scrollViewContentOffset;
-(BOOL)hasHomeButton;
-(double)displayCornerRadius;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1 ;
-(BOOL)isTetheredScrollingEnabled;
-(double)dockWindowLevel;
-(unsigned long long)dockWindowLevelPriority;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)dockProgress;
-(long long)dockUpdateMode;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)keyboardSuppressionMode;
-(long long)sceneDeactivationReason;
-(BOOL)wantsResignActiveAssertion;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsHomeScreenCursorInteractions;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)isHomeGrabberVisible;
-(unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
-(long long)preferredSnapshotOrientation;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(BOOL)itemContainersAllowContentViewTouches;
-(BOOL)itemContainersUseBrightMaterial;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(id)appLayoutsForInsertionOrRemoval;
-(BOOL)dimmingViewBlocksTouches;
-(id)cornerRadiusSettingsForIndex:(unsigned long long)arg1 ;
-(id)scaleSettingsForIndex:(unsigned long long)arg1 ;
-(id)positionSettingsForIndex:(unsigned long long)arg1 ;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)shouldTruncateAnimationsUponTransitionCompletion;
-(long long)layoutUpdateMode;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(BOOL)shouldTetherTransitionCompletion;
-(BOOL)shouldRubberbandHomeGrabberView;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(double)homeScreenScale;
-(BOOL)wantsMinificationFilter;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)isContainerStatusBarVisible;
-(long long)liveContentRasterizationStyle;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonScale;
-(double)reopenClosedWindowsButtonAlpha;
-(double)plusButtonAlpha;
-(id)topMostAppLayouts;
-(double)backdropBlurProgress;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(long long)plusButtonStyle;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(BOOL)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
-(NSRange)fullSizeSnapshotsRange;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isWallpaperRequiredForSwitcher;
-(long long)backdropBlurType;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(id)layoutSettings;
-(id)opacitySettings;
-(double)containerStatusBarAnimationDuration;
-(long long)wallpaperStyle;
-(double)contentViewScale;
-(double)dimmingAlpha;
-(double)wallpaperScale;
-(BOOL)isScrollEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)handleAppExposeEvent:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(id)handleReduceMotionChangedEvent:(id)arg1 ;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4 ;
-(CGRect)scaledFrameForIndex:(unsigned long long)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)handleMedusaSettingsChangedEvent:(id)arg1 ;
-(id)_forwardEventToChildren:(id)arg1 ;
@end

