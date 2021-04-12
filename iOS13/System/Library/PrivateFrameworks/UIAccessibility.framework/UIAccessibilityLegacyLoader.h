/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader
+(void)initialize;
+(void)loadExtendedAccessibilityBundles;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+(long long)_accessibilityLoadingPriorityForBundle:(id)arg1 ;
@end

