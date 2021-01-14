/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformUSBCameraKitHubPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(unsigned)getUSBHubSiphoningCurrentRequirementInmA:(id)arg1;
-(void)initUSBCameraKitHubNotifications:(id)arg1;
-(unsigned)getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1;
-(unsigned)getUSBHubUnitLoadInmA:(id)arg1;
-(BOOL)getUSBHubOverCurrentState:(id)arg1;
-(void)setUSBHubOverCurrentSiphoning:(id)arg1;
-(void)resetUSBHubOverCurrentSiphoning:(id)arg1;

@end

