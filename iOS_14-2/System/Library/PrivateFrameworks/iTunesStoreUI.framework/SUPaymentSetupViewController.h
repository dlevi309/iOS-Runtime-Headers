/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setup;
-(id<SUPaymentSetupViewControllerDelegate>)delegate;
-(PKPaymentSetupViewController *)childViewController;
-(void)setChildViewController:(PKPaymentSetupViewController *)arg1 ;
-(void)setDelegate:(id<SUPaymentSetupViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPaymentSetupRequest:(id)arg1 ;
-(void)loadView;
-(PKPaymentSetupRequest *)paymentSetupRequest;
@end

