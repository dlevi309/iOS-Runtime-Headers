/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableDictionary, HKHealthStore;

@interface HKUnitPreferenceController : NSObject {

	NSMutableDictionary* _unitStrings;
	NSMutableDictionary* _unitPreferencesByObjectType;
	os_unfair_lock_s _lock;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)unitForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 ;
-(id)localizedLongDisplayNameForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)displayRangeForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_initHKUnitPreferences;
-(id)_lock_unitForDisplayType:(id)arg1 ;
-(void)_lock_updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(void)_postNotificationWithChangedKeys:(id)arg1 ;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 nameContext:(long long)arg3 ;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 nameContext:(long long)arg3 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 nameContext:(long long)arg3 ;
-(id)_displayNameKeyForUnit:(id)arg1 nameContext:(long long)arg2 ;
-(id)_displayNameKey:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)_longDisplayNameOverrideForDisplayType:(id)arg1 ;
-(id)_longDisplayNameForUnit:(id)arg1 ;
-(id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2 ;
-(void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1 ;
-(id)_generateDefaultHKUnitPreferences;
-(void)_refreshHKUnitPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(id)_lock_updatePreferredUnits:(id)arg1 ;
-(id)_unitDisplayNameKeyForDisplayType:(id)arg1 nameContext:(long long)arg2 ;
-(void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(double)scaleFactorForYAxisLabeling:(id)arg1 ;
@end

