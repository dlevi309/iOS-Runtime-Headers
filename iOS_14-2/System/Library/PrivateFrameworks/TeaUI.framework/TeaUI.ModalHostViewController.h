/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSArray;

@interface TeaUI.ModalHostViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	 delegate;
	 style;
	 viewController;
	 closeButton;
	 transitionEffectView;
	 effect;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * keyCommands; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(NSArray *)keyCommands;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewDidLoad;
-(void)dismissKeyCommand;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)closeButtonPressedWithSender:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

