/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService {

	unsigned long long _machineType;

}

@property (nonatomic,readonly) unsigned long long machineType;              //@synthesize machineType=_machineType - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
+(id)implementedProperties;
+(id)_characteristicsMap;
+(id)_allCharacteristicClasses;
+(unsigned long long)typeFromAdvertisementData:(id)arg1 ;
-(unsigned long long)machineType;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(id)servicesInProfile;
-(BOOL)processAdvertisementData:(id)arg1 ;
@end

