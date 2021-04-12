/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface TeaUI.ModalHostViewController : UIViewController {

	 style;
	 viewController;
	 closeButton;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(NSArray *)keyCommands;
-(void)dismissKeyCommand;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)closeButtonPressedWithSender:(id)arg1 ;
@end

