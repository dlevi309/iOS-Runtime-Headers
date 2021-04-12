/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCPlatformUSBModePluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2;
-(int)USBModeForConnectionUUID:(id)arg1;
-(int)USBModeForEndpointUUID:(id)arg1;

@end

