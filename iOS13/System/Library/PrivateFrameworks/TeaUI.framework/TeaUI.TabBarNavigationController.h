/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI.NavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSArray, UITabBarItem, NSString;

@interface TeaUI.TabBarNavigationController : TeaUI.NavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	 rootViewController;
	 animateAlongsideTabBarSnapshot;
	 viewControllerDepth;

}

@property (copy,nonatomic) NSArray * viewControllers; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) NSString * description; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITabBarItem *)tabBarItem;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
@end

