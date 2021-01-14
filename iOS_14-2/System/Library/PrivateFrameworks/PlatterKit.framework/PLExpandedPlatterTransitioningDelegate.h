/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIPresentationController, NSString;

@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {

	UIPresentationController* _presentationController;

}

@property (setter=_setPresentationController:,getter=_presentationController,nonatomic,retain) UIPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)_setPresentationController:(id)arg1 ;
-(id)_presentationController;
-(void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2 ;
-(void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2 ;
@end

