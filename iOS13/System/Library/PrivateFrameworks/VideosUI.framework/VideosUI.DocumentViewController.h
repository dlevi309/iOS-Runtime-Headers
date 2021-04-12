/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController {

	 document;
	 templateViewController;
	 isTransitioning;
	 loadingView;
	 opaqueBackground;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
@end

