/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol WPPairingDelegate <NSObject>
@optional
-(void)pairingStartedScanning:(id)arg1;
-(void)pairingStoppedScanning:(id)arg1;
-(BOOL)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;

@required
-(void)pairingDidUpdateState:(id)arg1;

@end

