/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TUNavigationController.h>
#import <libobjc.A.dylib/TSSearchResultsPanable.h>

@interface TeaUI.NavigationController : TUNavigationController <TSSearchResultsPanable> {

	 styler;

}

@property (assign,nonatomic) BOOL hidesBottomBarWhenPushed; 
@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) long long preferredTrailingStatusBarStyle; 
@property (readonly,nonatomic) BOOL isSearchResultsPane; 
-(long long)preferredTrailingStatusBarStyle;
-(BOOL)isSearchResultsPane;
-(void)setHidesBottomBarWhenPushed:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)hidesBottomBarWhenPushed;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

