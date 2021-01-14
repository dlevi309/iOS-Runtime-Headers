/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController <UIGestureRecognizerDelegate> {

	 templateViewController;
	 documentDelegate;
	 document;
	 isTransitioning;
	 loadingView;
	 navBarOpacity;
	 navBarTitleOpacity;
	 navBarTintColor;
	 navBarPrefersLargeTitles;
	 pagePerformanceReporter;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidLoad;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

