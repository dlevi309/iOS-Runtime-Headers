/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKFitnessMachineConnectionInitiatorServerInterface <NSObject>
@required
-(void)remote_registerConnectionInitiatorClient:(id)arg1;
-(void)remote_simulateAccept;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1;

@end

