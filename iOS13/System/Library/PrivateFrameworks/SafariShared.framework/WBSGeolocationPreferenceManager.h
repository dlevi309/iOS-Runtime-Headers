/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _geolocationPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * geolocationPreference;                            //@synthesize geolocationPreference=_geolocationPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore;              //@synthesize perSitePreferencesStore=_perSitePreferencesStore - In the implementation block
-(id)preferences;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(WBSPerSitePreference *)geolocationPreference;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)perSitePreferenceValueForGeolocationSetting:(long long)arg1 ;
-(void)_removePermissionsPassingTest:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isDateLessThanOneDayAgo:(id)arg1 ;
-(void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDefaultGeolocationSetting:(long long)arg1 ;
-(void)removeAllTemporaryPermissions;
-(void)removeAllPermissions;
-(void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

