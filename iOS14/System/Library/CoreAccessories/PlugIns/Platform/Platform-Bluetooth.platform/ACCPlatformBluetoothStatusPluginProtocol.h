/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
*/


@protocol ACCPlatformBluetoothStatusPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)stopCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(void)startCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(int)updateBTComponent:(id)arg1 forAccessory:(id)arg2 withEnabledState:(BOOL)arg3;

@required
-(id)accessoryAttached:(id)arg1;
-(void)accessoryDetached:(id)arg1;

@end

