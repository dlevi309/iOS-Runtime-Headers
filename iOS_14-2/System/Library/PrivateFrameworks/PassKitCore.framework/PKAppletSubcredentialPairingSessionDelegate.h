/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKAppletSubcredentialPairingSessionDelegate <PKSessionDelegate>
@required
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;

@end

