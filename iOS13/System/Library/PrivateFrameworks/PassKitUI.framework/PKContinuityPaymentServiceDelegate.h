/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKContinuityPaymentServiceDelegate <NSObject>
@optional
-(void)didReceiveUpdatedPaymentDevices:(id)arg1;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;

@end

