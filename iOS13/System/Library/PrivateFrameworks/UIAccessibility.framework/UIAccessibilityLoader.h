/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@interface UIAccessibilityLoader : NSObject
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(void)_didLoadSystemAppAccessibilityBundle;
+(void)_accessibilityStartMiniServer;
+(void)_performInitialAccessibilityBundleLoad:(BOOL)arg1 monitorForFutureLoadEvents:(BOOL)arg2 trackingMode:(long long)arg3 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_stringLocalizationStarted:(id)arg1 ;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4 ;
+(BOOL)_accessibilityServerStarted;
+(BOOL)_accessibilityUIKitBundleLoaded;
+(BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+(void)_didLoadPreboardAccessibilityBundle;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
@end

