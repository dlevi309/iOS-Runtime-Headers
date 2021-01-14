/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSArray, UIViewController;

@interface TeaUI.CardSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	 primaryCardContainerController;
	 commands;
	 preservedItems;
	 eventManager;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (copy,nonatomic) NSArray * viewControllers; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(NSArray *)keyCommands;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(void)dismissalTransitionDidEndWithNotification:(id)arg1 ;
-(void)presentationTransitionDidEndWithNotification:(id)arg1 ;
-(void)toggleResponderPane;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

