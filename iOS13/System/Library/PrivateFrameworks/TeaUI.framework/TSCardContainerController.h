/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface TSCardContainerController : UIViewController {

	 delegate;
	 transitionManager;
	 cardViewLayoutOptions;
	 rootViewController;
	 dimmingColor;
	 dimmingAlpha;
	??? cardItemStack;
	 dimmingView;
	 eventManager;

}

@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(BOOL)accessibilityPerformEscape;
-(void)collapseCards:(/*^block*/id)arg1 ;
-(void)expandCards:(/*^block*/id)arg1 ;
-(void)pushCardWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)popCards;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewLayoutMarginsDidChange;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
@end

