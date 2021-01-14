/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKContactlessInterfaceSessionDelegate <NSObject>
@optional
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg1;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg1;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
-(void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;

@end

