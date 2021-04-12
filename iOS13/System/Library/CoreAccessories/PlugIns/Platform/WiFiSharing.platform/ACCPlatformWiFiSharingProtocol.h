/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/WiFiSharing.platform/WiFiSharing
*/


@protocol ACCPlatformWiFiSharingProtocol <NSObject>
@required
-(BOOL)hasWAPICapability;
-(BOOL)isDeviceConnectedToWiFi;
-(id)copyDeviceWiFiNetworkInformation;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1;

@end

