/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, _SFRequestDesktopSiteQuirksManager, NSMutableSet, WBSPerSitePreference, NSString;

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	_SFRequestDesktopSiteQuirksManager* _quirksManager;
	NSMutableSet* _observers;
	BOOL _clientPrefersMobileUserAgentByDefault;
	WBSPerSitePreference* _requestDesktopSitePreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * requestDesktopSitePreference;                     //@synthesize requestDesktopSitePreference=_requestDesktopSitePreference - In the implementation block
@property (assign,nonatomic) BOOL clientPrefersMobileUserAgentByDefault;                                //@synthesize clientPrefersMobileUserAgentByDefault=_clientPrefersMobileUserAgentByDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getRequestDesktopSitePreferenceForDomain:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)onValueForPreference:(id)arg1 ;
-(void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
-(id)init;
-(id)preferences;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg1 ;
-(void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
-(void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
-(id)offValueForPreference:(id)arg1 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)getAllRequestDesktopSitePerSitePreferenceValues:(/*^block*/id)arg1 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(BOOL)clientPrefersMobileUserAgentByDefault;
-(void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
-(WBSPerSitePreference *)requestDesktopSitePreference;
-(void)setClientPrefersMobileUserAgentByDefault:(BOOL)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 quirksManager:(id)arg2 ;
-(void)dealloc;
-(long long)_defaultPreferenceValue;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

