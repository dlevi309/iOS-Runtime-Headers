/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService {

	unsigned long long _machineType;

}

@property (nonatomic,readonly) unsigned long long machineType;              //@synthesize machineType=_machineType - In the implementation block
+(id)serviceUUID;
+(long long)serviceType;
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

