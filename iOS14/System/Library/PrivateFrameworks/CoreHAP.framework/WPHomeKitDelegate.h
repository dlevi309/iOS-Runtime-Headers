/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

