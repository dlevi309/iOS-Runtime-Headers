/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDTaskServerObserver.h>
#import <libobjc.A.dylib/HDWorkoutBuilderServerSampleObserer.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@class NSUUID, HDWorkoutBuilderServer, NSString;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver> {

	BOOL _hasFinishedHistoricalFetch;
	NSUUID* _workoutBuilderIdentifier;
	HDWorkoutBuilderServer* _workoutBuilderServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_queue_performHistoricalQuery;
-(id)workoutBuilderSampleQueryClientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_scheduleHistoricalQuery;
-(void)didCreateTaskServer:(id)arg1 ;
-(void)didInvalidateTaskServer:(id)arg1 ;
-(void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2 ;
-(BOOL)_shouldObserveOnPause;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
@end

