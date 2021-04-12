/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRCryptoPairingSessionDelegate <NSObject>
@optional
-(void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
-(void)pairingSessionHideSetupCode:(id)arg1;
-(void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(/*^block*/id)arg3;
-(void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;

@required
-(void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;

@end

