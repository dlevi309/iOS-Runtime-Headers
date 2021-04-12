/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformUSBFaultPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(void)usbFaultMonitor:(BOOL)arg1 forUUID:(id)arg2;
-(BOOL)getUSBFaultStateforType:(int)arg1;

@end

