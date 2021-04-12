/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>
#import <libobjc.A.dylib/SUClientDelegate.h>

@class ASDCellularSettings, NSString, SSAuthenticateRequest, NSArray, NSMutableSet, UIAlertController;

@interface StoreSettingsController : PSListController <SSAuthenticateRequestDelegate, SUClientDelegate> {

	ASDCellularSettings* _cellularSettings;
	unsigned long long _accountMatchStatus;
	NSString* _altDSID;
	NSString* _appleID;
	SSAuthenticateRequest* _authenticateRequest;
	NSArray* _automaticDownloadConfigurations;
	BOOL _biometricFaceIDAvailable;
	BOOL _biometricTouchIDAvailable;
	long long _biometricsState;
	char _cellularNetworkingAllowed;
	NSString* _defaultAccountName;
	BOOL _didAuthenticate;
	NSMutableSet* _enabledAutomaticDownloadKinds;
	BOOL _isAuthenticating;
	BOOL _isAuthenticatingSandboxAccount;
	NSString* _password;
	NSMutableSet* _pendingAutomaticDownloadKinds;
	UIAlertController* _sandboxAlertController;
	UIAlertController* _signedInAlertController;
	UIAlertController* _signedOutAlertController;
	BOOL _isLowPowerMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)_isActive;
-(id)_altDSID;
-(id)_password;
-(void)handleURL:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(id)_appleID;
-(void)_setPassword:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(id)_passwordSpecifier;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_signOut;
-(void)_reloadUI;
-(void)_updateNetworkActivityIndicator;
-(void)_accountsChangedNotification:(id)arg1 ;
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)topViewControllerForClient:(id)arg1 ;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(id)_imageForApplicationIdentifier:(id)arg1 ;
-(id)_cellularSettings;
-(id)_bagContext;
-(void)_showPrivacySheet:(id)arg1 ;
-(void)_viewAccount;
-(void)_carrierSettingsChangedNotification:(id)arg1 ;
-(void)_urlBagDidLoadNotification:(id)arg1 ;
-(void)_automaticDownloadKindsChangedNotification:(id)arg1 ;
-(void)_textFieldChangedNotification:(id)arg1 ;
-(void)_reloadAutomaticDownloadConfigurations;
-(void)_destroyAuthenticateRequest;
-(void)_showAccountSheetWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_signIn;
-(BOOL)_isSignedIn;
-(id)_copySignedInSpecifiers;
-(id)_copySignedOutSpecifiers;
-(void)_loadUserSpecificURLBag;
-(id)_activeAutomaticDownloadKinds;
-(void)_reloadForAutomaticDownloadKindsChange;
-(void)_createNewAccount;
-(void)_iForgot;
-(void)_signInUsingAuthKit;
-(void)_reloadForLowPowerModeChange;
-(id)_enabledAutomaticDownloadKinds;
-(void)_setAppleID:(id)arg1 ;
-(id)_automaticDownloadConfigurations;
-(id)_newAutomaticDownloadSpecifierWithConfiguration:(id)arg1 ;
-(BOOL)_shouldShowSpecifierForAutomaticDownloadKinds:(id)arg1 ;
-(id)_newAutomaticUpdatesSpecifier;
-(BOOL)_shouldShowCellularDataSwitch;
-(id)_newCellularDataGroupSpecifier;
-(id)_newCellularDataSwitchSpecifier;
-(id)_newLinkSpecifierWithName:(id)arg1 detailControllerClass:(Class)arg2 ;
-(id)_appStoreCellularDataSettingForSpecifier:(id)arg1 ;
-(void)_buttonActionSandbox:(id)arg1 ;
-(id)_newButtonSpecifierWithName:(id)arg1 action:(SEL)arg2 ;
-(void)_signIntoSandboxAccount:(id)arg1 ;
-(long long)_biometricsState;
-(long long)_biometricsIdentityMapCount;
-(id)_copyAutomaticDownloadSpecifiers;
-(id)_copyCopyCellularDownloadSpecifiers;
-(BOOL)isAutoPlayVideoProhibited;
-(id)_newAppStoreVideoGroupSpecifier;
-(id)_newAppStoreVideoSpecifier;
-(id)_newInAppReviewGroupSpecifier;
-(id)_newInAppReviewSwitchSpecifier;
-(id)_newOffloadUnusedAppsGroupSpecifier;
-(id)_newOffloadUnusedAppsSwitchSpecifier;
-(id)_copySandboxAccountIdentifiers;
-(id)_copyPrivacyLinkSpecifier;
-(void)_signInButton:(id)arg1 ;
-(id)_formattedNetworkLimit;
-(void)_showAccountSheetWithStyle:(long long)arg1 ;
-(id)_automaticDownloadsEnabled:(id)arg1 ;
-(void)_setAutomaticDownloadsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_imageForDownloadKinds:(id)arg1 ;
-(id)_automaticUpdatesEnabled:(id)arg1 ;
-(void)_setAutomaticUpdatesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_newSwitchSpecifierWithName:(id)arg1 ;
-(id)_cellularNetworkEnabled:(id)arg1 ;
-(void)_setCellularNetworkingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_inAppReviewEnabled:(id)arg1 ;
-(void)_setInAppReviewEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)appStoreVideoSettingForSpecifier:(id)arg1 ;
-(id)autoPlayVideoSetting;
-(void)updateAutoPlayVideoDefaultSettingsIfNecessary;
-(id)storeFrontDefaultAutoPlayVideoSetting;
-(id)_offloadUnusedAppsEnabled:(id)arg1 ;
-(void)_setOffloadUnusedApps:(id)arg1 specifier:(id)arg2 ;
-(void)_setDefaultAccountName:(id)arg1 ;
-(BOOL)_shouldShowBooksAutomaticDownloads;
-(BOOL)_isBundleIDHiddenDueToRestrictions:(id)arg1 ;
-(id)_appleIDSpecifier;
-(id)_iTunesMatchFooterSpecifier;
-(void)_reloadAfterAuthenticateEnd;
-(void)_setAltDSID:(id)arg1 ;
-(void)_setShowAllMusicEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setShowAllVideosEnabled:(id)arg1 specifier:(id)arg2 ;
@end

