/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver;
@class PKBusinessChatController, PKAccount, PKPaymentPass, UIViewController;

@interface PKAccountServiceAccountResolutionController : NSObject {

	PKBusinessChatController* _businessChatController;
	PKAccount* _account;
	PKPaymentPass* _pass;
	id<PKAccountServiceAccountResolutionControllerDelegate> _delegate;
	id<PKAccountBillPaymentObserver> _billPaymentObserver;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) PKAccount * account;                                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                                 //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountServiceAccountResolutionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> billPaymentObserver;                          //@synthesize billPaymentObserver=_billPaymentObserver - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(id<PKAccountServiceAccountResolutionControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccountServiceAccountResolutionControllerDelegate>)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg1 ;
-(void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_alertControllerForBusinessChatContext:(id)arg1 ;
-(void)_openBusinessChatWithContext:(id)arg1 ;
-(void)_callIssuer;
-(id)initWithAccount:(id)arg1 pass:(id)arg2 ;
-(void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<PKAccountBillPaymentObserver>)billPaymentObserver;
-(void)setBillPaymentObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
@end

