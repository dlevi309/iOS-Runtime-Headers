/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface _HKDaemonPreferences : NSObject
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(BOOL)_boolValueForKey:(id)arg1 ;
+(BOOL)usingDemoDataDatabase;
+(BOOL)isGenerateDemoDataSet;
+(BOOL)isStoreDemoModeSet;
+(BOOL)_setPreferenceValue:(void*)arg1 forKey:(id)arg2 ;
+(id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 ;
+(BOOL)shouldGenerateDemoData;
+(void)synchronizePreferencesWithWatch:(id)arg1 ;
@end

