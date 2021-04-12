/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(Class)workoutEventClass;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(long long)protectionClass;
+(id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id*)arg2 ;
+(id)ownerEntityReferenceColumn;
+(id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)deleteStatementForWorkoutEventsWithTransaction:(id)arg1 ;
+(id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(Class)ownerEntityClass;
@end

