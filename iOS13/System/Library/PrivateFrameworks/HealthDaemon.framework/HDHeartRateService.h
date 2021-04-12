/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService {

	BOOL _deliverData;
	long long _preferredSensorLocation;

}

@property (assign,nonatomic) long long preferredSensorLocation;              //@synthesize preferredSensorLocation=_preferredSensorLocation - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
-(id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(BOOL)supportsOperation:(id)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPreferredSensorLocation:(long long)arg1 ;
-(void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deliverData;
-(void)handleHeartRate:(id)arg1 ;
-(void)handleBodyLocation:(id)arg1 ;
-(void)setDeliverData:(BOOL)arg1 ;
-(long long)preferredSensorLocation;
@end

