/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
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
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg1;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
-(void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2;

@end

