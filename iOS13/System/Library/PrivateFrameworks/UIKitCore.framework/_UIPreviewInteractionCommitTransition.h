/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIViewController, UIWindow;

@interface _UIPreviewInteractionCommitTransition : NSObject {

	UIViewController* _viewController;
	UIWindow* _currentCommitEffectWindow;

}

@property (nonatomic,retain) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIWindow * currentCommitEffectWindow;              //@synthesize currentCommitEffectWindow=_currentCommitEffectWindow - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithPresentedViewController:(id)arg1 ;
-(void)setCurrentCommitEffectWindow:(UIWindow *)arg1 ;
-(BOOL)_shouldReduceMotion;
-(id)_preferredTransitionAnimatorForReducedMotion;
-(id)_preferredTransitionAnimator;
-(void)_applyCommitEffectTransformToView:(id)arg1 ;
-(void)performTransitionWithPresentationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(UIWindow *)currentCommitEffectWindow;
@end

