/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformUSBFaultPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)getUSBFaultStateforType:(int)arg1;
-(void)usbFaultMonitor:(BOOL)arg1 forUUID:(id)arg2;

@end

