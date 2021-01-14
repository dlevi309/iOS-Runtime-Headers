/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentDataProvider;
@class PKPeerPaymentContactResolver, PKPeerPaymentWebService;

@interface PKPaymentTransactionDetailsFactory : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentWebService* _peerPaymentWebService;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;

}
-(id)_transactionFetcherWithTransactionSource:(id)arg1 transaction:(id)arg2 ;
-(id)initWithContactResolver:(id)arg1 peerPaymentWebService:(id)arg2 paymentServiceDataProvider:(id)arg3 detailViewStyle:(long long)arg4 ;
-(BOOL)canShowTransactionHistoryForTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)detailViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(id)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(void)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

