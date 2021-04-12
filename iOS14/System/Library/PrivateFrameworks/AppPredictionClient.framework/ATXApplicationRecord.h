/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@interface ATXApplicationRecord : NSObject
+(id)appInfoForBundle:(id)arg1 ;
+(BOOL)isAppClipGivenAppRecord:(id)arg1 ;
+(BOOL)isAppClipWebClipBundleId:(id)arg1 ;
+(id)genreForBundle:(id)arg1 ;
+(id)localizedNameForBundle:(id)arg1 ;
+(BOOL)isEnterpriseAppForBundle:(id)arg1 ;
+(BOOL)isBetaAppForBundle:(id)arg1 ;
+(id)parentAppBundleIdForClipBundleID:(id)arg1 ;
+(BOOL)isLaunchProhibitedForBundle:(id)arg1 ;
+(BOOL)isInstallingForBundle:(id)arg1 ;
+(BOOL)isArcadeAppForBundle:(id)arg1 ;
+(BOOL)isWebClipInstalledWithBundleId:(id)arg1 ;
+(void)getDeviceManagementPolicyForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)recordForBundleId:(id)arg1 ;
+(BOOL)isInstalledForBundle:(id)arg1 ;
+(BOOL)isInstalledAndNotRestrictedForBundle:(id)arg1 ;
+(id)schemaWithoutFallbackForBundle:(id)arg1 ;
+(BOOL)isOffloadedForBundle:(id)arg1 ;
+(BOOL)isInstalledOrIsPlaceholderForBundle:(id)arg1 ;
+(id)bundleIdForAdamIdIfInstalled:(unsigned long long)arg1 ;
+(id)recordForAdamId:(unsigned long long)arg1 ;
+(BOOL)isUPPValidatedForBundle:(id)arg1 ;
+(BOOL)isAppClipForBundleId:(id)arg1 ;
@end

