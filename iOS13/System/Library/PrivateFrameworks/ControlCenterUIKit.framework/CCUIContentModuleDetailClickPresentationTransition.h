/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <libobjc.A.dylib/_UIClickPresentationTransition.h>

@class UITargetedPreview, UIViewPropertyAnimator, UIViewController, CCUIContentModuleDetailAnimationController, NSString;

@interface CCUIContentModuleDetailClickPresentationTransition : NSObject <_UIClickPresentationTransition> {

	UIViewController* _presentedViewController;
	CCUIContentModuleDetailAnimationController* _animationController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController;                                    //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) CCUIContentModuleDetailAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
-(UIViewController *)presentedViewController;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(CCUIContentModuleDetailAnimationController *)animationController;
-(UIViewPropertyAnimator *)customAnimator;
-(id)initWithPresentedViewController:(id)arg1 animationController:(id)arg2 ;
@end

