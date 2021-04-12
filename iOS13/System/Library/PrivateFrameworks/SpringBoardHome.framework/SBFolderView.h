/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/SBIconScrollViewDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBIconListViewDragDelegate.h>

@protocol SBFolderViewDelegate, SBIconListLayoutProvider, SBIconViewProviding;
@class NSMutableArray, NSMutableSet, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, SBIconLayoutOverrideStrategy, SBFolder, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, UIPanGestureRecognizer, NSArray, NSString, UIScrollView, SBIconListView;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconScrollViewDelegate, BSDescriptionProviding, SBIconListViewDragDelegate> {

	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	NSMutableSet* _pageControlDisabledReasons;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	NSMutableSet* _scrollViewIsScrollingOverrides;
	UIView* _scalingView;
	SBVisibleColumnRange _visibleColumnRange;
	SBFolderPredictedVisibleColumn _predictedVisibleColumn;
	BOOL _isScalingViewBorrowed;
	BOOL _wasScrolling;
	NSMutableArray* _scrollFrames;
	unsigned long long _scrollFrameCount;
	double _scrollStartContentOffset;
	unsigned long long _ignoreScrollingDidEndNotificationsCount;
	NSMutableArray* _scrollCompletionBlocks;
	NSMutableArray* _rotationCompletionBlocks;
	SBIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	double _headerHeight;
	BOOL _isEditing;
	BOOL _rotating;
	BOOL _occluded;
	BOOL _hasEverBeenInAWindow;
	long long _currentPageIndex;
	double _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	long long _orientation;
	unsigned long long _allowedOrientations;
	id<SBIconViewProviding> _iconViewProvider;
	double _effectiveStatusBarHeight;
	unsigned long long _userInterfaceLayoutDirectionHandling;
	UIView* _headerView;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	UIPanGestureRecognizer* _scrollingDisabledGestureRecognizer;

}

@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                                //@synthesize rotating=_rotating - In the implementation block
@property (assign,nonatomic) BOOL hasEverBeenInAWindow;                                                      //@synthesize hasEverBeenInAWindow=_hasEverBeenInAWindow - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * scrollingDisabledGestureRecognizer;                    //@synthesize scrollingDisabledGestureRecognizer=_scrollingDisabledGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * scalingView; 
@property (getter=isScalingViewBorrowed,nonatomic,readonly) BOOL scalingViewBorrowed;                        //@synthesize isScalingViewBorrowed=_isScalingViewBorrowed - In the implementation block
@property (assign,nonatomic) long long orientation;                                                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) SBIconListPageControl * pageControl;                                            //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettingsForIconListViews; 
@property (nonatomic,readonly) double pageControlAreaHeight; 
@property (nonatomic,readonly) long long minimumPageIndex; 
@property (nonatomic,readonly) long long maximumPageIndex; 
@property (nonatomic,readonly) long long defaultPageIndex; 
@property (nonatomic,readonly) long long firstIconPageIndex; 
@property (nonatomic,readonly) long long lastIconPageIndex; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) double additionalScrollWidthToKeepVisibleInOneDirection; 
@property (getter=_titleTextField,nonatomic,readonly) SBFolderTitleTextField * titleTextField; 
@property (nonatomic,readonly) long long iconVisibilityHandling; 
@property (nonatomic,readonly) BOOL updatesPredictedVisibleColumnWhileScrolling; 
@property (nonatomic,readonly) double scrollableWidthForVisibleColumnRange; 
@property (nonatomic,readonly) double minimumVisibleScrollOffset; 
@property (nonatomic,readonly) double maximumVisibleScrollOffset; 
@property (getter=isRTL,nonatomic,readonly) BOOL RTL; 
@property (assign,nonatomic,__weak) id<SBFolderViewDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                                              //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayoutProvider> listLayoutProvider;                              //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) SBIconLayoutOverrideStrategy * iconLayoutOverrideStrategy;                      //@synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                                                //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (nonatomic,readonly) unsigned long long allowedOrientations;                                       //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,readonly) long long currentPageIndex;                                                   //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews;                                                 //@synthesize iconListViews=_iconListViews - In the implementation block
@property (nonatomic,readonly) unsigned long long iconListViewCount; 
@property (nonatomic,__weak,readonly) id<SBIconViewProviding> iconViewProvider;                              //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                                         //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,readonly) double effectiveStatusBarHeight;                                              //@synthesize effectiveStatusBarHeight=_effectiveStatusBarHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long userInterfaceLayoutDirectionHandling;                      //@synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling - In the implementation block
@property (nonatomic,readonly) long long userInterfaceLayoutDirection; 
@property (nonatomic,copy,readonly) NSString * iconLocation; 
@property (nonatomic,readonly) UIView * headerView;                                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) SBIconListView * currentIconListView; 
@property (assign,getter=isPageControlHidden,nonatomic) BOOL pageControlHidden; 
@property (assign,nonatomic) double pageControlAlpha; 
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                //@synthesize occluded=_occluded - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;                                  //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                             //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;              //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultIconLocation;
+(Class)defaultIconListViewClass;
+(unsigned long long)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageCount:(unsigned long long)arg4 userInterfaceLayoutDirection:(long long)arg5 fractionOfDistanceThroughPage:(double*)arg6 ;
+(Class)_scrollViewClass;
+(unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
-(void)dealloc;
-(NSString *)description;
-(id<SBFolderViewDelegate>)delegate;
-(void)setDelegate:(id<SBFolderViewDelegate>)arg1 ;
-(long long)orientation;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isScrolling;
-(BOOL)isRTL;
-(long long)userInterfaceLayoutDirection;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)_showsTitle;
-(UIView *)headerView;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)didAddSubview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)isEditing;
-(double)statusBarHeight;
-(BOOL)isOccluded;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRotating;
-(UIScrollView *)scrollView;
-(unsigned long long)pageCount;
-(SBIconListPageControl *)pageControl;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_orientationDidChange:(long long)arg1 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)setPageControl:(SBIconListPageControl *)arg1 ;
-(void)prepareForTransition;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(double)headerHeight;
-(id)_interactionTintColor;
-(void)setRotating:(BOOL)arg1 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)_layoutSubviews;
-(long long)currentPageIndex;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(unsigned long long)allowedOrientations;
-(double)_titleFontSize;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_pageWidth;
-(CGSize)_scrollViewContentSize;
-(SBIconListView *)currentIconListView;
-(CGRect)scalingViewFrame;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(SBFolderIconImageCache *)folderIconImageCache;
-(NSArray *)iconListViews;
-(id)borrowScalingView;
-(void)returnScalingView;
-(NSString *)iconLocation;
-(void)enumerateIconListViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(void)setIconPageIndicatorImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(UIView *)scalingView;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3 ;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(SBHIconImageCache *)iconImageCache;
-(long long)defaultPageIndex;
-(void)updateAccessibilityTintColors;
-(BOOL)doesPageContainIconListView:(long long)arg1 ;
-(void)prepareToOpen;
-(void)willTransitionAnimated:(BOOL)arg1 withSettings:(id)arg2 ;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)didTransitionAnimated:(BOOL)arg1 ;
-(unsigned long long)iconListViewIndexForPageIndex:(long long)arg1 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(id)_titleTextField;
-(SBIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBIconLayoutOverrideStrategy *)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)iconListViewCount;
-(long long)pageIndexForIconListViewIndex:(unsigned long long)arg1 ;
-(void)animateScrollToDefaultPageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)minimumPageIndex;
-(long long)maximumPageIndex;
-(long long)firstIconPageIndex;
-(long long)lastIconPageIndex;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(id)iconListViewForDrag:(id)arg1 ;
-(void)_setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)cancelScrolling;
-(unsigned long long)userInterfaceLayoutDirectionHandling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(BOOL)isPageControlHidden;
-(void)setPageControlHidden:(BOOL)arg1 ;
-(double)pageControlAlpha;
-(void)setPageControlAlpha:(double)arg1 ;
-(void)tearDownListViews;
-(void)resetIconListViews;
-(id)iconListViewWithList:(id)arg1 ;
-(void)noteUserIsInteractingWithIcons;
-(void)transitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(Class)listViewClass;
-(void)updateIconListViews;
-(void)pageControl:(id)arg1 didReceiveTouchInDirection:(unsigned long long)arg2 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(void)resetContentOffsetToCurrentPageAnimated:(BOOL)arg1 ;
-(id)firstIconListView;
-(void)_updateIconListFrames;
-(void)_updateIconListLegibilitySettings;
-(_UILegibilitySettings *)legibilitySettingsForIconListViews;
-(double)effectiveStatusBarHeight;
-(double)pageControlAreaHeight;
-(double)additionalScrollWidthToKeepVisibleInOneDirection;
-(BOOL)isScalingViewBorrowed;
-(void)folderDidChange;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)cleanUpAfterTransition;
-(void)_updatePageControlNumberOfPages;
-(void)_updatePageControlToIndex:(long long)arg1 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(id)iconLocationForListAtIndex:(unsigned long long)arg1 ;
-(id)additionalIconListViews;
-(BOOL)_shouldIgnoreScrollingDidEndNotifications;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(double)_scrollOffsetForPageAtIndex:(long long)arg1 ;
-(BOOL)iconScrollView:(id)arg1 shouldSetContentOffset:(CGPoint*)arg2 animated:(BOOL)arg3 ;
-(long long)_pageIndexForOffset:(double)arg1 ;
-(BOOL)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(CGPoint)arg2 ;
-(unsigned long long)typeForPage:(long long)arg1 ;
-(void)_willScrollToPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1 ;
-(void)_updateScrollingState:(BOOL)arg1 ;
-(double)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(void)addScrollViewIsScrollingOverrideReason:(id)arg1 ;
-(void)removeScrollViewIsScrollingOverrideReason:(id)arg1 ;
-(double)_scrollOffsetForFirstListView;
-(id)accessibilityTintColorForRect:(CGRect)arg1 tintStyle:(unsigned long long)arg2 ;
-(unsigned long long)_leadingCustomPageCount;
-(double)scrollableWidthForVisibleColumnRange;
-(double)_scrollOffsetForContentAtPageIndex:(long long)arg1 ;
-(id)_newPageControl;
-(BOOL)_useParallaxOnPageControl;
-(void)_purgeListViews;
-(void)_removeIconListView:(id)arg1 ;
-(void)validateVisibleColumnRange;
-(id)_createIconListViewForList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_addIconListView:(id)arg1 ;
-(void)folderWillChange:(id)arg1 ;
-(void)_updateScrollingIfNeeded;
-(UIPanGestureRecognizer *)scrollingDisabledGestureRecognizer;
-(void)scrollingDisabledGestureDidUpdate:(id)arg1 ;
-(void)setScrollingDisabledGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(BOOL)arg2 ;
-(BOOL)_isValidPageIndex:(long long)arg1 ;
-(void)_currentPageIndexDidChange;
-(void)clearVisibleColumnRange;
-(void)updateVisibleColumnRange;
-(BOOL)canChangeCurrentPageIndexToIndex:(unsigned long long)arg1 ;
-(void)_setCurrentPageIndex:(long long)arg1 ;
-(void)_addScrollingCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_ignoreScrollingDidEndNotifications;
-(void)_unignoreScrollingDidEndNotifications;
-(CGRect)_frameForScalingView;
-(void)_updateScalingViewFrame;
-(void)_updatePageControlCurrentPage;
-(unsigned long long)_trailingCustomPageCount;
-(SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(id)allIconListViews;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double*)arg3 ;
-(void)_resetIconListViews;
-(void)updateIconListIndexAndVisibility;
-(double)minimumVisibleScrollOffset;
-(double)maximumVisibleScrollOffset;
-(BOOL)hasEverBeenInAWindow;
-(long long)closestIconPageIndexForPageIndex:(long long)arg1 ;
-(SBHFloatRange)_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(unsigned)userInterfaceLayoutDirectionAwareScrollingDirection;
-(long long)iconVisibilityHandling;
-(void)updateVisibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3 ;
-(BOOL)updatesPredictedVisibleColumnWhileScrolling;
-(SBVisibleColumnRange)visibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3 predictedVisibleColumn:(SBFolderPredictedVisibleColumn*)arg4 ;
-(void)_checkIfScrollStateChanged;
-(unsigned)scrollingDirection;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)_setFolderName:(id)arg1 ;
-(void)_updateTitleLegibilitySettings;
-(void)setHasEverBeenInAWindow:(BOOL)arg1 ;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)_setPageControlDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(double)_offsetToCenterPageControlInSpaceForPageControl;
-(BOOL)_hasLeadingCustomPages;
-(BOOL)_hasTrailingCustomPages;
-(SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 ;
-(BOOL)_isValidIconListViewIndex:(long long)arg1 ;
-(void)enumerateIconListViewsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)lastIconListView;
-(id)accessibilityLegibilitySettingsForRect:(CGRect)arg1 tintStyle:(unsigned long long)arg2 ;
@end

