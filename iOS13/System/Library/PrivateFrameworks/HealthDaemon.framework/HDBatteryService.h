/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthService.h>

@class CBCharacteristic;

@interface HDBatteryService : HDHealthService {

	CBCharacteristic* _batteryCharacteristic;

}

@property (nonatomic,retain) CBCharacteristic * batteryCharacteristic;              //@synthesize batteryCharacteristic=_batteryCharacteristic - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
+(id)implementedProperties;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(id)handleBatteryLevel:(id)arg1 ;
-(CBCharacteristic *)batteryCharacteristic;
-(void)setBatteryCharacteristic:(CBCharacteristic *)arg1 ;
@end

