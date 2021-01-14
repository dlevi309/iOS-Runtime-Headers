/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AAUISignInControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/SUIKSearchResultsCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/PSTopLevelController.h>

@protocol OS_dispatch_queue;
@class NSString, PSUIClassKitVisibilityArbitrator, PSUIClassroomVisibilityArbitrator, HFHomeSettingsVisibilityArbitrator, VSAccountStore, AIDAServiceOwnersManager, AAUIProfilePictureStore, CNMonogrammer, EAAccessory, PSSpecifier, NSArray, NSDictionary, UIImage, NSSet, ACAccountStore, NSObject, CoreTelephonyClient, FLPreferencesController, PSKeyboardNavigationSearchController, SUIKSearchResultsCollectionViewController, _TtC17WallpaperSettings30WSWallpaperSettingsCoordinator;

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController> {

	NSString* _pendingOffsetItemName;
	BOOL _launchedToTest;
	PSUIClassKitVisibilityArbitrator* _classKitVisibilityArbitrator;
	PSUIClassroomVisibilityArbitrator* _classroomVisibilityArbitrator;
	HFHomeSettingsVisibilityArbitrator* _homeKitVisibilityArbitrator;
	VSAccountStore* _videoSubscriberAccountStore;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AAUIProfilePictureStore* _profilePictureStore;
	CNMonogrammer* _monogrammer;
	BOOL _didFirstLoad;
	EAAccessory* _speakerAccessory;
	PSSpecifier* _eqSpecifier;
	PSSpecifier* _ethernetSpecifier;
	NSArray* _vpnBundleControllers;
	NSArray* _MCUIBundleControllers;
	NSArray* _thirdPartySpecifiers;
	NSDictionary* _movedThirdPartySpecifiers;
	BOOL _initiallyLoadingThirdPartySpecifiers;
	BOOL _refreshingThirdPartySpecifiers;
	PSSpecifier* _notificationsSpecifier;
	PSSpecifier* _wallpaperSpecifier;
	PSSpecifier* _passcodeSpecifier;
	PSSpecifier* _homeScreenSpecifier;
	UIImage* _appleAccountSpecifierCachedIcon;
	PSSpecifier* _appleAccountSpecifier;
	PSSpecifier* _videoSubscriberGroupSpecifier;
	PSSpecifier* _videoSubscriberSpecifier;
	PSSpecifier* _messagesSpecifier;
	PSSpecifier* _faceTimeSpecifier;
	PSSpecifier* _gameCenterSpecifier;
	PSSpecifier* _siriSpecifier;
	PSSpecifier* _tvSpecifier;
	PSSpecifier* _carrierSelectionSpecifier;
	PSSpecifier* _personalHotspotSpecifier;
	PSSpecifier* _classKitSpecifier;
	PSSpecifier* _classroomSpecifier;
	PSSpecifier* _homeKitSpecifier;
	PSSpecifier* _healthKitSpecifier;
	PSSpecifier* _emergencySOSSpecifier;
	PSSpecifier* _exposureNotificationSpecifier;
	PSSpecifier* _applePencilSpecifier;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	NSArray* _originalSpecifiers;
	NSSet* _originalDisplayIdentifiers;
	PSSpecifier* _selectedSpecifier;
	ACAccountStore* _accountStore;
	PSSpecifier* _specifierToSelect;
	NSObject*<OS_dispatch_queue> _loadAllSpecifiersQueue;
	NSObject*<OS_dispatch_queue> _spyglassUpdateQueue;
	CoreTelephonyClient* _coreTelephonyClient;
	BOOL skipSelectingDefaultCategoryOnLaunch;
	BOOL _deferredURLLoadForThirdPartyApp;
	BOOL __cellularDataSettingInitialized;
	BOOL __cellularDataSetting;
	NSString* _bluetoothString;
	NSArray* _followupSpecifiers;
	FLPreferencesController* _followupController;
	PSKeyboardNavigationSearchController* _spotlightSearchController;
	SUIKSearchResultsCollectionViewController* _searchResultsController;
	NSString* _wifiString;
	CTServerConnectionRef __ctConnection;
	_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator* _wallpaperCoordinator;
	NSString* _spotlightSearchTerm;

}

@property (nonatomic,copy) NSString * bluetoothString;                                                                    //@synthesize bluetoothString=_bluetoothString - In the implementation block
@property (nonatomic,retain) NSArray * followupSpecifiers;                                                                //@synthesize followupSpecifiers=_followupSpecifiers - In the implementation block
@property (nonatomic,retain) FLPreferencesController * followupController;                                                //@synthesize followupController=_followupController - In the implementation block
@property (nonatomic,retain) PSKeyboardNavigationSearchController * spotlightSearchController;                            //@synthesize spotlightSearchController=_spotlightSearchController - In the implementation block
@property (nonatomic,retain) SUIKSearchResultsCollectionViewController * searchResultsController;                         //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,copy) NSString * wifiString;                                                                         //@synthesize wifiString=_wifiString - In the implementation block
@property (assign,nonatomic) BOOL deferredURLLoadForThirdPartyApp;                                                        //@synthesize deferredURLLoadForThirdPartyApp=_deferredURLLoadForThirdPartyApp - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSettingInitialized;                                                        //@synthesize _cellularDataSettingInitialized=__cellularDataSettingInitialized - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSetting;                                                                   //@synthesize _cellularDataSetting=__cellularDataSetting - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctConnection;                                                         //@synthesize _ctConnection=__ctConnection - In the implementation block
@property (nonatomic,retain) _TtC17WallpaperSettings30WSWallpaperSettingsCoordinator * wallpaperCoordinator;              //@synthesize wallpaperCoordinator=_wallpaperCoordinator - In the implementation block
@property (nonatomic,retain) NSString * spotlightSearchTerm;                                                              //@synthesize spotlightSearchTerm=_spotlightSearchTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch; 
+(BOOL)airplaneMode;
+(void)setAirplaneMode:(BOOL)arg1 ;
+(id)radiosPreferences;
-(void)willBecomeActive;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)bundle;
-(BOOL)isAppClipsAllowed;
-(id)getTetheringStatus:(id)arg1 ;
-(void)dismissPopover;
-(void)refresh3rdPartyBundles;
-(void)_setupAppleAccountSpecifier:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)suspend;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)showPINSheet:(id)arg1 ;
-(id)specifiers;
-(id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3 searchPlist:(id)arg4 ;
-(id)_silhouetteMonogramIcon;
-(void)_handleOnsiteProfileInstallation;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setAirplaneMode:(BOOL)arg1 ;
-(SUIKSearchResultsCollectionViewController *)searchResultsController;
-(id)keyCommands;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(id)init;
-(void)selectDefaultCategoryForced:(BOOL)arg1 ;
-(void)_showDetailTargetDidChange:(id)arg1 ;
-(id)searchResultsCollectionViewController:(id)arg1 iconForCategory:(id)arg2 ;
-(id)_accountStore;
-(void)selectDefaultCategoryForced:(BOOL)arg1 showController:(BOOL)arg2 ;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(void)setSearchResultsController:(SUIKSearchResultsCollectionViewController *)arg1 ;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_localeChanged;
-(void)_loadThirdPartySpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)configurePasscodeSpecifierFromSpecifiers:(id)arg1 ;
-(void)updateClassKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpotlightSearchTerm:(NSString *)arg1 ;
-(void)setBluetoothString:(NSString *)arg1 ;
-(void)updatePersonalHotspot;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)_cellularDataSettingInitialized;
-(void)updateResearchDeviceTextWithCompletion:(/*^block*/id)arg1 ;
-(long long)navigationItemLargeTitleDisplayMode;
-(void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 shouldAddAppClipSpecifier:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_profilePictureStore;
-(BOOL)skipSelectingDefaultCategoryOnLaunch;
-(void)bluetoothPowerChanged:(id)arg1 ;
-(void)checkDeveloperSettingsState;
-(void)willEnterForeground;
-(void)indexThirdPartyAppsAndManifests;
-(void)updateEthernetWithCompletion:(/*^block*/id)arg1 ;
-(void)setFollowupSpecifiers:(NSArray *)arg1 ;
-(void)iconChangedForBundleID:(id)arg1 ;
-(BOOL)shouldShowFaceID;
-(void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)categoryController;
-(void)airplaneModeChanged;
-(void)updateClassroomSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(id)selectSpecifier:(id)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(void)_delayedSpotlightSearch;
-(void)displayIdentifiersChanged;
-(void)NETRBStateChangedNotification:(id)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2 ;
-(void)lazyLoadSpecialBundleForSpecifier:(id)arg1 ;
-(void)setSpotlightSearchController:(PSKeyboardNavigationSearchController *)arg1 ;
-(void)_setupCachedAppleAccountSpecifier:(id)arg1 ;
-(void)_videoSubscriberAccountStoreDidChange:(id)arg1 ;
-(void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2 ;
-(void)_beginObservingProfilePictureStoreDidChangeNotification;
-(id)videoSubscriberAccountValue:(id)arg1 ;
-(void)setDeferredURLLoadForThirdPartyApp:(BOOL)arg1 ;
-(void)updateHomeKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVideoSubscriberAccountWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_cellularDataSetting;
-(FLPreferencesController *)followupController;
-(void)appleAccountsDidChange;
-(void)reloadSpecifiers;
-(void)_configureImageViewForRow:(id)arg1 ;
-(void)setAirplaneMode:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)indexManifests;
-(void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(/*^block*/id)arg1 ;
-(id)identifierForSelectedIndex;
-(void)fetchCellularDataEnabled;
-(void)signInControllerDidCancel:(id)arg1 ;
-(BOOL)_removeCachedAppleAccountIcon;
-(BOOL)_shouldPresentModernThirdPartyAppListForBundleIdentifier:(id)arg1 ;
-(BOOL)_allowsBorderForCell:(id)arg1 ;
-(void)NETRBStateChangedNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_upArrowKeyPressed;
-(id)specifierForBundle:(id)arg1 ;
-(void)_setupAppleAccountSpecifierForLogin:(id)arg1 ;
-(void)bluetoothValueFetch:(id)arg1 ;
-(void)updateEthernet;
-(BOOL)deviceSupportsApplePay;
-(void)clearCache;
-(BOOL)_exposureNotificationAvailable;
-(void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1 ;
-(void)_presentAppleAccountSignInController:(id)arg1 ;
-(void)configureTopLevelSpecifier:(id)arg1 ;
-(void)confirmationSpecifierCancelled:(id)arg1 ;
-(BOOL)shouldShowSimulatorSettings;
-(id)phoneStatusForSpecifier:(id)arg1 ;
-(long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2 ;
-(void)showSecurityResearchDeviceInfo;
-(BOOL)shouldShowClassroomSpecifier;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(NSString *)wifiString;
-(id)wifiNetwork:(id)arg1 ;
-(void)continueSearchInSettingsWithTerm:(id)arg1 ;
-(NSString *)spotlightSearchTerm;
-(void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1 ;
-(void)insertOrderedSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(BOOL)_canSelectSpecifierAtIndexPath:(id)arg1 ;
-(void)set_cellularDataSetting:(BOOL)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(long long)searchResultsCollectionViewController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3 ;
-(id)getAllSpecifiers;
-(void)setWifiString:(NSString *)arg1 ;
-(void)rerootNavigationController;
-(void)updateRestrictedSettings;
-(BOOL)deferredURLLoadForThirdPartyApp;
-(void)updateSupervisedTextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2 ;
-(void)updateFollowupSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountSpecifiers;
-(void)updateWifi;
-(id)appleAccountIconLocalCacheURL;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator *)wallpaperCoordinator;
-(void)didCancelEnteringPIN;
-(NSString *)bluetoothString;
-(BOOL)_showSOS;
-(BOOL)searchResultsCollectionViewController:(id)arg1 shouldShowCategory:(id)arg2 ;
-(CTServerConnectionRef)_ctConnection;
-(void)_saveIconToCacheForAppleAccountSpecifier:(id)arg1 ;
-(void)set_ctConnection:(CTServerConnectionRef)arg1 ;
-(void)showDeviceSupervisionInfo;
-(NSArray *)followupSpecifiers;
-(void)setupPrimaryAppleAccountGroup:(id)arg1 ;
-(void)insertMovedThirdPartySpecifiersAnimated:(BOOL)arg1 ;
-(id)bluetoothValue:(id)arg1 ;
-(void)updateSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)loadView;
-(void)_setupAppleAccountSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_cachedIconForAppleAccountSpecifier;
-(void)_downArrowKeyPressed;
-(void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1 ;
-(void)didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSpyglassWithCompletion:(/*^block*/id)arg1 ;
-(id)getAirplaneMode:(id)arg1 ;
-(void)set_cellularDataSettingInitialized:(BOOL)arg1 ;
-(id)cellularDataStatusForSpecifier:(id)arg1 ;
-(BOOL)shouldShowTouchID;
-(void)profilePictureDidChange;
-(void)setFollowupController:(FLPreferencesController *)arg1 ;
-(id)_serviceOwnersManager;
-(void)willDismissSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowClassKitSpecifier;
-(long long)tableViewStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_newCarrierNotification;
-(BOOL)shouldShowApplePencilSpecifier;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2 ;
-(BOOL)isCellularDataEnabled;
-(id)generalViewController;
-(id)_sidebarSpecifierForCategoryController;
-(void)_tabKeyPressed;
-(void)testSpecifierCountAfterBlock:(/*^block*/id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)iMessageSupportMayHaveChanged;
-(void)updateExposureNotificationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)handlePendingURL;
-(void)setupDaemonsIfNeeded;
-(BOOL)shouldShowEthernetSpecifier;
-(void)popToRoot;
-(void)configureApplePencilSpecifier;
-(void)searchResultsCollectionViewController:(id)arg1 didSelectURL:(id)arg2 ;
-(void)setWallpaperCoordinator:(_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator *)arg1 ;
-(PSKeyboardNavigationSearchController *)spotlightSearchController;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)loadPPTTestSpecifiers:(int)arg1 ;
-(void)setSkipSelectingDefaultCategoryOnLaunch:(BOOL)arg1 ;
-(void)updateVPNWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)wifiGetCurrentWiFiNetwork;
-(void)selectDefaultCategory;
-(id)passbookSpecifier;
-(id)_primarySpecifierOrdering;
-(void)reloadCellularRelatedSpecifiers;
-(void)updateApplePayWithCompletion:(/*^block*/id)arg1 ;
-(void)asyncSpecifiersFirstLoad;
@end

