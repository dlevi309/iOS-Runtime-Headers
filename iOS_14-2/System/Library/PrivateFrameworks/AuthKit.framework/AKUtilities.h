/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@interface AKUtilities : NSObject
+(void)openApplicationWithBundleID:(id)arg1 ;
+(id)bundleIdentifier;
+(id)bundleVersion;
+(id)currentApplicationIdentifier;
+(id)currentApplicationVersion;
+(id)urlForBundleIdentifier:(id)arg1 ;
+(void)launchSoftwareUpdate;
+(void)launchPhotosApplication;
+(void)openEnergySaverPref;
+(void)openSharingPref;
+(void)openSecurityPref;
+(void)openInternetAccountPref;
+(void)openParentalControlPref;
+(void)openAppleIDPref;
+(BOOL)openAppleIDPrefWithLaunchParameters:(id)arg1 ;
+(BOOL)screenLockIsEnabled;
@end

