/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachineConnectionInitiatorProtocol <NSObject>
@required
-(void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;
-(void)simulateAccept;

@end

