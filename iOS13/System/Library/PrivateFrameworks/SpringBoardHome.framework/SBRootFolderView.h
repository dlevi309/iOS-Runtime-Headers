/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBDockViewDelegate.h>

@protocol BSInvalidatable, SBIconListViewIconLocationTransitioning;
@class SBDockView, SBDockIconListView, UILabel, SBFParallaxSettings, NSMutableSet, _SBRootFolderLayoutWrapperView, SBSearchBackdropView, SBHMinusPageStepper, NSHashTable, SBSearchGesture, SBTitledHomeScreenButton, UIView, SBHRootFolderSettings, SBRootFolder, NSString;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBDockViewDelegate> {

	SBDockView* _dockView;
	SBDockIconListView* _dockListView;
	BOOL _dockViewBorrowed;
	UILabel* _idleTextView;
	SBFParallaxSettings* _parallaxSettings;
	NSMutableSet* _parallaxDisabledReasons;
	_SBRootFolderLayoutWrapperView* _searchPulldownWrapperView;
	_SBRootFolderLayoutWrapperView* _searchableTodayWrapperView;
	_SBRootFolderLayoutWrapperView* _sidebarWrapperView;
	SBSearchBackdropView* _searchBackdropView;
	SBHMinusPageStepper* _customPageAnimationStepper;
	double _baseOffsetForDeterminingScrollToSearchThreshold;
	double _pageWidthWhenScrollToSearchBeganDragging;
	BOOL _scrollToSearchIsDraggingOrAnimating;
	double _scrollOffsetWhenScrollingBegan;
	BOOL _wasScrolling;
	BOOL _isTodayViewBouncing;
	long long _iconListFrameOrientationOverride;
	long long _activeSidebarAnimationCount;
	NSHashTable* _dockOffscreenProgressSettingClients;
	id<BSInvalidatable> _dockStateDumpHandle;
	BOOL _dockExternal;
	BOOL _dockPinnedForRotation;
	BOOL _allowsAutoscrollToTodayView;
	BOOL _showsDoneButton;
	BOOL _todayViewPageHidden;
	BOOL _sidebarEffectivelyVisible;
	BOOL _todayViewBouncing;
	BOOL _shiftsPullDownSearchForVisibility;
	BOOL _sidebarSlideGestureActive;
	BOOL _sidebarVisibleWhenScrollingBegan;
	BOOL _allowsFreeScrollingUntilScrollingEnds;
	BOOL _userAttemptedToOverscrollDuringCurrentGesture;
	unsigned long long _dockEdge;
	SBSearchGesture* _searchGesture;
	SBTitledHomeScreenButton* _doneButton;
	UIView* _portraitHeaderView;
	double _sidebarVisibilityProgress;
	double _sidebarPinned;
	double _todayViewVisibilityProgress;
	double _pullDownSearchVisibilityProgress;
	unsigned long long _sidebarAllowedOrientations;
	id<SBIconListViewIconLocationTransitioning> _firstListViewIconLocationTransitionHandler;
	double _scrollingAdjustment;
	SBHRootFolderSettings* _folderSettings;
	unsigned long long _ignoresOverscrollOnFirstPageOrientations;

}

@property (assign,getter=isDockViewBorrowed,nonatomic) BOOL dockViewBorrowed;                                                     //@synthesize dockViewBorrowed=_dockViewBorrowed - In the implementation block
@property (nonatomic,retain) SBTitledHomeScreenButton * doneButton;                                                               //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,getter=isSidebarSlideGestureActive,nonatomic) BOOL sidebarSlideGestureActive;                                   //@synthesize sidebarSlideGestureActive=_sidebarSlideGestureActive - In the implementation block
@property (nonatomic,readonly) unsigned long long sidebarAllowedOrientations;                                                     //@synthesize sidebarAllowedOrientations=_sidebarAllowedOrientations - In the implementation block
@property (nonatomic,retain) id<SBIconListViewIconLocationTransitioning> firstListViewIconLocationTransitionHandler;              //@synthesize firstListViewIconLocationTransitionHandler=_firstListViewIconLocationTransitionHandler - In the implementation block
@property (assign,getter=wasSidebarVisibleWhenScrollingBegan,nonatomic) BOOL sidebarVisibleWhenScrollingBegan;                    //@synthesize sidebarVisibleWhenScrollingBegan=_sidebarVisibleWhenScrollingBegan - In the implementation block
@property (assign,nonatomic) double scrollingAdjustment;                                                                          //@synthesize scrollingAdjustment=_scrollingAdjustment - In the implementation block
@property (assign,nonatomic) BOOL allowsFreeScrollingUntilScrollingEnds;                                                          //@synthesize allowsFreeScrollingUntilScrollingEnds=_allowsFreeScrollingUntilScrollingEnds - In the implementation block
@property (nonatomic,retain) SBHRootFolderSettings * folderSettings;                                                              //@synthesize folderSettings=_folderSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long ignoresOverscrollOnFirstPageOrientations;                                       //@synthesize ignoresOverscrollOnFirstPageOrientations=_ignoresOverscrollOnFirstPageOrientations - In the implementation block
@property (assign,nonatomic) BOOL userAttemptedToOverscrollDuringCurrentGesture;                                                  //@synthesize userAttemptedToOverscrollDuringCurrentGesture=_userAttemptedToOverscrollDuringCurrentGesture - In the implementation block
@property (nonatomic,readonly) double todayViewPageScrollOffset; 
@property (nonatomic,readonly) long long todayViewPageIndex; 
@property (nonatomic,readonly) long long sidebarPageIndex; 
@property (nonatomic,readonly) BOOL hidesOffscreenCustomPageViews; 
@property (nonatomic,readonly) BOOL shouldFadeDockOutDuringTransitionToTodayView; 
@property (nonatomic,readonly) BOOL shouldFadePageControlOutDuringTransitionToTodayView; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (assign,nonatomic,__weak) id<SBRootFolderViewDelegate> delegate; 
@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings;                                                            //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (assign,nonatomic) unsigned long long dockEdge;                                                                         //@synthesize dockEdge=_dockEdge - In the implementation block
@property (nonatomic,readonly) double dockHeight; 
@property (getter=isDockExternal,nonatomic,readonly) BOOL dockExternal;                                                           //@synthesize dockExternal=_dockExternal - In the implementation block
@property (getter=isDockPinnedForRotation,nonatomic,readonly) BOOL dockPinnedForRotation;                                         //@synthesize dockPinnedForRotation=_dockPinnedForRotation - In the implementation block
@property (nonatomic,copy,readonly) NSString * dockIconLocation; 
@property (getter=isDockVisible,nonatomic,readonly) BOOL dockVisible; 
@property (nonatomic,retain) SBSearchGesture * searchGesture;                                                                     //@synthesize searchGesture=_searchGesture - In the implementation block
@property (nonatomic,readonly) double currentDockOffscreenFraction; 
@property (nonatomic,readonly) SBDockView * dockView; 
@property (assign,nonatomic) BOOL allowsAutoscrollToTodayView;                                                                    //@synthesize allowsAutoscrollToTodayView=_allowsAutoscrollToTodayView - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                                                //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (nonatomic,readonly) UIView * todayView; 
@property (nonatomic,readonly) UIView * sidebarView; 
@property (nonatomic,readonly) UIView * pullDownSearchView; 
@property (nonatomic,readonly) UIView * portraitHeaderView;                                                                       //@synthesize portraitHeaderView=_portraitHeaderView - In the implementation block
@property (getter=isOnTodayPage,nonatomic,readonly) BOOL onTodayPage; 
@property (assign,getter=isTodayViewPageHidden,nonatomic) BOOL todayViewPageHidden;                                               //@synthesize todayViewPageHidden=_todayViewPageHidden - In the implementation block
@property (assign,nonatomic) double sidebarVisibilityProgress;                                                                    //@synthesize sidebarVisibilityProgress=_sidebarVisibilityProgress - In the implementation block
@property (assign,getter=isSidebarPinned,nonatomic) double sidebarPinned;                                                         //@synthesize sidebarPinned=_sidebarPinned - In the implementation block
@property (nonatomic,readonly) double effectiveSidebarVisibilityProgress; 
@property (assign,getter=isSidebarEffectivelyVisible,nonatomic) BOOL sidebarEffectivelyVisible;                                   //@synthesize sidebarEffectivelyVisible=_sidebarEffectivelyVisible - In the implementation block
@property (assign,getter=isTodayViewBouncing,nonatomic) BOOL todayViewBouncing;                                                   //@synthesize todayViewBouncing=_todayViewBouncing - In the implementation block
@property (assign,getter=isSearchHidden,nonatomic) BOOL searchHidden; 
@property (assign,nonatomic) BOOL shiftsPullDownSearchForVisibility;                                                              //@synthesize shiftsPullDownSearchForVisibility=_shiftsPullDownSearchForVisibility - In the implementation block
@property (nonatomic,readonly) UIView * searchableTodayWrapperView; 
@property (nonatomic,readonly) SBSearchBackdropView * searchBackdropView; 
@property (assign,nonatomic) double todayViewVisibilityProgress;                                                                  //@synthesize todayViewVisibilityProgress=_todayViewVisibilityProgress - In the implementation block
@property (assign,nonatomic) double pullDownSearchVisibilityProgress;                                                             //@synthesize pullDownSearchVisibilityProgress=_pullDownSearchVisibilityProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultIconLocation;
+(id)dockIconLocation;
+(id)sidebarVisibilityProgressAnimator;
-(void)dealloc;
-(void)setDelegate:(id<SBRootFolderViewDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setDoneButton:(SBTitledHomeScreenButton *)arg1 ;
-(SBTitledHomeScreenButton *)doneButton;
-(void)prepareForTransition;
-(SBDockView *)dockView;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_layoutSubviews;
-(BOOL)isDockVisible;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(double)_pageWidth;
-(void)_removeParallax;
-(UIView *)todayView;
-(SBSearchGesture *)searchGesture;
-(void)setSearchGesture:(SBSearchGesture *)arg1 ;
-(void)returnScalingView;
-(void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(void)updateAccessibilityTintColors;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)prepareToTearDown;
-(void)tearDownListViews;
-(void)resetIconListViews;
-(void)updateIconListViews;
-(void)setIdleText:(id)arg1 ;
-(long long)todayViewPageIndex;
-(void)setTodayViewVisibilityProgress:(double)arg1 ;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(BOOL)isOnTodayPage;
-(void)setShowsDoneButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)_spotlightFirstIconRowOffset;
-(BOOL)isDockExternal;
-(unsigned long long)dockEdge;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(double)dockHeight;
-(BOOL)isDockPinnedForRotation;
-(NSString *)dockIconLocation;
-(BOOL)allowsAutoscrollToTodayView;
-(void)setAllowsAutoscrollToTodayView:(BOOL)arg1 ;
-(UIView *)searchableTodayWrapperView;
-(SBSearchBackdropView *)searchBackdropView;
-(SBFParallaxSettings *)parallaxSettings;
-(void)_setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(long long)sidebarPageIndex;
-(double)sidebarVisibilityProgress;
-(double)effectiveSidebarVisibilityProgress;
-(void)setSidebarVisibilityProgress:(double)arg1 ;
-(BOOL)isSidebarEffectivelyVisible;
-(double)isSidebarPinned;
-(void)setSidebarPinned:(double)arg1 ;
-(BOOL)isSidebarVisibilityGestureActive;
-(void)returnDockView;
-(UIEdgeInsets)statusBarInsetsForDockEdge:(unsigned long long)arg1 ;
-(void)setTodayViewPageHidden:(BOOL)arg1 ;
-(void)borrowDockView;
-(double)todayViewPageScrollOffset;
-(void)setTodayViewBouncing:(BOOL)arg1 ;
-(BOOL)isTodayViewPageHidden;
-(void)setPullDownSearchVisibilityProgress:(double)arg1 ;
-(void)setShiftsPullDownSearchForVisibility:(BOOL)arg1 ;
-(void)setSearchHidden:(BOOL)arg1 ;
-(void)_updateDockViewZOrdering;
-(unsigned long long)sidebarAllowedOrientations;
-(BOOL)_isSidebarEnabledForOrientation:(long long)arg1 ;
-(void)_sidebarScrollPanGestureRecognizerDidUpdate:(id)arg1 ;
-(unsigned long long)ignoresOverscrollOnFirstPageOrientations;
-(void)_overscrollScrollPanGestureRecognizerDidUpdate:(id)arg1 ;
-(void)_configureParallax;
-(void)_resetSearchScrollTrackingState;
-(void)_setupStateDumper;
-(BOOL)isDockViewBorrowed;
-(void)_updateSidebarViewHidden;
-(void)_updateIconListLegibilitySettings;
-(double)currentDockOffscreenFraction;
-(double)todayViewVisibilityProgress;
-(void)getMetrics:(SBRootFolderViewMetrics*)arg1 dockEdge:(unsigned long long)arg2 ;
-(BOOL)shouldScrollDockDuringTransitionToTodayView;
-(BOOL)shouldFadeDockOutDuringTransitionToTodayView;
-(double)effectiveStatusBarHeight;
-(double)_adjustedPageControlVerticalOffsetForInternalDock:(double)arg1 ;
-(BOOL)shouldScrollPageControlDuringTransitionToTodayView;
-(double)todayViewPageScrollOffsetUsingPageWidth:(double)arg1 ;
-(double)sidebarVisibilityProgressForLayout;
-(double)sidebarWidthUsingPageWidth:(double)arg1 ;
-(double)sidebarViewPageScrollOffsetUsingPageWidth:(double)arg1 ;
-(UIView *)portraitHeaderView;
-(BOOL)_shouldHideSidebarView;
-(double)maxDockHeight;
-(double)additionalScrollWidthToKeepVisibleInOneDirection;
-(double)_minimumHomeScreenScale;
-(CGRect)_scaledBoundsForMinimumHomeScreenScale;
-(void)getMetrics:(SBRootFolderViewMetrics*)arg1 ;
-(void)layoutSearchableViewsWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_animateViewsForPullingToSearchWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_animateViewsForScrollingToTodayViewWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_layoutSubviewsForPulldownSearch;
-(void)_layoutSubviewsForTodayViewWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_layoutSubviewsForSidebarWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_updateDockOffscreenFractionWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(BOOL)isModifyingDockOfScreenFraction;
-(void)layoutDockViewWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_adjustTodayContentForEdgeBounce;
-(void)layoutPortraitHeaderViewWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_updateIconListIndexSearchableAndTodayViewsWithLayout:(BOOL)arg1 ;
-(void)setDockViewBorrowed:(BOOL)arg1 ;
-(void)updateDockViewOrientation;
-(UIEdgeInsets)_statusBarInsetsForDockEdge:(unsigned long long)arg1 dockOffscreenPercentage:(double)arg2 ;
-(void)_setupSearchBackdropViewIfNecessary;
-(void)folderDidChange;
-(void)_animateViewsForPullingToSearch;
-(void)_animateViewsForScrollingToTodayView;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)_prepareSidebarViewForOrientationTransition;
-(void)cleanUpAfterTransition;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_isSidebarEnabledForIconListIndex:(unsigned long long)arg1 orientation:(long long)arg2 ;
-(BOOL)_isSidebarCollapsed;
-(id)iconLocationForListAtIndex:(unsigned long long)arg1 ;
-(id)additionalIconListViews;
-(void)_captureInitialSearchScrollTrackingState;
-(void)setScrollingAdjustment:(double)arg1 ;
-(void)_cleanUpAfterScrolling;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(BOOL)_shouldIgnoreOverscrollOnFirstPageForCurrentOrientation;
-(BOOL)_isSidebarEnabledForCurrentOrientation;
-(BOOL)_isSidebarEnabledForCurrentPage;
-(BOOL)allowsFreeScrollingUntilScrollingEnds;
-(BOOL)shouldPinScrollingToFirstIconPageScrollOffsetForProposedScrollOffset:(CGPoint)arg1 ;
-(BOOL)iconScrollView:(id)arg1 shouldSetContentOffset:(CGPoint*)arg2 animated:(BOOL)arg3 ;
-(BOOL)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(CGPoint)arg2 ;
-(void)setAllowsFreeScrollingUntilScrollingEnds:(BOOL)arg1 ;
-(void)layoutSearchableViews;
-(BOOL)hidesOffscreenCustomPageViews;
-(void)_willScrollToPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1 ;
-(void)_checkSidebarVisibilityProgressAfterScroll;
-(BOOL)_isSidebarEnabledForPageIndex:(long long)arg1 ;
-(void)_cleanupAfterExtraScrollGesturesCompleted;
-(void)_updateScrollingState:(BOOL)arg1 ;
-(void)_cleanupAfterSidebarSlideGestureCompleted:(id)arg1 ;
-(void)_cleanUpAfterOverscrollScrollGestureEnded:(id)arg1 ;
-(BOOL)isSidebarSlideGestureActive;
-(BOOL)wasSidebarVisibleWhenScrollingBegan;
-(void)setSidebarSlideGestureActive:(BOOL)arg1 ;
-(BOOL)shouldEndSidebarGestureWithSidebarVisibleWithCurrentProgress:(double)arg1 velocity:(double)arg2 ;
-(id<SBIconListViewIconLocationTransitioning>)firstListViewIconLocationTransitionHandler;
-(void)setFirstListViewIconLocationTransitionHandler:(id<SBIconListViewIconLocationTransitioning>)arg1 ;
-(void)noteSidebarIsAnimating;
-(void)noteSidebarFinishedAnimating;
-(CGRect)_scrollViewFrameForDockEdge:(unsigned long long)arg1 ;
-(double)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(UIView *)sidebarView;
-(BOOL)isPageIndexCustomAndRightmost:(long long)arg1 ;
-(double)pullDownSearchVisibilityProgress;
-(BOOL)shiftsPullDownSearchForVisibility;
-(UIView *)pullDownSearchView;
-(BOOL)shouldFadePageControlOutDuringTransitionToTodayView;
-(void)layoutPageControlWithMetrics:(const SBRootFolderViewMetrics*)arg1 ;
-(void)_setSidebarViewHidden:(BOOL)arg1 ;
-(void)setSidebarVisibleWhenScrollingBegan:(BOOL)arg1 ;
-(double)_sidebarVisibilityProgressForPanGestureRecognizer:(id)arg1 presenting:(BOOL)arg2 ;
-(void)setUserAttemptedToOverscrollDuringCurrentGesture:(BOOL)arg1 ;
-(BOOL)userAttemptedToOverscrollDuringCurrentGesture;
-(BOOL)_isSidebarEnabledForPageIndex:(long long)arg1 orientation:(long long)arg2 ;
-(BOOL)_shouldIgnoreOverscrollOnFirstPageForOrientation:(long long)arg1 ;
-(BOOL)isOnSidebarPage;
-(double)minimumHomeScreenScaleForDockView:(id)arg1 ;
-(id)accessibilityTintColorForDockView:(id)arg1 ;
-(BOOL)isSearchHidden;
-(unsigned long long)_leadingCustomPageCount;
-(void)clientDidChangeDockOffScreenFraction:(id)arg1 ;
-(void)removeDockOffscreenFractionClient:(id)arg1 ;
-(double)scrollableWidthForVisibleColumnRange;
-(double)_scrollOffsetForContentAtPageIndex:(long long)arg1 ;
-(void)setSidebarVisibilityProgress:(double)arg1 animator:(id)arg2 ;
-(void)setSidebarEffectivelyVisible:(BOOL)arg1 ;
-(BOOL)isTodayViewBouncing;
-(double)scrollingAdjustment;
-(SBHRootFolderSettings *)folderSettings;
-(void)setFolderSettings:(SBHRootFolderSettings *)arg1 ;
@end

