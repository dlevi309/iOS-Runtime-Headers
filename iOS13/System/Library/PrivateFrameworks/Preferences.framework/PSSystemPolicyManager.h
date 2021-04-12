/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@interface PSSystemPolicyManager : NSObject
+(id)thirdPartyApplications;
+(id)specifiersForThirdPartyApps:(id)arg1 ;
+(id)_thirdPartyApplicationProxies;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(void)_populateBBSectionIDs;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
+(id)thirdPartyApplicationForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationProxies;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
@end

