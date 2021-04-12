/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKWorkoutCondenserControlServer.h>

@interface HDWorkoutCondenserControlServer : HDStandardTaskServer <HKWorkoutCondenserControlServer>
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end

