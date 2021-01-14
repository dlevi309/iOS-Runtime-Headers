/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	id<UIPageControllerDelegate> _delegate;
	int _pageSpacing;
	long long _visibleIndex;
	long long _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) id<UIPageControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double pageSpacing; 
@property (assign,nonatomic) BOOL displaysPageControl; 
@property (nonatomic,retain,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) long long pageCount; 
@property (assign,nonatomic) long long visibleIndex; 
@property (assign,nonatomic) BOOL wraps; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)wraps;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_scrollView;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id<UIPageControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1 ;
-(long long)pageCount;
-(void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2 ;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)setWraps:(BOOL)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(BOOL)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(double)pageSpacing;
-(void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasPreviousViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(id)rotatingHeaderView;
-(BOOL)_allowsAutorotation;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)reloadViewControllerAtIndex:(long long)arg1 ;
-(BOOL)_needToLoadPrevious;
-(void)setVisibleIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)indexOfViewController:(id)arg1 ;
-(id)rotatingFooterView;
-(BOOL)_hasVisibleViewController;
-(void)setDisplaysPageControl:(BOOL)arg1 ;
-(id)_pageControllerScrollView;
-(void)viewDidUnload;
-(void)setDelegate:(id<UIPageControllerDelegate>)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldUseOnePartRotation;
-(long long)visibleIndex;
-(void)_createPageControl;
-(BOOL)_needToLoadVisible;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_needToLoadNext;
-(void)_pageChanged:(id)arg1 ;
-(void)setPageSpacing:(double)arg1 ;
-(void)setPageCount:(long long)arg1 ;
-(CGRect)_scrollViewFrame;
-(void)setVisibleIndex:(long long)arg1 ;
-(void)loadView;
-(id)_nextViewController;
-(id)_visibleViewController;
-(BOOL)_hasNextViewController;
-(BOOL)displaysPageControl;
-(UIViewController *)visibleViewController;
-(void)_scrollViewDidEndPaging;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)dealloc;
-(void)_scrollViewWillBeginPaging;
-(void)_setNextViewController:(id)arg1 ;
-(BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2 ;
-(void)_adjustScrollViewContentInsets;
@end

