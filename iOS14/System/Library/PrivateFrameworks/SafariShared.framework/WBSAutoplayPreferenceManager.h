/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>

@class WBSPerSitePreferencesSQLiteStore, WBSDomainWhitelistManager, WBSPerSitePreference, NSString;

@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSDomainWhitelistManager* _autoplayWhitelistManager;
	WBSPerSitePreference* _autoplayPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * autoplayPreference;                               //@synthesize autoplayPreference=_autoplayPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)init;
-(id)preferences;
-(void)prepareForTermination;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(WBSPerSitePreference *)autoplayPreference;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 whitelistManager:(id)arg2 ;
-(void)getAutoplayPreferenceValueForDomain:(id)arg1 withTimeout:(double)arg2 fallbackValue:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(void)setAutoplayPreferenceValue:(long long)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
@end

