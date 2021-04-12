/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICMigrationUtilities : NSObject
+(void)deleteMigratedHTMLAccountsInContext:(id)arg1 ;
+(void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1 ;
+(void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)updateAllLegacyAccountMigrationStatesInContext:(id)arg1 ;
+(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1 ;
@end

