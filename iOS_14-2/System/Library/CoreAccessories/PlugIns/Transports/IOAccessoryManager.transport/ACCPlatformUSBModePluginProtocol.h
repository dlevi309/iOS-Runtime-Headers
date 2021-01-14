/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCPlatformUSBModePluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2;
-(int)USBModeForEndpointUUID:(id)arg1;
-(int)USBModeForConnectionUUID:(id)arg1;
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2;

@end

