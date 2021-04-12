/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;
@class UIViewController;

@interface SiriUIModalContainerViewController : UIViewController {

	UIViewController* _contentViewController;
	id<SiriUIModalContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * contentViewController;                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIModalContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIModalContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIModalContainerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithContentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForHomeIndicatorAutoHidden;
@end

