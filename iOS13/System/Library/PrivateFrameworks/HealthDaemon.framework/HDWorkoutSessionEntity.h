/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutSessionEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)privateSubEntities;
+(id)lookupSessionWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)createSessionWithIdentifier:(id)arg1 source:(id)arg2 configuration:(id)arg3 state:(long long)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(id)sessionsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sessionsExcludingIdentifiers:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sessionIdentifierForRecoveryInProfile:(id)arg1 expirationInterval:(double)arg2 error:(id*)arg3 ;
-(id)stateWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2 ;
-(id)startDateInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)endDateInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateLatestActivityDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)workoutConfigurationWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)hasFailedInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setHasFailed:(BOOL)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)clientBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setClientBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)clientApplicationIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setClientApplicationIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)sourceWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setSource:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)associatedBuilderWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAssociatedBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)requestedTargetStateWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setRequestedTargetState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)finishWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)latestActivityDateInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateLatestActivityDateWithTransaction:(id)arg1 error:(id*)arg2 ;
@end

