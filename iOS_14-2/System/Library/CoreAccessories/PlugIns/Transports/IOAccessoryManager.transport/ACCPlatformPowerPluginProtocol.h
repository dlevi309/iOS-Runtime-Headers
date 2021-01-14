/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCPlatformPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(unsigned)USBCurrentLimitInmA:(id)arg1;
-(BOOL)setUSBCurrentOffset:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)isPowerDuringSleepEnabled:(id)arg1;
-(unsigned)USBChargingVoltageInmV:(id)arg1;
-(BOOL)setBatteryPackMode:(BOOL)arg1 forConnectionUUID:(id)arg2;
-(unsigned)USBCurrentLimitOffsetInmA:(id)arg1;
-(BOOL)isBatteryPackModeEnabled:(id)arg1;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 forConnectionUUID:(id)arg2;
-(unsigned)accessoryChargingCurrentInmA:(id)arg1;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 forConnectionUUID:(id)arg2;
-(unsigned)sleepPowerCurrentLimitInmA:(id)arg1;
-(unsigned)USBCurrentLimitBaseInmA:(id)arg1;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2;
-(int)CableType:(id)arg1;
-(BOOL)isPowerDuringSleepSupported:(id)arg1;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 forConnectionUUID:(id)arg2;
-(BOOL)configureAccessoryPowerMode:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)resetAccessoryBaseCurrent:(id)arg1;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2;

@end

