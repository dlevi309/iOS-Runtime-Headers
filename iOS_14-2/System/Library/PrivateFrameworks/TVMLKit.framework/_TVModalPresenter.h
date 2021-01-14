/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _UIProgressiveBlurPresentationAnimator, _TVPlaybackFadeAnimator, UINavigationController, UIViewController, NSString;

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate> {

	_UIProgressiveBlurPresentationAnimator* _presentingAnimator;
	_UIProgressiveBlurPresentationAnimator* _dismissingAnimator;
	BOOL _dismissing;
	_TVPlaybackFadeAnimator* _playbackAnimator;
	UINavigationController* _modalRootViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController; 
@property (nonatomic,readonly) UINavigationController * modalRootViewController;              //@synthesize modalRootViewController=_modalRootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presenter;
-(id)_hidden;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(BOOL)_isDismissing;
-(void)dealloc;
-(UIViewController *)presentedViewController;
-(void)_forceOrientationBackToSupportedOrientation;
-(UINavigationController *)modalRootViewController;
-(void)hideAllAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willRotateNotification:(id)arg1 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 andCompletionBlock:(/*^block*/id)arg4 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 animated:(BOOL)arg4 andCompletionBlock:(/*^block*/id)arg5 ;
-(void)_configureModalController:(id)arg1 withFromController:(id)arg2 andConfiguration:(id)arg3 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

