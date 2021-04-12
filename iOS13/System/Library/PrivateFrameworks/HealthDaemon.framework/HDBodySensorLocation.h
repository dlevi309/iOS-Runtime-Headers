/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDBodySensorLocation : HDHealthServiceCharacteristic {

	long long _sensorLocation;

}

@property (assign,nonatomic) long long sensorLocation;              //@synthesize sensorLocation=_sensorLocation - In the implementation block
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(long long)sensorLocation;
-(void)setSensorLocation:(long long)arg1 ;
@end

