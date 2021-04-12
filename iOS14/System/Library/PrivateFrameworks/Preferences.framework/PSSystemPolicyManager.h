/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@interface PSSystemPolicyManager : NSObject
+(BOOL)_defaultAppSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(id)_thirdPartyApplicationProxies;
+(id)thirdPartyApplicationsIncludingAppClips:(BOOL)arg1 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
+(BOOL)hasAnyAppClip;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(id)thirdPartyApplicationProxies;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(id)thirdPartyApplications;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(void)_populateBBSectionIDs;
+(id)specifiersForThirdPartyApps:(id)arg1 ;
+(id)thirdPartyApplicationForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(BOOL)_languageSettingNeededForBundleID:(id)arg1 ;
@end

