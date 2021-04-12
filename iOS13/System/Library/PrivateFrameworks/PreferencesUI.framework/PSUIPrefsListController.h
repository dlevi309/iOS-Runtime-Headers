/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@class NSString, PSUIClassKitVisibilityArbitrator, PSUIClassroomVisibilityArbitrator, HFHomeSettingsVisibilityArbitrator, VSAccountStore, AIDAServiceOwnersManager, AAUIProfilePictureStore, CNMonogrammer, EAAccessory, PSSpecifier, NSArray, NSDictionary, UIImage, NSSet, ACAccountStore, NSObject, CoreTelephonyClient, FLPreferencesController, PSKeyboardNavigationSearchController, SUIKSearchResultsCollectionViewController;

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
	PSSpecifier* _applePencilSpecifier;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	NSArray* _originalSpecifiers;
	NSSet* _originalDisplayIdentifiers;
	PSSpecifier* _selectedSpecifier;
	ACAccountStore* _accountStore;
	IOHIDManagerRef _hidManager;
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

}

@property (nonatomic,copy) NSString * bluetoothString;                                                         //@synthesize bluetoothString=_bluetoothString - In the implementation block
@property (nonatomic,retain) NSArray * followupSpecifiers;                                                     //@synthesize followupSpecifiers=_followupSpecifiers - In the implementation block
@property (nonatomic,retain) FLPreferencesController * followupController;                                     //@synthesize followupController=_followupController - In the implementation block
@property (nonatomic,retain) PSKeyboardNavigationSearchController * spotlightSearchController;                 //@synthesize spotlightSearchController=_spotlightSearchController - In the implementation block
@property (nonatomic,retain) SUIKSearchResultsCollectionViewController * searchResultsController;              //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,copy) NSString * wifiString;                                                              //@synthesize wifiString=_wifiString - In the implementation block
@property (assign,nonatomic) BOOL deferredURLLoadForThirdPartyApp;                                             //@synthesize deferredURLLoadForThirdPartyApp=_deferredURLLoadForThirdPartyApp - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSettingInitialized;                                             //@synthesize _cellularDataSettingInitialized=__cellularDataSettingInitialized - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSetting;                                                        //@synthesize _cellularDataSetting=__cellularDataSetting - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctConnection;                                              //@synthesize _ctConnection=__ctConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch; 
+(BOOL)airplaneMode;
+(void)setAirplaneMode:(BOOL)arg1 ;
+(id)radiosPreferences;
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)suspend;
-(id)bundle;
-(void)airplaneModeChanged;
-(id)_accountStore;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)willBecomeActive;
-(void)willEnterForeground;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SUIKSearchResultsCollectionViewController *)searchResultsController;
-(id)keyCommands;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(BOOL)isCellularDataEnabled;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)dismissPopover;
-(id)specifiers;
-(void)reloadSpecifiers;
-(id)selectSpecifier:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(BOOL)handlePendingURL;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)showPINSheet:(id)arg1 ;
-(long long)navigationItemLargeTitleDisplayMode;
-(id)categoryController;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(id)specifierForBundle:(id)arg1 ;
-(void)setSkipSelectingDefaultCategoryOnLaunch:(BOOL)arg1 ;
-(void)selectDefaultCategoryForced:(BOOL)arg1 ;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)setSearchResultsController:(SUIKSearchResultsCollectionViewController *)arg1 ;
-(id)searchResultsCollectionViewController:(id)arg1 iconForCategory:(id)arg2 ;
-(void)searchResultsCollectionViewController:(id)arg1 didSelectURL:(id)arg2 ;
-(BOOL)searchResultsCollectionViewController:(id)arg1 shouldShowCategory:(id)arg2 ;
-(long long)searchResultsCollectionViewController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3 ;
-(void)_localeChanged;
-(id)_serviceOwnersManager;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)signInControllerDidCancel:(id)arg1 ;
-(void)lazyLoadSpecialBundleForSpecifier:(id)arg1 ;
-(id)_profilePictureStore;
-(CTServerConnectionRef)_ctConnection;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVPNWithCompletion:(/*^block*/id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)fetchCellularDataEnabled;
-(BOOL)_cellularDataSetting;
-(BOOL)_cellularDataSettingInitialized;
-(void)insertOrderedSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToRoot;
-(id)_primarySpecifierOrdering;
-(long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2 ;
-(void)_newCarrierNotification;
-(void)rerootNavigationController;
-(void)updateRestrictedSettings;
-(void)updateWifi;
-(void)updateEthernet;
-(void)NETRBStateChangedNotification:(id)arg1 ;
-(void)iMessageSupportMayHaveChanged;
-(void)_showDetailTargetDidChange:(id)arg1 ;
-(void)bluetoothPowerChanged:(id)arg1 ;
-(void)asyncSpecifiersFirstLoad;
-(void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1 ;
-(void)updateClassroomSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)set_cellularDataSettingInitialized:(BOOL)arg1 ;
-(void)reloadCellularRelatedSpecifiers;
-(void)removeApplePencilListener;
-(void)selectDefaultCategoryForced:(BOOL)arg1 showController:(BOOL)arg2 ;
-(void)displayIdentifiersChanged;
-(void)updateHomeKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)updateClassKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)updateFollowupSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpotlightSearchController:(PSKeyboardNavigationSearchController *)arg1 ;
-(PSKeyboardNavigationSearchController *)spotlightSearchController;
-(BOOL)_showSOS;
-(BOOL)deviceSupportsApplePay;
-(void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(/*^block*/id)arg1 ;
-(void)setupDaemonsIfNeeded;
-(void)updateEthernetWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpyglassWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVideoSubscriberAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)updateApplePayWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSupervisedTextWithCompletion:(/*^block*/id)arg1 ;
-(void)updateApplePencilWithCompletion:(/*^block*/id)arg1 ;
-(void)insertMovedThirdPartySpecifiersAnimated:(BOOL)arg1 ;
-(BOOL)deferredURLLoadForThirdPartyApp;
-(void)setDeferredURLLoadForThirdPartyApp:(BOOL)arg1 ;
-(void)indexThirdPartyAppsAndManifests;
-(void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)configureTopLevelSpecifier:(id)arg1 ;
-(void)_configureImageViewForRow:(id)arg1 ;
-(id)identifierForSelectedIndex;
-(void)didSelectRowAtIndexPath:(id)arg1 ;
-(id)_sidebarSpecifierForCategoryController;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(void)selectDefaultCategory;
-(void)_loadThirdPartySpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)refresh3rdPartyBundles;
-(void)updateAccountSpecifiers;
-(BOOL)shouldShowClassKitSpecifier;
-(BOOL)shouldShowClassroomSpecifier;
-(BOOL)shouldShowApplePencilSpecifier;
-(void)configureApplePencilSpecifier;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2 ;
-(id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3 searchPlist:(id)arg4 ;
-(void)_setupCachedAppleAccountSpecifier:(id)arg1 ;
-(id)passbookSpecifier;
-(void)updatePersonalHotspot;
-(id)configurePasscodeSpecifierFromSpecifiers:(id)arg1 ;
-(void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)skipSelectingDefaultCategoryOnLaunch;
-(void)checkDeveloperSettingsState;
-(void)setWifiString:(NSString *)arg1 ;
-(void)wifiGetCurrentWiFiNetwork;
-(NSString *)wifiString;
-(BOOL)shouldShowEthernetSpecifier;
-(void)NETRBStateChangedNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)appleAccountIconLocalCacheURL;
-(void)_setupAppleAccountSpecifier:(id)arg1 ;
-(void)_setupAppleAccountSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentAppleAccountSignInController:(id)arg1 ;
-(id)_silhouetteMonogramIcon;
-(id)_cachedIconForAppleAccountSpecifier;
-(void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2 ;
-(void)_setupAppleAccountSpecifierForLogin:(id)arg1 ;
-(void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1 ;
-(void)_saveIconToCacheForAppleAccountSpecifier:(id)arg1 ;
-(BOOL)_removeCachedAppleAccountIcon;
-(void)_beginObservingProfilePictureStoreDidChangeNotification;
-(void)appleAccountsDidChange;
-(void)profilePictureDidChange;
-(void)_setAirplaneMode:(BOOL)arg1 ;
-(void)setBluetoothString:(NSString *)arg1 ;
-(void)bluetoothValueFetch:(id)arg1 ;
-(NSString *)bluetoothString;
-(BOOL)shouldShowTouchID;
-(BOOL)shouldShowFaceID;
-(void)_handleOnsiteProfileInstallation;
-(void)_videoSubscriberAccountStoreDidChange:(id)arg1 ;
-(void)indexManifests;
-(void)_tabKeyPressed;
-(BOOL)_canSelectSpecifierAtIndexPath:(id)arg1 ;
-(void)set_cellularDataSetting:(BOOL)arg1 ;
-(void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2 ;
-(id)generalViewController;
-(void)testSpecifierCountAfterBlock:(/*^block*/id)arg1 ;
-(void)iconChangedForBundleID:(id)arg1 ;
-(void)showDeviceSupervisionInfo;
-(BOOL)shouldShowSimulatorSettings;
-(void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1 ;
-(void)loadPPTTestSpecifiers:(int)arg1 ;
-(id)getAllSpecifiers;
-(id)wifiNetwork:(id)arg1 ;
-(void)setupPrimaryAppleAccountGroup:(id)arg1 ;
-(void)setAirplaneMode:(id)arg1 specifier:(id)arg2 ;
-(void)confirmationSpecifierCancelled:(id)arg1 ;
-(id)getAirplaneMode:(id)arg1 ;
-(id)phoneStatusForSpecifier:(id)arg1 ;
-(id)cellularDataStatusForSpecifier:(id)arg1 ;
-(id)bluetoothValue:(id)arg1 ;
-(id)videoSubscriberAccountValue:(id)arg1 ;
-(NSArray *)followupSpecifiers;
-(void)setFollowupSpecifiers:(NSArray *)arg1 ;
-(FLPreferencesController *)followupController;
-(void)setFollowupController:(FLPreferencesController *)arg1 ;
-(void)set_ctConnection:(CTServerConnectionRef)arg1 ;
@end

