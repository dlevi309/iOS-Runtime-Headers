/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	 dimmingView;
	 eventManager;

}

@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)collapseCards:(/*^block*/id)arg1 ;
-(void)expandCards:(/*^block*/id)arg1 ;
-(void)pushCardWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)popCards;
-(void)viewDidLayoutSubviews;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

