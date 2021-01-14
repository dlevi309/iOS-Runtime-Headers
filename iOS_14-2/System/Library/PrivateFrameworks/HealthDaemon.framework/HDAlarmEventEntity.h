/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAlarmEventEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
+(BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(long long)protectionClass;
+(id)_alarmEventFromAllPropertiesRow:(HDSQLiteRowRef)arg1 ;
+(BOOL)insertOrReplaceAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)checkConstraints;
+(id)insertOrReplaceAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(id)alarmEventWithTransaction:(id)arg1 error:(id*)arg2 ;
@end

