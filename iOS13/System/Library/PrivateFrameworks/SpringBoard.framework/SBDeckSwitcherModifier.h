/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;
@class NSString;

@interface SBDeckSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding> {

	long long _grabbedDraggingIndex;
	double _outputContentOffsetAdjustmentForIndexChange;
	double _inputContentOffsetAdjustmentForIndexChange;
	CGPoint _start;
	CGPoint _originalLocationInView;
	double _initialTranslationAdjustment;
	BOOL _useTitleOpacityPrototypeSettings;
	unsigned long long _ongoingAppLayoutRemovals;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
-(id)init;
-(NSString *)debugDescription;
-(CGSize)contentSize;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)isScrollEnabled;
-(unsigned long long)numberOfItems;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(double)decelerationRate;
-(CGPoint)pagingOrigin;
-(double)wallpaperScale;
-(double)dimmingAlpha;
-(unsigned long long)scrollAxis;
-(double)contentViewScale;
-(long long)wallpaperStyle;
-(double)containerStatusBarAnimationDuration;
-(double)switcherCardScale;
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
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(double)homeScreenScale;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)snapshotScale;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandHomeGrabberView;
-(BOOL)shouldTetherTransitionCompletion;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(CGSize)fittedContentSize;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(long long)layoutUpdateMode;
-(BOOL)shouldTruncateAnimationsUponTransitionCompletion;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(id)positionSettingsForIndex:(unsigned long long)arg1 ;
-(id)scaleSettingsForIndex:(unsigned long long)arg1 ;
-(id)cornerRadiusSettingsForIndex:(unsigned long long)arg1 ;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(BOOL)scrollViewPagingEnabled;
-(CGSize)interpageSpacingForPaging;
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
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)resetAdjustedScrollingState;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(long long)preferredSnapshotOrientation;
-(unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
-(BOOL)cardsNeedBackgroundWallpaperTreatment;
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
-(void)_applyPrototypeSettings;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(BOOL)interpolatesDuringSwipeToKill;
-(double)centerYOffsetWhenPresented;
-(double)cardCornerRadiusInSwitcher;
-(unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(double)scrollProgressForIndex:(unsigned long long)arg1 ;
-(double)desiredXOriginForQuantizedTopPage;
-(double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3 ;
-(double)scrollRange;
-(double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
-(double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
-(double)_scrollProgress;
-(CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringScrollOffset:(BOOL)arg4 ;
-(double)_scaleForTransformForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(CGRect)arg2 scrollProgress:(double)arg3 ;
-(BOOL)_priorIndex:(unsigned long long)arg1 fullyObscuresCardForIndex:(unsigned long long)arg2 ;
-(double)_valueAlongDepthCurveForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 aCoefficient:(double)arg3 bCoefficient:(double)arg4 ;
-(double)_unscaledCardCornerRadius;
-(unsigned long long)_indexOfCurrentCenteredCard;
-(unsigned long long)_directionForRemovingIndex:(unsigned long long)arg1 centeredIndex:(unsigned long long)arg2 ;
-(unsigned long long)_newIndexOfItemAtIndex:(unsigned long long)arg1 afterRemovingItemAtIndex:(unsigned long long)arg2 ;
-(CGPoint)_contentOffsetForScrollProgress:(double)arg1 ;
-(double)_scrollProgressForContentOffset:(CGPoint)arg1 ;
-(double)_restingScrollProgressForProgress:(double)arg1 velocity:(CGPoint)arg2 ;
-(long long)_topIndexForLocationInContainerCoordinateSpace:(CGPoint)arg1 ;
-(CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(CGPoint)arg2 start:(CGPoint)arg3 originalLocationInView:(CGPoint)arg4 locationInView:(CGPoint)arg5 ;
-(double)_scrollMin;
-(double)_counteractScrollingForOffset:(double)arg1 scrollProgress:(double)arg2 ;
-(double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3 ;
-(double)_preferredVisibleMarginForTopPage;
-(double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2 ;
-(double)_scaleInSwitcherViewForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
@end

