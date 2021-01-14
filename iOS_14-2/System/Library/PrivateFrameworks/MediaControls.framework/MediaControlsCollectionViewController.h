/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MediaControlsCollectionItemViewController, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate;
@class NSMutableDictionary, UIViewController, NSMutableSet, NSMutableArray, MediaControlsCollectionViewCountData, _MediaControlsTapHoldGestureRecognizer, UIScrollView, NSArray, NSIndexSet, NSString;

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableDictionary* _activeViewControllers;
	UIViewController*<MediaControlsCollectionItemViewController> _inactiveSelectedViewController;
	NSMutableSet* _inactiveViewControllers;
	NSMutableArray* _pendingUpdates;
	UIEdgeInsets _controlCenterEdgeInsets;
	CGSize _lastKnownEnvironmentSize;
	long long _animatedSelectionCount;
	long long _appearanceTransitionCount;
	BOOL _shouldDisableAutoReaping;
	BOOL _shouldIgnoreScrollNotifications;
	BOOL _isAnimatingSelection;
	BOOL _isPerformingBatchUpdates;
	BOOL _needsReloadData;
	MediaControlsCollectionViewCountData* _countData;
	long long _highlightedItemIndex;
	BOOL _appeared;
	id<MediaControlsCollectionViewDataSource> _dataSource;
	id<MediaControlsCollectionViewDelegate> _delegate;
	/*^block*/id _dismissalBlock;
	long long _selectedItemIndex;
	_MediaControlsTapHoldGestureRecognizer* _tapGestureRecognizer;
	UIScrollView* _scrollView;
	long long _displayMode;
	double _preferredItemHeight;
	UIEdgeInsets _scrollViewInsets;

}

@property (nonatomic,retain) _MediaControlsTapHoldGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                      //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) double preferredItemHeight;                                                 //@synthesize preferredItemHeight=_preferredItemHeight - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsCollectionViewDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsCollectionViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollViewInsets;                                              //@synthesize scrollViewInsets=_scrollViewInsets - In the implementation block
@property (nonatomic,copy) id dismissalBlock;                                                            //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (nonatomic,readonly) NSArray * visibleTopViewControllers; 
@property (nonatomic,readonly) NSArray * visibleBottomViewControllers; 
@property (nonatomic,readonly) NSArray * visibleViewControllers; 
@property (assign,nonatomic) long long selectedItemIndex;                                                //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (nonatomic,readonly) NSIndexSet * visibleIndexes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)frameAnimator;
+(id)alphaAnimatorWithAnimations:(/*^block*/id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_transitionToDisplayMode:(long long)arg1 usingTransitionCoordinator:(id)arg2 assumingSize:(CGSize)arg3 ;
-(NSRange)_rangeOfItemsInRect:(CGRect)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)_wantsTapGestureRecognizer;
-(void)_reapActiveViews;
-(CGRect)_frameForViewAtIndex:(long long)arg1 size:(CGSize)arg2 ;
-(double)_regularItemHeight;
-(void)_setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3 shouldNotifyDelegate:(BOOL)arg4 withReason:(long long)arg5 ;
-(void)deleteItemAtIndex:(long long)arg1 ;
-(id)init;
-(void)_beginAppearanceTransitionIfNeeded:(BOOL)arg1 forChildViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_isScrollViewAnimatingScroll;
-(id<MediaControlsCollectionViewDelegate>)delegate;
-(void)_endAppearanceTransitionForChildViewControllerIfNeeded:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3 ;
-(CGRect)_frameForViewAtIndex:(long long)arg1 ;
-(void)_transitionToVisible:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(_MediaControlsTapHoldGestureRecognizer *)arg1 ;
-(id)_visibleBottomViewControllers;
-(void)_setHighlighted:(BOOL)arg1 forViewController:(id)arg2 ;
-(void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)_removeInactiveViewControllersFromHierarchy;
-(id<MediaControlsCollectionViewDataSource>)dataSource;
-(id)viewControllerForItemAtIndex:(long long)arg1 ;
-(void)_updateFrameForViewController:(id)arg1 atIndex:(long long)arg2 withCoordinator:(id)arg3 assumingSize:(CGSize)arg4 ;
-(long long)displayMode;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)scrollToSelectedItemAnimated:(BOOL)arg1 ;
-(void)_tileViews;
-(void)_setFrame:(CGRect)arg1 forVisibleViewAtIndex:(long long)arg2 ;
-(void)setDelegate:(id<MediaControlsCollectionViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(double)preferredItemHeightGivenWidth:(double)arg1 ;
-(void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(CGSize)arg2 ;
-(void)setDataSource:(id<MediaControlsCollectionViewDataSource>)arg1 ;
-(id)viewControllerForSelectedItem;
-(double)_selectedItemHeightInSize:(CGSize)arg1 shouldIgnoreInsets:(BOOL)arg2 ;
-(NSArray *)visibleBottomViewControllers;
-(NSArray *)visibleViewControllers;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enumerateActiveViewControllers:(/*^block*/id)arg1 ;
-(void)reloadData;
-(void)updateContentInsets;
-(void)viewDidLoad;
-(void)_setHighlighted:(BOOL)arg1 forViewControllerAtIndex:(long long)arg2 ;
-(void)_dequeueAndPerformBatchUpdatesIfNeeded;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setScrollViewInsets:(UIEdgeInsets)arg1 ;
-(id)_insertViewControllerForIndex:(long long)arg1 ;
-(_MediaControlsTapHoldGestureRecognizer *)tapGestureRecognizer;
-(id)_indexesOfItemsInRect:(CGRect)arg1 ;
-(long long)itemAtPoint:(CGPoint)arg1 ;
-(BOOL)_canPerformBatchUpdates;
-(double)preferredItemHeight;
-(void)setDismissalBlock:(id)arg1 ;
-(id)dequeueReusableViewControllerForItemAtIndex:(long long)arg1 ;
-(NSArray *)visibleTopViewControllers;
-(id)dismissalBlock;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(id)viewControllerForItemAtPoint:(CGPoint)arg1 ;
-(CGRect)_frameForViewAtIndex:(long long)arg1 displayMode:(long long)arg2 size:(CGSize)arg3 ;
-(void)_scrollToSelectedItemAnimated:(BOOL)arg1 ;
-(void)_adjustForEnvironmentChangeIfNeededWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)insertItemAtIndex:(long long)arg1 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_reapViewAtIndex:(long long)arg1 ;
-(void)_updateContentSize;
-(void)_reloadDataIfNeeded;
-(long long)selectedItemIndex;
-(long long)_closestItemAtPoint:(CGPoint)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)_selectedItemHeightInSize:(CGSize)arg1 ;
-(void)_adjustForEnvironmentChangeWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(double)_backgroundCornerRadius;
-(void)deleteItemsAtIndexes:(id)arg1 ;
-(NSIndexSet *)visibleIndexes;
-(void)reloadItemAtIndex:(long long)arg1 ;
-(void)_handleScrollViewTap:(id)arg1 ;
-(void)_beginAppearanceTransitionForChildViewControllers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIScrollView *)scrollView;
-(void)setPreferredItemHeight:(double)arg1 ;
-(void)_removeViewController:(id)arg1 ;
-(id)_visibleTopViewControllers;
-(double)_verticalSpacing;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_endAppearanceTransitionForChildViewControllers;
-(double)_preferredSelectedItemHeight;
-(double)_totalHeight;
-(void)_populateViewsInFrame:(CGRect)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIEdgeInsets)scrollViewInsets;
-(void)_transitionTopAndBottomViewControllersToVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

