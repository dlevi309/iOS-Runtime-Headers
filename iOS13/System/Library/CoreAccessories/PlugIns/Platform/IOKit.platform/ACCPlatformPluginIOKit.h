/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isRunning;
-(USBFaultMonitor *)monitor;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setMonitor:(USBFaultMonitor *)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)removeApplePencilSleepAssertion;
-(void)createSleepAssertionForUUID:(id)arg1 ;
-(void)destroySleepAssertionForUUID:(id)arg1 ;
-(void)createEASleepAssertion;
-(void)removeEASleepAssertion;
-(void)createApplePencilSleepAssertion;
-(BOOL)isExternalChargerConnected;
-(int)getBatteryChargingState;
-(unsigned char)getBatteryChargeLevel;
-(id)createBatteryNotificationClient;
-(void)destroyBatteryNotificationsForClient:(id)arg1 ;
-(id)createSleepNotificationClient;
-(void)destroySleepNotificationsForClient:(id)arg1 ;
-(void)clientHandledSleepNotification:(id)arg1 ;
-(int)getBatteryChargingType;
-(int)getExternalBatteryChargingType;
-(BOOL)getBatteryChargingTypeIsInductive;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(void)initUSBCameraKitHubNotifications:(id)arg1 ;
-(unsigned)getUSBHubUnitLoadInmA:(id)arg1 ;
-(unsigned)getUSBHubSiphoningCurrentRequirementInmA:(id)arg1 ;
-(unsigned)getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1 ;
-(void)usbFaultMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(BOOL)getUSBFaultStateforType:(int)arg1 ;
-(void)usbCableTypeMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(BOOL)getUSBHubOverCurrentState:(id)arg1 ;
-(void)resetUSBHubOverCurrentSiphoning:(id)arg1 ;
-(void)setUSBHubOverCurrentSiphoning:(id)arg1 ;
@end

