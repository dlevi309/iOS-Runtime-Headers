/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewFocusable.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSArray, UIViewController;

@interface TeaUI.TabBarSplitViewController : UISplitViewController <TSTabBarSplitViewFocusable, UISplitViewControllerDelegate> {

	 extendedDelegate;
	 eventManager;
	 presentationContextCache;
	 fullscreenTransitionCoverManager;
	 appearanceViewControllers;
	 restoreStateCache;
	 options;
	 hasPerformedInitialLayout;
	 splitViewFocus;

}

@property (readonly,nonatomic) long long currentSplitViewFocus; 
@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
@property (copy,nonatomic) NSArray * viewControllers; 
-(long long)currentSplitViewFocus;
-(void)toggleSplitViewFocusTo:(long long)arg1 ;
-(NSArray *)keyCommands;
-(void)toggleResponderPane;
-(void)toggleSideBarVisibility;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(void)presentationTransitionDidEndWithNotification:(id)arg1 ;
-(void)dismissalTransitionDidEndWithNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(void)didReceiveMemoryWarning;
@end

