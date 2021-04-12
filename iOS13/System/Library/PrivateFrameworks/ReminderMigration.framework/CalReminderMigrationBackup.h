/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/


@interface CalReminderMigrationBackup : NSObject
+(BOOL)removeExistingBackupInCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(id)_backupFileInCalendarDirectory:(id)arg1 ;
+(BOOL)backupCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 reminderMigrationDefaultsProvider:(id)arg3 ;
@end

