/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@protocol ACCPlatformUSBHostPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 forConnectionUUID:(id)arg3;
-(BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)arg1;
-(BOOL)setNeedOutZLP:(BOOL)arg1 maxOutLength:(unsigned)arg2 forConnectionUUID:(id)arg3;
-(BOOL)configureUSBHostNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 forConnectionUUID:(id)arg3;

@required
-(BOOL)lockUSBHostInterfacesForConnectionUUID:(id)arg1;
-(BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)arg1;

@end

