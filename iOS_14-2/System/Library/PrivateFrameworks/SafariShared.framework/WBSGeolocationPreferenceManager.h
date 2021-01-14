/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore;              //@synthesize perSitePreferencesStore=_perSitePreferencesStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)preferences;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)setDefaultGeolocationSetting:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)perSitePreferenceValueForGeolocationSetting:(long long)arg1 ;
-(void)_removePermissionsPassingTest:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isDateLessThanOneDayAgo:(id)arg1 ;
-(void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllPermissions;
-(void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDefaultGeolocationSetting:(long long)arg1 ;
-(void)removeAllTemporaryPermissions;
-(void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WBSPerSitePreference *)geolocationPreference;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

