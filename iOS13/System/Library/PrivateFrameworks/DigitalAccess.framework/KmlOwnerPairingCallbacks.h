/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

