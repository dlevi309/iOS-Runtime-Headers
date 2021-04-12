/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/_HKWorkoutObserverServerInterface.h>
#import <libobjc.A.dylib/HDCurrentWorkoutObserver.h>
#import <libobjc.A.dylib/HDWorkoutDataAccumulatorObserver.h>

@class HDWorkoutSessionServer, NSLock, NSString;

@interface HDWorkoutObserverServer : HDStandardTaskServer <_HKWorkoutObserverServerInterface, HDCurrentWorkoutObserver, HDWorkoutDataAccumulatorObserver> {

	BOOL _registered;
	HDWorkoutSessionServer* _currentWorkout;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_startTaskServerIfNeeded;
-(void)dealloc;
-(void)workoutDataAccumulator:(id)arg1 didUpdateEvents:(id)arg2 ;
-(void)workoutDataAccumulator:(id)arg1 didUpdateStartDate:(id)arg2 ;
-(void)_sendSnapshotForWorkout:(id)arg1 ;
-(void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2 ;
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3 ;
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didUpdateDataAccumulator:(id)arg3 ;
@end

