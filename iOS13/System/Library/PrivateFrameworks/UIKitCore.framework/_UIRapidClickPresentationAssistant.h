/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKitCore/_UIClickPresentationAssisting.h>

@class _UIClickPresentation, UITargetedPreview, UIViewController, UIView, NSValue, NSString;

@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting> {

	int _animationCount;
	BOOL _isInteractionInitiatedDismiss;
	/*^block*/id lifecycleCompletion;
	_UIClickPresentation* presentation;
	UITargetedPreview* _sourcePreview;
	UIViewController* _stashedParentViewController;
	UIView* _stashedSuperView;
	NSValue* _preservedInputViewId;

}

@property (nonatomic,retain) UITargetedPreview * sourcePreview;                           //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) UIViewController * stashedParentViewController;              //@synthesize stashedParentViewController=_stashedParentViewController - In the implementation block
@property (nonatomic,retain) UIView * stashedSuperView;                                   //@synthesize stashedSuperView=_stashedSuperView - In the implementation block
@property (nonatomic,retain) NSValue * preservedInputViewId;                              //@synthesize preservedInputViewId=_preservedInputViewId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresentation:(_UIClickPresentation *)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(_UIClickPresentation *)presentation;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setLifecycleCompletion:(id)arg1 ;
-(void)_stashParentViewControllerIfNecessary;
-(void)_performPresentationAnimationsFromViewController:(id)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(void)_animateUsingFluidSpringWithType:(unsigned long long)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreservedInputViewId:(NSValue *)arg1 ;
-(NSValue *)preservedInputViewId;
-(void)_applyStashedParentViewControllerIfNecessary;
-(void)_animateDismissalWithReason:(unsigned long long)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_nonAnimatedDismissalWithReason:(unsigned long long)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_restoreInputViewWithReason:(unsigned long long)arg1 forPresentation:(id)arg2 ;
-(void)setStashedParentViewController:(UIViewController *)arg1 ;
-(void)setStashedSuperView:(UIView *)arg1 ;
-(UIViewController *)stashedParentViewController;
-(UIView *)stashedSuperView;
-(id)lifecycleCompletion;
-(id)initWithClickPresentation:(id)arg1 ;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2 ;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

