/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSArray, UIViewController;

@interface TeaUI.CardSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	 primaryCardContainerController;
	 preservedItems;
	 eventManager;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (copy,nonatomic) NSArray * viewControllers; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(NSArray *)keyCommands;
-(void)toggleResponderPane;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(void)presentationTransitionDidEndWithNotification:(id)arg1 ;
-(void)dismissalTransitionDidEndWithNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
@end

