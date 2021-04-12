/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformUSBCameraKitHubPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(void)initUSBCameraKitHubNotifications:(id)arg1;
-(unsigned)getUSBHubUnitLoadInmA:(id)arg1;
-(unsigned)getUSBHubSiphoningCurrentRequirementInmA:(id)arg1;
-(unsigned)getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1;
-(BOOL)getUSBHubOverCurrentState:(id)arg1;
-(void)resetUSBHubOverCurrentSiphoning:(id)arg1;
-(void)setUSBHubOverCurrentSiphoning:(id)arg1;

@end

