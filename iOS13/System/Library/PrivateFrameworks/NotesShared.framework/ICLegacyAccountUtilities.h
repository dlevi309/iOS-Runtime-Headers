/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICLegacyAccountUtilities : NSObject
+(id)legacyAccountForLegacyAccountType:(long long)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateLegacyAccountType:(long long)arg1 ;
+(BOOL)didChooseToMigrateAccountsForContext:(id)arg1 forAccountPassingTest:(/*^block*/id)arg2 ;
+(id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg1 ;
+(id)legacyAccountForLocalAccountWithContext:(id)arg1 ;
+(id)accountForAccountIdentifier:(id)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateAccount:(id)arg1 context:(id)arg2 ;
+(BOOL)isLegacyLocalAccount:(id)arg1 ;
+(id)accountIdentifierForAccount:(id)arg1 ;
@end

