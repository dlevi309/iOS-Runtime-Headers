/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(Class)ownerEntityClass;
+(id)ownerEntityReferenceColumn;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1 ;
+(id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id*)arg2 ;
+(BOOL)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(Class)workoutEventClass;
@end

