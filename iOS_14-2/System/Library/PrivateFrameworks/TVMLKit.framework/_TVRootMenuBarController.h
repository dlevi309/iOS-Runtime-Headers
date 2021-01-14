/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <TVMLKit/TVAppRootViewController.h>
#import <libobjc.A.dylib/IKAppTabBarController.h>

@protocol _TVAppNavigationControllerDelegate;
@class UINavigationController, UIViewController, IKAppTabBar, NSArray, NSString;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController> {

	IKAppTabBar* _appTabBar;
	NSArray* _appTabBarItems;
	unsigned long long _previousSelectedIndex;
	id<_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;

}

@property (nonatomic,retain) NSArray * appTabBarItems;                                                            //@synthesize appTabBarItems=_appTabBarItems - In the implementation block
@property (assign,nonatomic) unsigned long long previousSelectedIndex;                                            //@synthesize previousSelectedIndex=_previousSelectedIndex - In the implementation block
@property (nonatomic,retain) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;              //@synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar;                                                           //@synthesize appTabBar=_appTabBar - In the implementation block
-(id)init;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(UIViewController *)currentViewController;
-(void)dealloc;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1 ;
-(id<IKAppNavigationController>)appNavigationController;
-(IKAppTabBar *)appTabBar;
-(id)tabBar:(id)arg1 setTabItems:(id)arg2 ;
-(id)selectedTabItemForTabBar:(id)arg1 ;
-(void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2 ;
-(id)transientTabItemForTabBar:(id)arg1 ;
-(void)setAppNavigationControllerDelegate:(id<_TVAppNavigationControllerDelegate>)arg1 ;
-(unsigned long long)previousSelectedIndex;
-(void)setPreviousSelectedIndex:(unsigned long long)arg1 ;
-(void)setAppTabBarItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfTabsInTabBar:(id)arg1 ;
-(id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2 ;
-(NSArray *)appTabBarItems;
-(id<_TVAppNavigationControllerDelegate>)appNavigationControllerDelegate;
@end

