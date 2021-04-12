/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAlarmEventEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)checkConstraints;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(id)_alarmEventFromAllPropertiesRow:(HDSQLiteRowRef)arg1 ;
+(id)insertOrReplaceAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
+(BOOL)insertOrReplaceAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)alarmEventWithTransaction:(id)arg1 error:(id*)arg2 ;
@end

