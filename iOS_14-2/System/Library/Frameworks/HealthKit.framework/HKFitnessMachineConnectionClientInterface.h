/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKFitnessMachineConnectionClientInterface <NSObject>
@required
-(void)clientRemote_deliverFailedWithError:(id)arg1;
-(void)clientRemote_deliverDetectedNFC:(id)arg1;
-(void)clientRemote_deliverMachineInformationUpdated:(id)arg1;
-(void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4;
-(void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4;

@end

