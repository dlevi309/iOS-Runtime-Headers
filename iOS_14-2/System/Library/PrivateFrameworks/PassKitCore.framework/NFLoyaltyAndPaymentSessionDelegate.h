/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>
@optional
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
-(void)loyaltyAndPaymentSessionDidExitField:(id)arg1;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2 withObject:(id)arg3;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;

@end

