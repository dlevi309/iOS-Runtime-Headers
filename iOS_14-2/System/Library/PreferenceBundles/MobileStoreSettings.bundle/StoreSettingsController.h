/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AMSUIWebDelegate.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>
#import <libobjc.A.dylib/SUClientDelegate.h>

@class ASDCellularSettings, NSString, NSArray, NSMutableSet, UIAlertController;

@interface StoreSettingsController : PSListController <AMSUIWebDelegate, SSAuthenticateRequestDelegate, SUClientDelegate> {

	ASDCellularSettings* _cellularSettings;
	unsigned long long _accountMatchStatus;
	NSString* _altDSID;
	NSString* _appleID;
	NSArray* _automaticDownloadConfigurations;
	BOOL _biometricFaceIDAvailable;
	BOOL _biometricTouchIDAvailable;
	long long _biometricsState;
	char _cellularNetworkingAllowed;
	NSString* _defaultAccountName;
	BOOL _didAuthenticate;
	NSMutableSet* _enabledAutomaticDownloadKinds;
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
+(BOOL)_isRunningSandboxAuthentication;
+(BOOL)_isRunningAuthentication;
+(void)_setIsRunningAuthentication:(BOOL)arg1 ;
+(void)_setIsRunningSandboxAuthentication:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_isActive;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(id)_password;
-(id)init;
-(id)_passwordSpecifier;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(void)_setPassword:(id)arg1 ;
-(id)_altDSID;
-(id)_appleID;
-(id)_cellularSettings;
-(void)loadView;
-(void)_signIn;
-(void)returnPressedAtEnd;
-(void)_signOut;
-(void)dealloc;
-(void)_updateNetworkActivityIndicator;
-(void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showPrivacySheet:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadUI;
-(void)_accountsChangedNotification:(id)arg1 ;
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)topViewControllerForClient:(id)arg1 ;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_viewAccount;
-(id)_imageForApplicationIdentifier:(id)arg1 ;
-(id)_bagContext;
-(void)_carrierSettingsChangedNotification:(id)arg1 ;
-(void)_urlBagDidLoadNotification:(id)arg1 ;
-(void)_automaticDownloadKindsChangedNotification:(id)arg1 ;
-(void)_textFieldChangedNotification:(id)arg1 ;
-(void)_reloadAutomaticDownloadConfigurations;
-(void)_showAccountSheetWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isSignedIn;
-(id)_copySignedInSpecifiers;
-(id)_copySignedOutSpecifiers;
-(void)_loadUserSpecificURLBag;
-(id)_activeAutomaticDownloadKinds;
-(void)_reloadForAutomaticDownloadKindsChange;
-(void)_createNewAccount;
-(void)_iForgot;
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
-(id)_formattedNetworkLimit;
-(void)_showAccountSheetWithStyle:(long long)arg1 ;
-(id)_automaticDownloadsEnabled:(id)arg1 ;
-(void)_setAutomaticDownloadsEnabled:(id)arg1 specifier:(id)arg2 ;
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
-(id)_appleIDSpecifier;
-(long long)_biometricsIdentityMapCount;
-(long long)_biometricsState;
-(id)_imageForDownloadKinds:(id)arg1 ;
-(id)_iTunesMatchFooterSpecifier;
-(void)_setAltDSID:(id)arg1 ;
-(void)_setShowAllMusicEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setShowAllVideosEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_isBundleIDHiddenDueToRestrictions:(id)arg1 ;
@end

