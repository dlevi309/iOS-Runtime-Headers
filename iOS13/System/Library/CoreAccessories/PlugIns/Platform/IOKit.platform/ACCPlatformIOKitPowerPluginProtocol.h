/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformIOKitPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)isExternalChargerConnected;
-(int)getBatteryChargingState;
-(unsigned char)getBatteryChargeLevel;
-(id)createBatteryNotificationClient;
-(void)destroyBatteryNotificationsForClient:(id)arg1;
-(id)createSleepNotificationClient;
-(void)destroySleepNotificationsForClient:(id)arg1;
-(void)clientHandledSleepNotification:(id)arg1;
-(int)getBatteryChargingType;
-(int)getExternalBatteryChargingType;
-(BOOL)getBatteryChargingTypeIsInductive;
-(BOOL)getExternalBatteryChargingTypeIsInductive;

@end

