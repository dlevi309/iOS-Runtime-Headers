/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutServerInterface <NSObject>
@required
-(void)remote_finishAllWorkoutsWithCompletion:(/*^block*/id)arg1;
-(void)remote_generatePauseOrResumeRequestWithCompletion:(/*^block*/id)arg1;
-(void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1;
-(void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
-(void)remote_simulateAccept;
-(void)remote_simulateDisconnect;
-(void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_endFitnessMachineConnectionWithUUID:(id)arg1;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_markClientReadyWithConnectionUUID:(id)arg1;

@end

