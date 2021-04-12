/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol WPAWDLDelegate <NSObject>
@optional
-(void)awdlStartedAdvertising:(id)arg1;
-(void)awdlAdvertisingPending:(id)arg1;
-(void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)awdlStartedScanning:(id)arg1;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2;
-(void)awdlStoppedAdvertising:(id)arg1;
-(void)awdlStoppedScanning:(id)arg1;

@required
-(void)awdlDidUpdateState:(id)arg1;

@end

