/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol UITabBarControllerDelegate <NSObject>
@optional
-(long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
-(id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;

@end

