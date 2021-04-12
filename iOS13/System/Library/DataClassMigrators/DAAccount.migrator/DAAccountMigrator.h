/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
+(BOOL)_isEnterpriseCalendarAccount:(id)arg1 ;
-(BOOL)performMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)_cleanupDuplicateDelegateAccounts;
-(void)_migrateDelegateAccounts;
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_migrateCDBPreferences;
-(void)_notifyDaHolidaySubCalAccount;
-(id)dataClassName;
@end

