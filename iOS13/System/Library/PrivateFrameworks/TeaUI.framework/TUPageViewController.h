/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/TUPageViewControllerScrollViewAccessibilityDelegate.h>

@protocol TUPageViewControllerDataSource, TUPageViewControllerDelegate, OS_dispatch_group;
@class UIViewController, TUPageViewControllerScrollView, NSObject, NSMutableArray, NSString;

@interface TUPageViewController : UIViewController <UIScrollViewDelegate, TUPageViewControllerScrollViewAccessibilityDelegate> {

	BOOL _cancelScrollViewDidScroll;
	BOOL _isTransitioning;
	BOOL _scrollViewStartedScrolling;
	id<TUPageViewControllerDataSource> _dataSource;
	id<TUPageViewControllerDelegate> _delegate;
	UIViewController* _visibleViewController;
	double _pageGutter;
	TUPageViewControllerScrollView* _scrollView;
	NSObject*<OS_dispatch_group> _idleDispatchGroup;
	UIViewController* _managedForViewController;
	UIViewController* _previousViewController;
	UIViewController* _nextViewController;
	UIViewController* _possibleNextViewController;
	UIViewController* _originalVisibleViewController;
	UIViewController* _appearingViewController;
	UIViewController* _disappearingViewController;
	NSMutableArray* _replayViewTransitions;
	CGSize _transitioningSize;

}

@property (nonatomic,readonly) TUPageViewControllerScrollView * scrollView;                     //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> idleDispatchGroup;                  //@synthesize idleDispatchGroup=_idleDispatchGroup - In the implementation block
@property (nonatomic,retain) UIViewController * managedForViewController;                       //@synthesize managedForViewController=_managedForViewController - In the implementation block
@property (nonatomic,retain) UIViewController * previousViewController;                         //@synthesize previousViewController=_previousViewController - In the implementation block
@property (nonatomic,retain) UIViewController * nextViewController;                             //@synthesize nextViewController=_nextViewController - In the implementation block
@property (nonatomic,retain) UIViewController * possibleNextViewController;                     //@synthesize possibleNextViewController=_possibleNextViewController - In the implementation block
@property (nonatomic,retain) UIViewController * originalVisibleViewController;                  //@synthesize originalVisibleViewController=_originalVisibleViewController - In the implementation block
@property (nonatomic,retain) UIViewController * appearingViewController;                        //@synthesize appearingViewController=_appearingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * disappearingViewController;                     //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
@property (assign,nonatomic) BOOL cancelScrollViewDidScroll;                                    //@synthesize cancelScrollViewDidScroll=_cancelScrollViewDidScroll - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning;                                            //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,readonly) CGSize transitioningSize;                                        //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (nonatomic,readonly) CGSize pageSize; 
@property (nonatomic,readonly) BOOL scrollViewStartedScrolling;                                 //@synthesize scrollViewStartedScrolling=_scrollViewStartedScrolling - In the implementation block
@property (nonatomic,retain) NSMutableArray * replayViewTransitions;                            //@synthesize replayViewTransitions=_replayViewTransitions - In the implementation block
@property (assign,nonatomic,__weak) id<TUPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TUPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * visibleViewController;                          //@synthesize visibleViewController=_visibleViewController - In the implementation block
@property (assign,nonatomic) BOOL pagingEnabled; 
@property (assign,nonatomic) double pageGutter;                                                 //@synthesize pageGutter=_pageGutter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<TUPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TUPageViewControllerDelegate>)arg1 ;
-(void)updateContentSize;
-(void)commonInit;
-(id<TUPageViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<TUPageViewControllerDataSource>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(UIViewController *)disappearingViewController;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
-(UIViewController *)visibleViewController;
-(TUPageViewControllerScrollView *)scrollView;
-(UIViewController *)previousViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isTransitioning;
-(CGSize)pageSize;
-(UIViewController *)nextViewController;
-(BOOL)pagingEnabled;
-(void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg1 ;
-(void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg1 ;
-(void)setVisibleViewController:(UIViewController *)arg1 ;
-(void)keyboardOrActionSwitchToNextViewController;
-(void)reindexViewControllers;
-(void)performWhenIdle:(/*^block*/id)arg1 ;
-(void)transitionToSize:(CGSize)arg1 ;
-(void)updateContentOffset;
-(void)managePreviousAndNextViewController;
-(NSMutableArray *)replayViewTransitions;
-(NSObject*<OS_dispatch_group>)idleDispatchGroup;
-(void)removeViewController:(id)arg1 ;
-(void)addViewController:(id)arg1 ;
-(void)setReplayViewTransitions:(NSMutableArray *)arg1 ;
-(CGSize)transitioningSize;
-(void)setCancelScrollViewDidScroll:(BOOL)arg1 ;
-(void)updatePositionForViewController:(id)arg1 ;
-(UIViewController *)managedForViewController;
-(void)setPreviousViewController:(UIViewController *)arg1 ;
-(void)setNextViewController:(UIViewController *)arg1 ;
-(void)setManagedForViewController:(UIViewController *)arg1 ;
-(CGPoint)centerForIndex:(unsigned long long)arg1 ;
-(UIViewController *)appearingViewController;
-(void)setAppearingViewController:(UIViewController *)arg1 ;
-(UIViewController *)possibleNextViewController;
-(void)setOriginalVisibleViewController:(UIViewController *)arg1 ;
-(UIViewController *)originalVisibleViewController;
-(void)handleScrollStart;
-(void)handleScrollEnd;
-(BOOL)scrollViewStartedScrolling;
-(void)callLastViewAppearanceMethods;
-(BOOL)cancelScrollViewDidScroll;
-(BOOL)_shouldIgnoreDidScrollWithScrollView:(id)arg1 ;
-(void)setPossibleNextViewController:(UIViewController *)arg1 ;
-(void)switchToPreviousViewController;
-(void)switchToNextViewController;
-(BOOL)_assistiveTechnologyIsRunning;
-(BOOL)canSwitchToNextViewController;
-(BOOL)canSwitchToPreviousViewController;
-(void)_keyboardSwitchGoingRight:(BOOL)arg1 ;
-(void)keyboardOrActionSwitchToPreviousViewController;
-(void)repositionPages;
-(void)updateScrollView;
-(BOOL)isTransitioningToViewController;
-(CGRect)calculateScrollViewFrameFromViewBounds:(CGRect)arg1 ;
-(double)pageGutter;
-(void)setPageGutter:(double)arg1 ;
@end

