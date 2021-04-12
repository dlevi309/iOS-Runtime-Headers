/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary, HKHealthStore, NSDictionary;

@interface HKUnitPreferenceController : NSObject {

	NSMutableDictionary* _unitStrings;
	HKHealthStore* _healthStore;
	NSDictionary* _unitPreferencesByObjectType;

}
-(void)dealloc;
-(void)_localeDidChange:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 ;
-(id)unitForDisplayType:(id)arg1 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(id)localizedLongDisplayNameForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 ;
-(void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(void)_initHKUnitPreferences;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)_displayNameKeyForUnit:(id)arg1 ;
-(id)_displayNameKey:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)_longDisplayNameOverrideForDisplayType:(id)arg1 ;
-(id)_longDisplayNameForUnit:(id)arg1 ;
-(void)_postNotificationWithChangedKeys:(id)arg1 ;
-(void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1 ;
-(id)_generateDefaultHKUnitPreferences;
-(void)_refreshHKUnitPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateHKUnitPreferences:(id)arg1 ;
-(id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2 ;
-(double)scaleFactorForYAxisLabeling:(id)arg1 ;
-(id)displayRangeForDisplayType:(id)arg1 ;
@end

