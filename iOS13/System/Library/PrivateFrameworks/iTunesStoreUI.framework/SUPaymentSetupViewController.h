/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SUPaymentSetupViewControllerDelegate;
@class PKPaymentSetupRequest, PKPaymentSetupViewController;

@interface SUPaymentSetupViewController : UIViewController {

	id<SUPaymentSetupViewControllerDelegate> _delegate;
	PKPaymentSetupRequest* _paymentSetupRequest;
	PKPaymentSetupViewController* _childViewController;

}

@property (nonatomic,retain) PKPaymentSetupViewController * childViewController;                    //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SUPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupRequest * paymentSetupRequest;                         //@synthesize paymentSetupRequest=_paymentSetupRequest - In the implementation block
-(id<SUPaymentSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUPaymentSetupViewControllerDelegate>)arg1 ;
-(void)_setup;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithPaymentSetupRequest:(id)arg1 ;
-(PKPaymentSetupViewController *)childViewController;
-(void)setChildViewController:(PKPaymentSetupViewController *)arg1 ;
-(PKPaymentSetupRequest *)paymentSetupRequest;
@end

