/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

