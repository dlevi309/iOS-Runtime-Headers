/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICMigrationUtilities : NSObject
+(void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1 ;
+(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1 ;
+(void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)updateAllLegacyAccountMigrationStates;
+(void)deleteMigratedHTMLAccounts;
@end

