/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/


@protocol APBluetoothClientDelegate <NSObject>
@optional
-(void)airPlaySoloStartedAdvertising:(id)arg1;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySoloStoppedScanning:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)airPlaySoloAdvertisingPending:(id)arg1;
-(void)airPlaySoloStartedScanning:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)airPlaySoloStoppedAdvertising:(id)arg1;

@required
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
-(void)airPlaySoloDidUpdateState:(id)arg1;

@end

