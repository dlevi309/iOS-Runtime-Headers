/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <CoreAccessories/ACCTransportPlugin.h>
#import <libobjc.A.dylib/ACCTransportPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBModePluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformPowerPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformLightningPluginProtocol.h>

@class NSString;

@interface ACCTransportPluginIOAccessoryManager : ACCTransportPlugin <ACCTransportPluginProtocol, ACCPlatformUSBModePluginProtocol, ACCPlatformPowerPluginProtocol, ACCPlatformLightningPluginProtocol> {

	BOOL _isRunning;

}

@property (assign,nonatomic) BOOL isRunning;                        //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(unsigned)USBCurrentLimitInmA:(id)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2 ;
-(BOOL)setUSBCurrentOffset:(int)arg1 forConnectionUUID:(id)arg2 ;
-(BOOL)isPowerDuringSleepEnabled:(id)arg1 ;
-(unsigned)USBChargingVoltageInmV:(id)arg1 ;
-(int)USBModeForEndpointUUID:(id)arg1 ;
-(void)resetLightningBusForEndpointWithUUID:(id)arg1 ;
-(void)authStatusDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthStatus:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6 ;
-(BOOL)setBatteryPackMode:(BOOL)arg1 forConnectionUUID:(id)arg2 ;
-(unsigned)USBCurrentLimitOffsetInmA:(id)arg1 ;
-(BOOL)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 ;
-(BOOL)isBatteryPackModeEnabled:(id)arg1 ;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 forConnectionUUID:(id)arg2 ;
-(unsigned)accessoryChargingCurrentInmA:(id)arg1 ;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 forConnectionUUID:(id)arg2 ;
-(unsigned)sleepPowerCurrentLimitInmA:(id)arg1 ;
-(unsigned)USBCurrentLimitBaseInmA:(id)arg1 ;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(int)CableType:(id)arg1 ;
-(BOOL)isPowerDuringSleepSupported:(id)arg1 ;
-(BOOL)isRunning;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(void)stopPlugin;
-(int)USBModeForConnectionUUID:(id)arg1 ;
-(void)initPlugin;
-(BOOL)configureAccessoryPowerMode:(int)arg1 forConnectionUUID:(id)arg2 ;
-(BOOL)resetAccessoryBaseCurrent:(id)arg1 ;
-(void)startPlugin;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2 ;
@end

