/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKQuickPaymentSessionDelegate <NSObject>
@optional
-(void)paymentSession:(id)arg1 didMakePassCurrent:(id)arg2;
-(void)paymentSession:(id)arg1 willActivatePass:(id)arg2;
-(void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;
-(void)paymentSessionDidReceiveCredential:(id)arg1;
-(void)paymentSession:(id)arg1 didActivatePass:(id)arg2;
-(void)paymentSessionDidEnterField:(id)arg1;
-(void)paymentSessionDidExitField:(id)arg1;
-(void)paymentSessionDidReceiveStartTransaction:(id)arg1;
-(void)paymentSessionDidReceiveActivityTimeout:(id)arg1;
-(void)paymentSessionDidSelectPayment:(id)arg1;
-(void)paymentSessionDidSelectValueAddedService:(id)arg1;
-(void)paymentSession:(id)arg1 didFailTransactionForPass:(id)arg2 withValueAddedServiceTransactions:(id)arg3 forValueAddedServicePasses:(id)arg4;

@end

