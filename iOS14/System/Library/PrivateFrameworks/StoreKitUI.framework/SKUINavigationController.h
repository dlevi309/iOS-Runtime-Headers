/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController
-(id)childViewControllerForStatusBarStyle;
-(id)description;
-(void)attachPalette:(id)arg1 isPinned:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
-(void)_scheduleConfigurationOfNavigationBar;
-(void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(BOOL)arg2 ;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(BOOL)arg5 accessibilityButtonBackgroundTintColor:(id)arg6 ;
-(void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(BOOL)arg2 ;
-(void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1 ;
@end

