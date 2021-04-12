/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
*/


@protocol ACCPlatformBluetoothStatusPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)startCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(void)stopCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(int)updateBTComponent:(id)arg1 forAccessory:(id)arg2 withEnabledState:(BOOL)arg3;

@required
-(id)accessoryAttached:(id)arg1;
-(void)accessoryDetached:(id)arg1;

@end

