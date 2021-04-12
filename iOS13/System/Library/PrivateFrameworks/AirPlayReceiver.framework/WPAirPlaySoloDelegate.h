/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


@protocol WPAirPlaySoloDelegate <NSObject>
@optional
-(void)airPlaySoloStartedAdvertising:(id)arg1;
-(void)airPlaySoloStoppedAdvertising:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)airPlaySoloAdvertisingPending:(id)arg1;
-(void)airPlaySoloStartedScanning:(id)arg1;
-(void)airPlaySoloStoppedScanning:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySolo:(id)arg1 didFindPeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
-(void)airplaySolo:(id)arg1 peerTrackingSlotsAvailable:(BOOL)arg2;

@required
-(void)airPlaySoloDidUpdateState:(id)arg1;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;

@end

