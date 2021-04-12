/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MKStackingViewControllerDelegate;
@class _MKStackView, _MKStackingContentView, NSLayoutConstraint, UIScrollView, NSMapTable, NSArray, NSHashTable, UIView, NSString;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, UIScrollViewDelegate> {

	_MKStackView* _stackView;
	_MKStackingContentView* _contentView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _stackViewWidthConstraint;
	BOOL _isScrollDisabled;
	unsigned long long _countOfCurrentLayoutInvocations;
	UIScrollView* _scrollView;
	NSMapTable* _viewControllersToPreferredHeightConstraints;
	NSMapTable* _viewsToViewControllers;
	NSArray* _titleViewConstraints;
	BOOL _willRelayoutForPreferredContentSizeChange;
	BOOL _isSettingStackedViews;
	BOOL _contentViewConstraintsAdded;
	NSHashTable* _minimallyVisibleViews;
	BOOL _needsToPerformLayout;
	UIView* _overlayView;
	double _overlayViewOriginY;
	BOOL _mayWantSpearators;
	BOOL _needToCallViewControllerLayoutDelegate;
	NSArray* _viewControllers;
	id<MKStackingViewControllerDelegate> _stackingDelegate;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<MKStackingViewControllerDelegate> stackingDelegate;              //@synthesize stackingDelegate=_stackingDelegate - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (nonatomic,readonly) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_didScroll;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)currentHeight;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIScrollView *)scrollView;
-(void)updateViewConstraints;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3 ;
-(void)setStackingDelegate:(id<MKStackingViewControllerDelegate>)arg1 ;
-(void)setOverlayView:(id)arg1 withOriginY:(double)arg2 ;
-(void)removeOverlayViewAnimated:(BOOL)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)_setScrollEnabled:(BOOL)arg1 forcedUpdate:(BOOL)arg2 ;
-(void)_updateFixedHeightAwareControllers;
-(BOOL)_isSafeToPerformLayout;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2 ;
-(void)_setUpEnteringViewController:(id)arg1 ;
-(void)_tearDownExitingViewController:(id)arg1 ;
-(id<MKStackingViewControllerDelegate>)stackingDelegate;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1 ;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg1 ;
-(void)_setOverlayViewFrame;
-(void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2 ;
-(void)_updateViewControllerVisibilityAfterPositionChange;
-(void)_callViewControllersLayoutDelegateIfNeeded;
-(void)_sendScrollnotification;
-(BOOL)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2 ;
-(double)_titleHeight;
-(double)_fittingHeightForView:(id)arg1 ;
-(void)setWidthConstraintConstant:(double)arg1 ;
@end

