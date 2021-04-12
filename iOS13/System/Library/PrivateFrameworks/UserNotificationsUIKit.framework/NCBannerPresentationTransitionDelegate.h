/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCBannerPresentationAnimatorDelegate.h>
#import <libobjc.A.dylib/NCViewControllerTransitioningDelegate.h>

@protocol NCBannerPresentationTransitioningDelegateObserver;
@class UIViewController, UIGestureRecognizer, NSString;

@interface NCBannerPresentationTransitionDelegate : NSObject <NCBannerPresentationAnimatorDelegate, NCViewControllerTransitioningDelegate> {

	UIViewController* _presentedViewController;
	BOOL _transitioning;
	id<NCBannerPresentationTransitioningDelegateObserver> _transitioningDelegateObserver;
	UIGestureRecognizer* _activeGesture;

}

@property (assign,nonatomic,__weak) id<NCBannerPresentationTransitioningDelegateObserver> transitioningDelegateObserver;              //@synthesize transitioningDelegateObserver=_transitioningDelegateObserver - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning;                                                             //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * activeGesture;                                                                     //@synthesize activeGesture=_activeGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(BOOL)isTransitioning;
-(UIGestureRecognizer *)activeGesture;
-(void)setActiveGesture:(UIGestureRecognizer *)arg1 ;
-(id)_animatorForPresentation:(BOOL)arg1 ;
-(id<NCBannerPresentationTransitioningDelegateObserver>)transitioningDelegateObserver;
-(void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2 ;
-(void)bannerPresentationAnimator:(id)arg1 didFinishTransition:(BOOL)arg2 ;
-(void)setTransitioningDelegateObserver:(id<NCBannerPresentationTransitioningDelegateObserver>)arg1 ;
@end

