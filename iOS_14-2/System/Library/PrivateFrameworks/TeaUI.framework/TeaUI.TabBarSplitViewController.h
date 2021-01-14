/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <libobjc.A.dylib/TSTabBarSplitViewFocusable.h>

@class UIViewController, NSArray;

@interface TeaUI.TabBarSplitViewController : UISplitViewController <UISplitViewControllerDelegate, TSTabBarSplitViewFocusable> {

	 extendedDelegate;
	 commands;
	 eventManager;
	 fullscreenTransitionCoverManager;
	 appearanceViewControllers;
	 restoreStateCache;
	 options;
	 hasPerformedInitialLayout;
	 splitViewFocus;

}

@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
@property (copy,nonatomic) NSArray * viewControllers; 
@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) long long currentSplitViewFocus; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)keyCommands;
-(NSArray *)viewControllers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(void)dismissalTransitionDidEndWithNotification:(id)arg1 ;
-(void)presentationTransitionDidEndWithNotification:(id)arg1 ;
-(void)tabBarNavigationControllerDidPopWithNotification:(id)arg1 ;
-(void)toggleResponderPane;
-(void)toggleSideBarVisibility;
-(long long)currentSplitViewFocus;
-(void)toggleSplitViewFocusTo:(long long)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

