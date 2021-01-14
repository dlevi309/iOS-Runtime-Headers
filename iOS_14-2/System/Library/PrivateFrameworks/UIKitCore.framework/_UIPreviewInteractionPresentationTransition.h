/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelTransition;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)_preparedPresentationAnimator;
-(id)_newPushDecayAnimator;
-(id)_previewPresentationControllerForViewController:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_performFinishTransition;
-(void)_performCancelTransition;
-(id)_newReducedMotionTimingCurveProviderForPreviewTransition;
-(id)_newTimingCurveProviderForPreviewTransition;
-(id)_previewPresentationControllerForTransitionContext:(id)arg1 ;
-(void)_applyPushDecayEffectTransformToView:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)finishTransition;
-(BOOL)wantsInteractiveStart;
-(BOOL)_shouldReduceMotion;
-(double)interactiveTransitionFraction;
@end

