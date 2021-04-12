/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader
+(void)initialize;
+(void)loadExtendedAccessibilityBundles;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+(long long)_accessibilityLoadingPriorityForBundle:(id)arg1 ;
@end

