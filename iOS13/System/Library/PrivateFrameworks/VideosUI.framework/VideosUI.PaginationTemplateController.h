/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
@end

