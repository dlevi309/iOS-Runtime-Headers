/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentDataProvider;
@class PKPeerPaymentContactResolver, PKPeerPaymentController;

@interface PKPaymentTransactionDetailsFactory : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentController* _peerPaymentController;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;

}
-(id)_transactionFetcherWithPaymentPass:(id)arg1 transaction:(id)arg2 ;
-(id)initWithContactResolver:(id)arg1 peerPaymentController:(id)arg2 paymentServiceDataProvider:(id)arg3 detailViewStyle:(long long)arg4 ;
-(BOOL)canShowTransactionHistoryForTransaction:(id)arg1 pass:(id)arg2 ;
-(id)detailViewControllerForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 ;
-(id)historyViewControllerForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 ;
-(void)historyViewControllerForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

