/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIViewController;

@interface NewsUI2.DockContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {

	 rootViewController;
	 lazyDockableViewController;
	 presentationMode;
	 dockView;
	 $__lazy_storage_$_longPressGestureRecognizer;
	 $__lazy_storage_$_dockHeightConstraint;
	 $__lazy_storage_$_dockedView;
	 $__lazy_storage_$_expandedViewController;

}

@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) BOOL shouldAutorotate; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dockedViewTapped;
-(void)dockedViewLongPressed;
@end

