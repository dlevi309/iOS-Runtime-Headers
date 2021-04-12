/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic {

	unsigned long long _machineState;

}

@property (assign,nonatomic) unsigned long long machineState;              //@synthesize machineState=_machineState - In the implementation block
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
+(id)unitTest_fakeStatusUpdateForState:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)machineState;
-(void)setMachineState:(unsigned long long)arg1 ;
@end

