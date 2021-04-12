/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <ReminderMigration/ReminderMigration-Structs.h>
#import <libobjc.A.dylib/CalReminderMigrator.h>

@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;
@class NSString;

@interface CalCalendarDatabaseReminderMigrator : NSObject <CalReminderMigrator> {

	id<CalReminderKitProvider> _reminderKitProvider;
	id<CalReminderMigrationDefaultsProvider> _defaultsProvider;

}

@property (nonatomic,readonly) id<CalReminderKitProvider> reminderKitProvider;                         //@synthesize reminderKitProvider=_reminderKitProvider - In the implementation block
@property (nonatomic,readonly) id<CalReminderMigrationDefaultsProvider> defaultsProvider;              //@synthesize defaultsProvider=_defaultsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(const void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3 identifier:(id*)arg4 ;
+(BOOL)_attemptMigrationForStore:(const void*)arg1 withContext:(id)arg2 ;
+(void)_removeRemindersDataAfterSuccessfulMigrationFromDatabase:(CalDatabase*)arg1 withContext:(id)arg2 ;
+(id)_identifierForStore:(const void*)arg1 ;
+(long long)_accountTypeForStore:(const void*)arg1 ;
+(void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(const void*)arg1 withContext:(id)arg2 ;
+(id)_attemptAccountMigrationForStore:(const void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3 ;
+(void)_migrateReminderListsInStore:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4 ;
+(BOOL)_shouldMigrateCalendarAsReminderList:(const void*)arg1 ;
+(void)_visitCalendarForMigrationAsReminderList:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4 ;
+(id)_identifierForCalendar:(const void*)arg1 ;
+(void)_migrateCalendarAsReminderList:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4 ;
+(id)_colorStringForCalendar:(const void*)arg1 ;
+(void)_migrateRemindersInCalendar:(const void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3 ;
+(void)_migrateReminder:(const void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3 ;
+(id)_identifierForReminder:(const void*)arg1 ;
-(id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2 ;
-(BOOL)attemptMigrationWithCalendarDatabase:(CalDatabase*)arg1 ;
-(id<CalReminderMigrationDefaultsProvider>)defaultsProvider;
-(id<CalReminderKitProvider>)reminderKitProvider;
-(BOOL)attemptMigrationWithHomeDirectory:(id)arg1 ;
-(BOOL)_attemptMigrationWithHomeDirectory:(id)arg1 ;
-(BOOL)_attemptMigrationWithCalendarDatabase:(CalDatabase*)arg1 ;
-(BOOL)_attemptMigrationForDatabase:(CalDatabase*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3 ;
-(void)_performPreMigrationTasksInCalendarDirectory:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_performMigrationForCalendarDatabase:(CalDatabase*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3 ;
@end

