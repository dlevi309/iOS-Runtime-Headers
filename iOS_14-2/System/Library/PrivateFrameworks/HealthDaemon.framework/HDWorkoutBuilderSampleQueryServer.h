/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDTaskServerObserver.h>
#import <libobjc.A.dylib/HDWorkoutBuilderServerSampleObserer.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@class NSUUID, HDWorkoutBuilderServer, NSString;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver> {

	BOOL _hasFinishedHistoricalFetch;
	BOOL _hasDeliveredInitialResults;
	NSUUID* _workoutBuilderIdentifier;
	HDWorkoutBuilderServer* _workoutBuilderServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)requiredEntitlements;
+(Class)queryClass;
-(void)didCreateTaskServer:(id)arg1 ;
-(BOOL)_shouldObserveOnPause;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_queue_performHistoricalQuery;
-(id)workoutBuilderSampleQueryClientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_scheduleHistoricalQuery;
-(void)didInvalidateTaskServer:(id)arg1 ;
-(void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2 ;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
@end

