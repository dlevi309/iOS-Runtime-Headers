/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewPropertyAnimator, NSString;

@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	UIViewPropertyAnimator* _presentationAnimator;
	double _interactiveTransitionFraction;
	BOOL _shouldPerformAsDismissTransition;
	BOOL _didScheduleFinishTransition;
	BOOL _didScheduleCancelTransition;

}

@property (nonatomic,readonly) double interactiveTransitionFraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(BOOL)wantsInteractiveStart;
-(void)finishTransition;
-(BOOL)_shouldReduceMotion;
-(double)interactiveTransitionFraction;
-(void)cancelTransition;
-(id)_preparedPresentationAnimator;
-(id)_previewPresentationControllerForViewController:(id)arg1 ;
-(void)_performFinishTransition;
-(void)_performCancelTransition;
-(id)_newReducedMotionTimingCurveProviderForPreviewTransition;
-(id)_newTimingCurveProviderForPreviewTransition;
-(id)_newPushDecayAnimator;
-(id)_previewPresentationControllerForTransitionContext:(id)arg1 ;
-(void)_applyPushDecayEffectTransformToView:(id)arg1 ;
@end

