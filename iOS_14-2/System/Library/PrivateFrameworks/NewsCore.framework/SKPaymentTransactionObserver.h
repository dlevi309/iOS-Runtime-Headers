/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
-(void)paymentQueueDidChangeStorefront:(id)arg1;
-(void)paymentQueue:(id)arg1 didRevokeEntitlementsForProductIdentifiers:(id)arg2;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end

