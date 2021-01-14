/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CCUIContentModuleDetailAnimationController *)animationController;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(UIViewPropertyAnimator *)customAnimator;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(UIViewController *)presentedViewController;
-(id)initWithPresentedViewController:(id)arg1 animationController:(id)arg2 ;
@end

