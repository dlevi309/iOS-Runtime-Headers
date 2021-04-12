/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <HealthMenstrualCyclesDaemon/HealthMenstrualCyclesDaemon-Structs.h>
#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDMenstrualCyclesPluginServerInterface.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDMCProfileExtension, HDHealthStoreClient, NSObject, NSString;

@interface HDMCPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface> {

	HDProfile* _profile;
	HDMCProfileExtension* _profileExtension;
	HDHealthStoreClient* _client;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)diagnosticDescription;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_fetchScheduledNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_saveDaySummaries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_saveMenstrualFlowByDayIndex:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_saveLastMenstrualPeriodWithDayIndexRange:(SCD_Struct_HD0)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_savePeriodNotYetStartedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_savePeriodNotYetEndedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_savePeriodStartedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_savePeriodEndedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_reconcileSamplesToDeriveDaySummary:(id)arg1 error:(id*)arg2 ;
-(void)_triggerNanoSync;
-(BOOL)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)arg1 dayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)_queue_saveMenstrualFlowByDayIndex:(id)arg1 calendarCache:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_saveLastMenstrualPeriodWithDayIndexRange:(SCD_Struct_HD0)arg1 calendarCache:(id)arg2 error:(id*)arg3 ;
-(id)_queue_mostRecentMenstrualFlowSampleWithError:(id*)arg1 requiringBeforeDay:(long long)arg2 calendarCache:(id)arg3 ;
-(BOOL)_queue_insertSamplesWithClientSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queue_saveMenstrualFlow:(long long)arg1 forEachDayInRange:(SCD_Struct_HD0)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)_queue_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)arg1 withDaySummary:(id)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)arg1 calendarCache:(id)arg2 error:(id*)arg3 ;
-(id)_samplesToInsertForUpdateFromDaySummary:(id)arg1 toDaySummary:(id)arg2 typesToDelete:(id*)arg3 calendarCache:(id)arg4 ;
-(BOOL)_queue_deleteSamplesOfType:(id)arg1 onDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(void)_queue_updateLastLoggedInExperienceDate;
@end

