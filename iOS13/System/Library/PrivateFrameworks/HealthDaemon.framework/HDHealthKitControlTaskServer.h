/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>

@interface HDHealthKitControlTaskServer : HDStandardTaskServer
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end

