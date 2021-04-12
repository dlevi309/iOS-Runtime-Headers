/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol DAKeyPairingDelegate <DASessionDelegate>
@optional
-(void)didStartPairing;

@required
-(void)didFinishPreWarmWithResult:(id)arg1;
-(void)keyPairingSession:(id)arg1 didFinishPairingWithKey:(id)arg2 trackingRequest:(id)arg3 error:(id)arg4;
-(void)didFinishFirstTransactionForSession:(id)arg1 error:(id)arg2;
-(void)didFinishProbingWithResult:(BOOL)arg1;

@end

