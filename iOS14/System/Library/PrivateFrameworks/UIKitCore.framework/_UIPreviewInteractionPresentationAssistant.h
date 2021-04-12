/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewPropertyAnimator, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation, _UIPortalView, UITargetedPreview, UIViewController, UIView, NSString;

@interface _UIPreviewInteractionPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _currentContext;
	BOOL _isAppearing;
	UIViewPropertyAnimator* _presentationAnimator;
	_UIPreviewInteractionHighlighter* _highlighter;
	_UIPreviewInteractionViewControllerPresentation* _presentation;
	_UIPortalView* _presentationSourcePortalView;
	UITargetedPreview* _sourcePreview;
	UIViewController* _stashedParentViewController;
	UIView* _stashedSuperView;
	/*^block*/id _dismissalCompletion;

}

@property (nonatomic,retain) _UIPreviewInteractionViewControllerPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) _UIPortalView * presentationSourcePortalView;                                //@synthesize presentationSourcePortalView=_presentationSourcePortalView - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                                           //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) UIViewController * stashedParentViewController;                              //@synthesize stashedParentViewController=_stashedParentViewController - In the implementation block
@property (nonatomic,retain) UIView * stashedSuperView;                                                   //@synthesize stashedSuperView=_stashedSuperView - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                                        //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (assign,nonatomic) BOOL isAppearing;                                                            //@synthesize isAppearing=_isAppearing - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * presentationAnimator;                             //@synthesize presentationAnimator=_presentationAnimator - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionHighlighter * highlighter;                              //@synthesize highlighter=_highlighter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)setIsAppearing:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setPresentation:(_UIPreviewInteractionViewControllerPresentation *)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(/*^block*/id)arg3 ;
-(void)_applyStashedParentViewControllerIfNecessary;
-(void)_postInteractionCleanup;
-(UIViewPropertyAnimator *)presentationAnimator;
-(_UIPortalView *)presentationSourcePortalView;
-(void)setPresentationSourcePortalView:(_UIPortalView *)arg1 ;
-(id)_sourcePreviewPortal;
-(BOOL)isAppearing;
-(void)_stashParentViewControllerIfNecessary;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)setStashedParentViewController:(UIViewController *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(_UIPreviewInteractionViewControllerPresentation *)presentation;
-(UIView *)stashedSuperView;
-(_UIPreviewInteractionHighlighter *)highlighter;
-(UIViewController *)stashedParentViewController;
-(void)setHighlighter:(_UIPreviewInteractionHighlighter *)arg1 ;
-(void)setDismissalCompletion:(id)arg1 ;
-(id)dismissalCompletion;
-(void)_createpresentationAnimatorIfNecessary:(id)arg1 ;
-(id)initWithViewControllerPresentation:(id)arg1 ;
-(void)dismissViewController;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setStashedSuperView:(UIView *)arg1 ;
@end
