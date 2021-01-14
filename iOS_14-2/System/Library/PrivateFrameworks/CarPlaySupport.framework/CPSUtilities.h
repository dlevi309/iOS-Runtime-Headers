/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@interface CPSUtilities : NSObject
+(id)openURL:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)isNetworkConstrained;
+(BOOL)deviceIsLocked;
+(BOOL)deviceHasCapabilities:(id)arg1 ;
+(int)_deviceClass;
+(BOOL)deviceIsPad;
+(id)localizedDeviceName;
+(id)openURL:(id)arg1 ;
+(BOOL)deviceHasHomeButton;
+(BOOL)isBundleIdentifierBeingInstalled:(id)arg1 ;
+(id)versionIdentifierForAppWithBundleIdentifier:(id)arg1 isPlaceholder:(BOOL*)arg2 ;
+(void)uninstallAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)poweredByCaptionForAppName:(id)arg1 ;
+(void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 promptForUnlock:(BOOL)arg3 originIsControlCenter:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)openAppWithBundleIdentifier:(id)arg1 ;
+(id)lowercasedDeviceFamilyName;
+(id)oppositeDeviceFamilyName;
+(BOOL)shouldPlayHaptics;
@end

