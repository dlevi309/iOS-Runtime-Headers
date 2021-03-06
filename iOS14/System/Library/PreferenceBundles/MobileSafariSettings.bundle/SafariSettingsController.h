/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class MCProfileConnection, PSSystemPolicyForApp, SafariSettingsFeatureManager, WebBookmarkCollection, NSArray, NSString, DOCDownloadSettings, PSSpecifier;

@interface SafariSettingsController : SafariSettingsListController <MCProfileConnectionObserver> {

	MCProfileConnection* _profileConnection;
	PSSystemPolicyForApp* _systemPolicyForApp;
	SafariSettingsFeatureManager* _featureManager;
	WebBookmarkCollection* _bookmarkCollection;
	NSArray* _contentBlockerExtensions;
	id _contentBlockerMatchingContext;
	BOOL _recentlyClearedHistoryAndWebSiteData;
	NSString* _defaultDownloadsFolderTitle;
	DOCDownloadSettings* _downloadSettings;
	PSSpecifier* _downloadsSettingsSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)suspend;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_bookmarksDidReload:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)_specifiersForPerSitePreferences;
-(id)_specifierForClosingTabsAutomatically;
-(id)_downloadsFolderTitle;
-(void)_updateDownloadsFolderTitle;
-(void)setSearchEngineInSpecifiers:(id)arg1 ;
-(void)_synchronizeNanoUserDefaults;
-(unsigned long long)_enabledContentBlockerCount;
-(void)_setValueForClosingTabsAutomatically:(id)arg1 ;
-(id)_valueForClosingTabsAutomatically;
-(BOOL)_isCloudHistoryEnabled;
-(void)safariClearHistoryAndData;
-(void)_setSafariAcceptCookiesForPolicy:(unsigned long long)arg1 ;
-(void)setCookieStoragePolicy:(unsigned long long)arg1 andNotifySpecifierWithID:(id)arg2 ;
-(void)_updateBlockAllNewWebsiteDataPolicyToBlockAllWebsiteData:(BOOL)arg1 ;
-(void)_confirmBlockAllCookies:(id)arg1 ;
-(void)_cancelBlockAllCookiesPrompt:(id)arg1 ;
-(void)_presentPrivacyFlowWithBundleIdentifier:(id)arg1 ;
-(BOOL)areSiriSuggestionsSupported;
-(void)setIconsInTabEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isFavoritesFolderRestricted:(id)arg1 ;
-(id)favoritesFolderTitle;
-(BOOL)isSafariFraudWarningRestricted:(id)arg1 ;
-(id)isSafariFraudWarningEnabled:(id)arg1 ;
-(void)safariFraudWarningsToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_copyFile:(id)arg1 toFile:(id)arg2 ;
-(void)safariToggleHideFrequentlyVisitedSites:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isTabBarAvailable:(id)arg1 ;
-(void)safariToggleApplePayDisclosureAllowed:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueForAutomaticallyDownloadReadingListItems;
-(void)_setSafariAutomaticallyDownloadReadingListItems:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isOfflineReadingListAvailable:(id)arg1 ;
-(BOOL)isClearHistoryRestricted:(id)arg1 ;
-(void)showClearHistoryAndDataConfirmation:(id)arg1 ;
-(BOOL)isAutoFillAvailable:(id)arg1 ;
-(BOOL)isAutoFillRestricted:(id)arg1 ;
-(id)siteSpecificSearchSettingsEnabledString;
-(BOOL)isBlockPopUpsRestricted:(id)arg1 ;
-(id)isBlockPopUpsEnabled:(id)arg1 ;
-(BOOL)isTrackerProtectionRestricted:(id)arg1 ;
-(id)trackerProtectionEnabled;
-(void)safariToggleTrackerProtection:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isBlockAllNewWebsiteDataRestricted:(id)arg1 ;
-(id)blockAllNewWebsiteDataEnabled;
-(void)safariToggleBlockAllNewWebsiteData:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isContentBlockersAvailable:(id)arg1 ;
-(id)enabledContentBlockerCountString;
-(void)showPrivacyExplanationSheet:(id)arg1 ;
-(void)showSearchExplanationSheet:(id)arg1 ;
@end

