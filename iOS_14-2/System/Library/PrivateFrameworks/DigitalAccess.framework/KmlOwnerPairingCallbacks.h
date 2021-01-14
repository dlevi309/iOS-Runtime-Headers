/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/


@protocol KmlOwnerPairingCallbacks <KmlSessionCallbacks>
@required
-(void)handleKeyPairingCompletionResult:(id)arg1 keyInformation:(id)arg2 trackingRequest:(id)arg3;
-(void)handleFirstTransactionCompletionResult:(id)arg1;
-(void)handlePreWarmCompletionResult:(id)arg1;
-(void)handleProbingCompletionResult:(BOOL)arg1;
-(void)handlePairingDidStart;

@end

