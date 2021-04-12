/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDClinicalAPIReminderEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_HD8*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_queryForNextScheduledReminderInTransaction:(id)arg1 ;
+(id)_firstQueryResultAsReminder:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(id)_queryForLastPostedReminderInTransaction:(id)arg1 ;
+(id)_entityForAnyReminderWithSource:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForReminderWithSourceBundleIdentifier:(id)arg1 ;
+(id)_reminderForSource:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(id)_reminderForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertReminder:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(id)_entityForReminder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteRemindersForSourceWithBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForReminderWithSourceEntity:(id)arg1 ;
+(id)_predicateForPostedReminders;
+(id)_predicateForUnpostedReminders;
+(id)_predicateForRemindersWithNotDeletedSources;
+(id)nextScheduledReminderWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)lastPostedReminderWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)reminderForSource:(id)arg1 createIfNecessary:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)setReminderPosted:(id)arg1 postDate:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)deleteReminder:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)_instantiateObjectWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
@end

