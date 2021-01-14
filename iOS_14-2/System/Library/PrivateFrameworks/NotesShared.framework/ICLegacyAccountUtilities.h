/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICLegacyAccountUtilities : NSObject
+(id)legacyAccountForLegacyAccountType:(long long)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateLegacyAccountType:(long long)arg1 ;
+(BOOL)didChooseToMigrateAccountsForContext:(id)arg1 forAccountPassingTest:(/*^block*/id)arg2 ;
+(BOOL)isLegacyLocalAccount:(id)arg1 ;
+(id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg1 ;
+(id)legacyAccountForLocalAccountWithContext:(id)arg1 ;
+(id)legacyAccountForICloudACAccount:(id)arg1 context:(id)arg2 ;
+(id)accountForAccountIdentifier:(id)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateAccount:(id)arg1 context:(id)arg2 ;
+(id)legacyAccountForICloudAccount:(id)arg1 context:(id)arg2 ;
+(id)accountIdentifierForAccount:(id)arg1 ;
@end

