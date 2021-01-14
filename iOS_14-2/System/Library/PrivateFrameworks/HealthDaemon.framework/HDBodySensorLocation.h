/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDBodySensorLocation : HDHealthServiceCharacteristic {

	long long _sensorLocation;

}

@property (assign,nonatomic) long long sensorLocation;              //@synthesize sensorLocation=_sensorLocation - In the implementation block
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(long long)sensorLocation;
-(id)description;
-(void)setSensorLocation:(long long)arg1 ;
@end

