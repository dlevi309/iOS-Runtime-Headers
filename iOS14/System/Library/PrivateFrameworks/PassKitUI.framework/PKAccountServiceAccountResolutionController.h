/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver;
@class PKBusinessChatController, PKAccount, PKTransactionSource, UIViewController;

@interface PKAccountServiceAccountResolutionController : NSObject {

	PKBusinessChatController* _businessChatController;
	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	id<PKAccountServiceAccountResolutionControllerDelegate> _delegate;
	id<PKAccountBillPaymentObserver> _billPaymentObserver;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) PKAccount * account;                                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;                                              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountServiceAccountResolutionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> billPaymentObserver;                          //@synthesize billPaymentObserver=_billPaymentObserver - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(id<PKAccountServiceAccountResolutionControllerDelegate>)delegate;
-(void)_presentViewController:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<PKAccountServiceAccountResolutionControllerDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg1 ;
-(void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_callIssuer;
-(id)_alertControllerForBusinessChatContext:(id)arg1 ;
-(void)_openBusinessChatWithContext:(id)arg1 ;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 ;
-(void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<PKAccountBillPaymentObserver>)billPaymentObserver;
-(void)setBillPaymentObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
@end

