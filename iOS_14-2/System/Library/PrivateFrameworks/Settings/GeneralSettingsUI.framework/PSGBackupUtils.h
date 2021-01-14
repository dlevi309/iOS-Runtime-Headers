/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@interface PSGBackupUtils : NSObject
+(BOOL)isDomainWhitelisted:(id)arg1 ;
+(void)fetchBackupDisabledAppsWithBackupManager:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)configureAlertMessageOfType:(unsigned long long)arg1 AndTitleForBackUpDisabledApps:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldIgnoreBundleId:(id)arg1 ;
+(BOOL)isiCloudPhotosEnabled;
+(BOOL)isDomainNameIgnored:(id)arg1 ;
+(id)displayNameForDomainInfo:(id)arg1 ;
+(BOOL)hasValidDisplayNameOfDomain:(id)arg1 ;
+(id)alertTitleForBackupDisabledAppsInfo:(id)arg1 ;
+(id)alertBodyForBackupDisabledAppsInfo:(id)arg1 ofType:(unsigned long long)arg2 ;
+(id)bundleIdForDomainInfo:(id)arg1 ;
@end

