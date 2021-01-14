/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.PaginationTemplateController : UIViewController {

	 bottomMarginForPageControl;
	 templateModel;
	 lastContentOffset;
	 lastScrollDirection;
	 currentPage;
	 isAnimationInProgress;
	 impressionsTracker;
	 impressionsCalculator;
	 $__lazy_storage_$_imageProxyQueue;
	 $__lazy_storage_$_animator;
	 $__lazy_storage_$_rightSwipeGestureRecognizer;
	 $__lazy_storage_$_leftSwipeGestureRecognizer;
	 playbackEventSubscriber;
	 currentPageView;
	 $__lazy_storage_$_reusableViews;
	 $__lazy_storage_$_pageControl;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)leftSwipped:(id)arg1 ;
-(void)rightSwipped:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id)init;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

