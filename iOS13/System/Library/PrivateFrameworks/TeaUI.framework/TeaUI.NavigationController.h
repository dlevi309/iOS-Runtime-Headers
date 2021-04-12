/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TUNavigationController.h>

@interface TeaUI.NavigationController : TUNavigationController {

	 styler;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) long long preferredTrailingStatusBarStyle; 
@property (assign,nonatomic) BOOL hidesBottomBarWhenPushed; 
-(long long)preferredStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(BOOL)hidesBottomBarWhenPushed;
-(void)setHidesBottomBarWhenPushed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

