/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/TSSearchResultsPanable.h>

@class UIViewController, NSArray, UITabBarItem, NSString;

@interface TSTransitionContainerViewController : UIViewController <TSTabBarSplitViewAutoObserver, TSSearchResultsPanable> {

	 identifier;
	 disableSidebarBarButtonItem;
	 rootViewController;
	 backBarButtonItem;
	 $__lazy_storage_$_sidebarBarButtonItem;
	 doneBarButtonItem;
	 transition;

}

@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
@property (readonly,nonatomic) NSArray * leftBarButtonItems; 
@property (readonly,nonatomic) NSArray * rightBarButtonItems; 
@property (assign,nonatomic) BOOL hidesBottomBarWhenPushed; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) BOOL isSearchResultsPane; 
@property (readonly,nonatomic) NSString * description; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isSearchResultsPane;
-(void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)handleSidebarWithSender:(id)arg1 ;
-(void)handleDismiss;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(void)viewDidLoad;
-(UITabBarItem *)tabBarItem;
-(void)setHidesBottomBarWhenPushed:(BOOL)arg1 ;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)hidesBottomBarWhenPushed;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(id)initWithRootViewController:(id)arg1 identifier:(id)arg2 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

