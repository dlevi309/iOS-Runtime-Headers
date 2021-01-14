/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@interface ATXDemoAppLibraryProvider : NSObject
+(id)_defaults;
+(BOOL)isAppCategoryDemoModeEnabled;
+(id)demoAppCategoriesForRealAppCategories:(id)arg1 ;
+(BOOL)isSuggestionsAndRecentsDemoModeEnabled;
+(id)demoSuggestionsAndRecents;
+(void)_registerDefaultsForSuggestionsAndRecents:(id)arg1 ;
+(id)_getBundleIdsForPrefix:(id)arg1 inDefaults:(id)arg2 ;
+(void)_registerDefaultsForAppCategories:(id)arg1 ;
+(id)_categoryForIndex:(long long)arg1 inDefaults:(id)arg2 realCategories:(id)arg3 ;
@end

