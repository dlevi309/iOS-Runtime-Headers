/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIViewController *)contentViewController;
-(void)setDelegate:(id<SiriUIModalContainerViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

