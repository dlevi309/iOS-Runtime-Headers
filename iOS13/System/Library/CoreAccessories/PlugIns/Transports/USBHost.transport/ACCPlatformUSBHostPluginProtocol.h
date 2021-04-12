/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@protocol ACCPlatformUSBHostPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 forConnectionUUID:(id)arg3;
-(BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)arg1;
-(BOOL)configureUSBHostNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 forConnectionUUID:(id)arg3;
-(BOOL)setNeedOutZLP:(BOOL)arg1 maxOutLength:(unsigned)arg2 forConnectionUUID:(id)arg3;

@required
-(BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)arg1;
-(BOOL)lockUSBHostInterfacesForConnectionUUID:(id)arg1;

@end

