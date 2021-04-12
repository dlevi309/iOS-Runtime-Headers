/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol WPPairingDelegate <NSObject>
@optional
-(void)pairingStartedScanning:(id)arg1;
-(void)pairingStoppedScanning:(id)arg1;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
-(BOOL)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4;

@required
-(void)pairingDidUpdateState:(id)arg1;

@end

