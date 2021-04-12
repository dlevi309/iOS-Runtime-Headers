/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSArray, NSMutableDictionary, HKObserverSet, NSObject;

@interface HDUnitPreferencesManager : NSObject {

	HDProfile* _profile;
	NSArray* _versionedUnitPreferences;
	NSMutableDictionary* _defaultPreferredUnits;
	HKObserverSet* _observers;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(id)domainForVersion:(long long)arg1 ;
-(id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)arg1 ;
-(id)unitPreferencesDictionaryForTypes:(id)arg1 version:(long long)arg2 authorizationServer:(id)arg3 error:(id*)arg4 ;
-(void)_queue_setUnit:(id)arg1 forType:(id)arg2 ;
-(id)_queue_versionedUnitPreferenceDictionaryWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_unitFromValueString:(id)arg1 quantityType:(id)arg2 ;
-(id)_stringFromQuantityType:(id)arg1 ;
-(id)_queue_unitForType:(id)arg1 versionedUnitPreferences:(id)arg2 version:(long long)arg3 ;
-(void)removeUnitPreferenceObserver:(id)arg1 ;
-(id)unitTesting_preferredUnitForType:(id)arg1 error:(id*)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(BOOL)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_doesVersionedUnitPreferences:(id)arg1 containPreferenceForType:(id)arg2 ;
-(void)_persistUnitPreferenceForType:(id)arg1 unitPreferencesVersionToUnit:(id)arg2 ;
-(void)_queue_notifyObserversWithUnitPreferences;
-(void)_queue_updateUnitPreferenceCacheWithUnitPreferencesVersionToUnit:(id)arg1 type:(id)arg2 ;
-(id)_queue_generateUnitPreferencesWithDomain:(id)arg1 error:(id*)arg2 ;
-(id)_authorizationStatusesForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(BOOL)removePreferredUnitForType:(id)arg1 error:(id*)arg2 ;
-(void)_unitPreferencesDidChange;
-(void)unitTesting_resetUnits;
-(id)_queue_generateVersionedUnitPreferencesWithError:(id*)arg1 ;
-(BOOL)_queue_removePreferredUnitForType:(id)arg1 error:(id*)arg2 ;
-(id)_queue_defaultUnitForType:(id)arg1 version:(long long)arg2 ;
-(id)_quantityTypeFromKeyString:(id)arg1 ;
-(void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1 ;
-(void)addUnitPreferenceObserver:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

