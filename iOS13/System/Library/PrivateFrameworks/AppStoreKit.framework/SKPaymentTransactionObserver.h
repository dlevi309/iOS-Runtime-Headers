/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(void)paymentQueueDidChangeStorefront:(id)arg1;
-(BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end

