/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIViewController.h>

@class UINavigationItem, UIViewController;

@interface TSGutterViewController : UIViewController {

	 gutterViewController;

}

@property (readonly,nonatomic) UINavigationItem * navigationItem; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(UINavigationItem *)navigationItem;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(id)initWithChildViewController:(id)arg1 childScrollViewProducer:(/*^block*/id)arg2 gutterBreakpoints:(id)arg3 ;
@end

