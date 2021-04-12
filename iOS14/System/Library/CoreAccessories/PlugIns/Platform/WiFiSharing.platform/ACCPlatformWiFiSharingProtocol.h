/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/WiFiSharing.platform/WiFiSharing
*/


@protocol ACCPlatformWiFiSharingProtocol <NSObject>
@required
-(BOOL)hasWAPICapability;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1;
-(BOOL)isDeviceConnectedToWiFi;
-(id)copyDeviceWiFiNetworkInformation;

@end

