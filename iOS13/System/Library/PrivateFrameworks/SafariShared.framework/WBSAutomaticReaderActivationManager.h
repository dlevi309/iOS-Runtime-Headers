/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _readerPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * readerPreference;                                 //@synthesize readerPreference=_readerPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)init;
-(id)preferences;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(WBSPerSitePreference *)readerPreference;
-(id)onValueForPreference:(id)arg1 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(id)offValueForPreference:(id)arg1 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getAutomaticReaderEnabledByDefaultUsingBlock:(/*^block*/id)arg1 ;
-(void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
-(void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticReaderEnabled:(BOOL)arg1 forDomain:(id)arg2 ;
-(void)setAutomaticReaderEnabledByDefault:(BOOL)arg1 removingExistingPreferencesForSites:(BOOL)arg2 ;
-(void)submitOptInOutStateForAnalytics;
@end

