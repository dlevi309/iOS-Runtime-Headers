/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/


@interface CalReminderMigrationBackup : NSObject
+(BOOL)removeExistingBackupInCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(id)_backupFileInCalendarDirectory:(id)arg1 ;
+(BOOL)backupCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 reminderMigrationDefaultsProvider:(id)arg3 ;
@end

