/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/

#import <libobjc.A.dylib/ACCPlatformUSBFaultPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBCableTypePluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformIOKitPowerPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBCameraKitHubPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformSleepAssertionPluginProtocol.h>

@class USBFaultMonitor, NSString;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol> {

	BOOL _isRunning;
	USBFaultMonitor* _monitor;

}

@property (assign,nonatomic) BOOL isRunning;                         //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) USBFaultMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(unsigned)getUSBHubSiphoningCurrentRequirementInmA:(id)arg1 ;
-(int)getBatteryChargingState;
-(BOOL)getUSBFaultStateforType:(int)arg1 ;
-(void)initUSBCameraKitHubNotifications:(id)arg1 ;
-(USBFaultMonitor *)monitor;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(unsigned)getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1 ;
-(int)getExternalBatteryChargingType;
-(unsigned)getUSBHubUnitLoadInmA:(id)arg1 ;
-(id)createSleepNotificationClient;
-(BOOL)isExternalChargerConnected;
-(BOOL)getBatteryChargingTypeIsInductive;
-(unsigned char)getBatteryChargeLevel;
-(void)setMonitor:(USBFaultMonitor *)arg1 ;
-(id)createBatteryNotificationClient;
-(void)removeEASleepAssertion;
-(void)removeApplePencilSleepAssertion;
-(BOOL)getUSBHubOverCurrentState:(id)arg1 ;
-(void)clientHandledSleepNotification:(id)arg1 ;
-(void)createApplePencilSleepAssertion;
-(void)usbFaultMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(void)destroySleepNotificationsForClient:(id)arg1 ;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)destroySleepAssertionForUUID:(id)arg1 ;
-(void)setUSBHubOverCurrentSiphoning:(id)arg1 ;
-(void)initPlugin;
-(void)usbCableTypeMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(void)createSleepAssertionForUUID:(id)arg1 ;
-(int)getBatteryChargingType;
-(void)createEASleepAssertion;
-(void)startPlugin;
-(void)resetUSBHubOverCurrentSiphoning:(id)arg1 ;
-(void)destroyBatteryNotificationsForClient:(id)arg1 ;
@end

