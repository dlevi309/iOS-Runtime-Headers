/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIPreviewPresentationControllerDelegate.h>

@protocol UIViewControllerContextTransitioning;
@class _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation, UIWindow, UIViewController, UIView, NSString;

@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate> {

	_UIPreviewInteractionHighlighter* _highlighter;
	_UIPreviewInteractionViewControllerPresentation* _viewControllerPresentation;
	UIWindow* _presentingWindow;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;
	BOOL _shouldActAsAppearanceAnimationController;
	BOOL _shouldUseDefaultPresentationController;
	UIViewController* _previousParentViewController;
	UIView* _previousSuperview;
	id<UIViewControllerContextTransitioning> _currentTransitionContext;

}

@property (nonatomic,readonly) _UIPreviewInteractionViewControllerPresentation * viewControllerPresentation;              //@synthesize viewControllerPresentation=_viewControllerPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(/*^block*/id)arg3 dismissalCompletion:(/*^block*/id)arg4 ;
-(id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)initWithViewControllerPresentation:(id)arg1 ;
-(void)dismissViewController;
-(void)_performPresentViewControllerFromViewController:(id)arg1 ;
-(void)_performDismissalCompletionIfNeeded;
-(void)_finalizeAfterViewControllerPresentation;
-(_UIPreviewInteractionViewControllerPresentation *)viewControllerPresentation;
-(void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2 ;
@end

