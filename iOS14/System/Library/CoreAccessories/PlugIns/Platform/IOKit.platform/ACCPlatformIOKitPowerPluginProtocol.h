/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformIOKitPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(int)getBatteryChargingState;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(int)getExternalBatteryChargingType;
-(id)createSleepNotificationClient;
-(BOOL)isExternalChargerConnected;
-(BOOL)getBatteryChargingTypeIsInductive;
-(unsigned char)getBatteryChargeLevel;
-(id)createBatteryNotificationClient;
-(void)clientHandledSleepNotification:(id)arg1;
-(void)destroySleepNotificationsForClient:(id)arg1;
-(int)getBatteryChargingType;
-(void)destroyBatteryNotificationsForClient:(id)arg1;

@end

