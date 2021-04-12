/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSDictionary, NSMutableDictionary, HKObserverSet, NSObject;

@interface HDUnitPreferencesManager : NSObject {

	HDProfile* _profile;
	NSDictionary* _unitPreferences;
	NSMutableDictionary* _defaultPreferredUnits;
	HKObserverSet* _observers;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)_authorizationStatusesForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(id)_queue_unitPreferenceDictionaryWithError:(id*)arg1 ;
-(id)_queue_unitForType:(id)arg1 preferencesDictionary:(id)arg2 ;
-(id)_queue_defaultUnitForType:(id)arg1 ;
-(void)_queue_updateUnitPreferenceCacheWithUnit:(id)arg1 type:(id)arg2 ;
-(void)_persistUnitPreferenceForType:(id)arg1 unit:(id)arg2 ;
-(void)_queue_notifyObserversWithUnitPreferences;
-(id)_queue_generateUnitPreferences:(id*)arg1 ;
-(id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)arg1 ;
-(id)_stringFromQuantityType:(id)arg1 ;
-(id)_quantityTypeFromKeyString:(id)arg1 ;
-(id)_unitFromValueString:(id)arg1 quantityType:(id)arg2 ;
-(id)unitPreferencesDictionaryForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1 ;
-(id)unitTesting_preferredUnitForType:(id)arg1 error:(id*)arg2 ;
-(void)addUnitPreferenceObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeUnitPreferenceObserver:(id)arg1 ;
-(void)_unitPreferencesDidChange;
@end

