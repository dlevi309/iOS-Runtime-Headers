/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKQuickPaymentSessionDelegate <NSObject>
@optional
-(void)paymentSession:(id)arg1 didMakePassCurrent:(id)arg2;
-(void)paymentSession:(id)arg1 willActivatePass:(id)arg2;
-(void)paymentSession:(id)arg1 didActivatePass:(id)arg2;
-(void)paymentSession:(id)arg1 didFailTransactionForPass:(id)arg2 withValueAddedServiceTransactions:(id)arg3 forValueAddedServicePasses:(id)arg4;
-(void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;
-(void)paymentSessionDidEnterField:(id)arg1;
-(void)paymentSessionDidExitField:(id)arg1;
-(void)paymentSession:(id)arg1 didCompleteTransactionWithContext:(id)arg2;
-(void)paymentSessionDidReceiveAuthorizationTimeout:(id)arg1;
-(void)paymentSessionDidReceiveActivationError:(id)arg1;
-(void)paymentSessionDidReceiveTransactionError:(id)arg1;
-(void)paymentSessionIsWaitingToStart:(id)arg1;
-(void)paymentSessionDidStart:(id)arg1;
-(void)paymentSessionDidSelectPayment:(id)arg1;
-(void)paymentSessionDidSelectValueAddedService:(id)arg1;
-(void)paymentSessionDidReceiveStartTransaction:(id)arg1;
-(void)paymentSessionDidReceiveActivityTimeout:(id)arg1;
-(void)paymentSessionDidReceiveCredential:(id)arg1;

@end

