/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachineConnectionInitiatorProtocol <NSObject>
@required
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
-(void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)simulateAccept;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;

@end

