/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/


@protocol NFContactlessPaymentSessionCallbacks <NFContactlessSessionCallbacks>
@optional
-(void)didSelectValueAddedService:(BOOL)arg1;
-(void)didPerformValueAddedServiceTransactions:(id)arg1;
-(void)didReceivePendingServerRequest;
-(void)didExpressModeStateChange:(unsigned)arg1 withObject:(id)arg2;
-(void)didReceiveActivityTimeout:(id)arg1;

@required
-(void)didFelicaStateChange:(id)arg1;
-(void)didExpireTransactionForApplet:(id)arg1;
-(void)didStartTransaction:(id)arg1;
-(void)didEndTransaction:(id)arg1;
-(void)didFailDeferredAuthorization;

@end

