/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI.NavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UITabBarItem, NSString;

@interface TeaUI.TabBarNavigationController : TeaUI.NavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	 rootViewController;
	 commandCenter;
	 animateAlongsideTabBarSnapshot;
	 viewControllerDepth;

}

@property (copy,nonatomic) NSArray * viewControllers; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) NSString * description; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(id)initWithRootViewController:(id)arg1 ;
-(NSString *)description;
-(UITabBarItem *)tabBarItem;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2 ;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
@end

