/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


@interface NSPersonNameComponentsFormatterPreferences : NSObject
+(void)setShortNameFormat:(long long)arg1 ;
+(void)setDefaultDisplayNameOrder:(long long)arg1 ;
+(void)setShortNameIsEnabled:(BOOL)arg1 ;
+(void)setPreferNicknamesDefault:(BOOL)arg1 ;
+(void)_postPreferencesChangedNotification;
+(void)_syncronizeGizmoDefaultWithKey:(id)arg1 value:(long long)arg2 ;
+(void)_setPreference:(id)arg1 toValue:(long long)arg2 usingExistingGetter:(SEL)arg3 ;
+(id)mappedPreferencesForPreferences:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
+(id)infoClassFromPreferencesSource:(unsigned long long)arg1 ;
@end

