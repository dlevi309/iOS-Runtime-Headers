/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol WPDeviceScannerDelegate <NSObject>
@optional
-(void)scanner:(id)arg1 foundAnyDevice:(id)arg2 withData:(id)arg3;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
-(void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;

@required
-(void)deviceScannerDidUpdateState:(id)arg1;

@end

