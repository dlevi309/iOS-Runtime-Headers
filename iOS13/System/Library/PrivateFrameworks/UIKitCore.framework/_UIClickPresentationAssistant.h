/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKitCore/_UIClickPresentationAssisting.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, UITargetedPreview, UIViewController, UIView, _UIStateMachine, NSString;

@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting> {

	id<UIViewControllerContextTransitioning> _currentContext;
	UIViewPropertyAnimator* _presentationAnimator;
	/*^block*/id lifecycleCompletion;
	_UIClickPresentation* presentation;
	_UIPortalView* _presentationSourcePortalView;
	UITargetedPreview* _sourcePreview;
	UIViewController* _stashedParentViewController;
	UIView* _stashedSuperView;
	/*^block*/id _transitionCompletion;
	_UIStateMachine* _stateMachine;

}

@property (nonatomic,retain) _UIPortalView * presentationSourcePortalView;                 //@synthesize presentationSourcePortalView=_presentationSourcePortalView - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                            //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) UIViewController * stashedParentViewController;               //@synthesize stashedParentViewController=_stashedParentViewController - In the implementation block
@property (nonatomic,retain) UIView * stashedSuperView;                                    //@synthesize stashedSuperView=_stashedSuperView - In the implementation block
@property (nonatomic,copy) id transitionCompletion;                                        //@synthesize transitionCompletion=_transitionCompletion - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * presentationAnimator;              //@synthesize presentationAnimator=_presentationAnimator - In the implementation block
@property (nonatomic,retain) _UIStateMachine * stateMachine;                               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresentation:(_UIClickPresentation *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(_UIClickPresentation *)presentation;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setLifecycleCompletion:(id)arg1 ;
-(void)_stashParentViewControllerIfNecessary;
-(UITargetedPreview *)sourcePreview;
-(void)_applyStashedParentViewControllerIfNecessary;
-(void)setStashedParentViewController:(UIViewController *)arg1 ;
-(void)setStashedSuperView:(UIView *)arg1 ;
-(UIViewController *)stashedParentViewController;
-(UIView *)stashedSuperView;
-(id)lifecycleCompletion;
-(id)initWithClickPresentation:(id)arg1 ;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2 ;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(_UIStateMachine *)stateMachine;
-(void)setStateMachine:(_UIStateMachine *)arg1 ;
-(void)_prepareStateMachine;
-(void)_animatePresentation;
-(void)_didTransitionToPresenting;
-(void)_didTransitionToDismissingFromState:(unsigned long long)arg1 ;
-(void)_didTransitionToPresented;
-(void)_didTransitionToPossibleEndingTransition:(id)arg1 ;
-(id)transitionCompletion;
-(void)setTransitionCompletion:(id)arg1 ;
-(void)_animateDismissalIsInterruption:(BOOL)arg1 ;
-(void)_postInteractionCleanup;
-(_UIPortalView *)presentationSourcePortalView;
-(void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(BOOL)arg2 ;
-(UIViewPropertyAnimator *)presentationAnimator;
-(void)setPresentationSourcePortalView:(_UIPortalView *)arg1 ;
-(id)_sourcePreviewPortal;
@end

