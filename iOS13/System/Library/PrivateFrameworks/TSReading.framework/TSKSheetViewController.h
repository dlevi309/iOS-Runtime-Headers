/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TSKSheetViewControllerDelegate;
@class UIViewController, NSLayoutConstraint, NSString;

@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {

	UIViewController* _contentViewController;
	NSLayoutConstraint* _contentVerticalConstraint;
	BOOL _isContentHidden;
	id<TSKSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSKSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSKSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TSKSheetViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setContentHidden:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(BOOL)arg2 ;
-(void)didTapView;
-(void)dismissSheetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isShowingForTransitionContext:(id)arg1 ;
-(void)animateShowWithContext:(id)arg1 ;
-(void)animateDismissWithContext:(id)arg1 ;
@end

