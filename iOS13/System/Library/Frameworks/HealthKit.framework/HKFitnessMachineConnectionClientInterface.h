/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

