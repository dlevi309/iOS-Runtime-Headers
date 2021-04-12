/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol WPHomeKitDelegate <NSObject>
@optional
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 forType:(long long)arg3;
-(void)homeKit:(id)arg1 allowDuplicate:(BOOL)arg2;
-(void)homeKitStartedScanning:(id)arg1 forType:(long long)arg2;
-(void)homeKitStoppedScanning:(id)arg1 forType:(long long)arg2;

@required
-(void)homeKitDidUpdateState:(id)arg1;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;

@end

