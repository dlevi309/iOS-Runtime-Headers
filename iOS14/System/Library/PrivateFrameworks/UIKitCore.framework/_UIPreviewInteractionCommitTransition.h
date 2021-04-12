/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldReduceMotion;
-(void)setCurrentCommitEffectWindow:(UIWindow *)arg1 ;
-(id)_preferredTransitionAnimator;
-(id)_preferredTransitionAnimatorForReducedMotion;
-(void)_applyCommitEffectTransformToView:(id)arg1 ;
-(UIWindow *)currentCommitEffectWindow;
-(void)performTransitionWithPresentationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

