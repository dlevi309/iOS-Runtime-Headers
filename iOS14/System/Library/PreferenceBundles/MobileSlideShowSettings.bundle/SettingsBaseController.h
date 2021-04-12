/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/CPLDiagnoseServiceClientProtocol.h>
#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>

@class PSSpecifier, NSArray, UIProgressHUD, NSXPCConnection, PSCloudStorageOffersManager, CPLStatus, PHPhotoLibrary, NSString;

@interface SettingsBaseController : PSListController <PSCloudStorageOffersManagerDelegate, CPLStatusDelegate, CPLDiagnoseServiceClientProtocol, PHPhotoLibraryAvailabilityObserver> {

	PSSpecifier* _iCloudPhotosSwitchSpecifier;
	NSArray* _allCloudPhotosSpecifiers;
	NSArray* _iCloudPhotoLibraryConditionalSpecifiers;
	NSArray* _photoStreamAvalancheSpecifiers;
	UIProgressHUD* _displayedSpinner;
	BOOL _cloudPhotosEnabled;
	BOOL _avalancheAllowed;
	BOOL _accountModificationAllowed;
	unsigned _photoStreamEnabled : 1;
	unsigned _sharedStreamsEnabled : 1;
	unsigned _shownFromAccountSettings : 1;
	NSXPCConnection* _diagnoseServiceConnection;
	PSCloudStorageOffersManager* _offersManager;
	BOOL _requireStorageUpgradeForCPL;
	CPLStatus* _cplStatus;
	BOOL _isCPLInExitMode;
	PHPhotoLibrary* _systemPhotoLibrary;

}

@property (assign,nonatomic) long long transferBehaviorUserPreference; 
@property (nonatomic,readonly) unsigned long long systemPolicyOptions; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPhotoStreamsEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoStreamsEnabledFromBuddyWorkflow:(id)arg1 ;
+(BOOL)shouldOfferHyperionInBuddy;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)statusDidChange:(id)arg1 ;
-(id)specifiers;
-(id)systemPhotoLibrary;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)reloadSpecifiers;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)_continueWithoutStoragePurchase:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_personID;
-(BOOL)_isAppleInternal;
-(long long)transferBehaviorUserPreference;
-(void)setTransferBehaviorUserPreference:(long long)arg1 ;
-(BOOL)_shownFromAccountSettings;
-(void)diagnosticServiceStateDidChange:(char)arg1 outputURL:(id)arg2 error:(id)arg3 ;
-(BOOL)_useInternalDiagnostics;
-(id)tapToRadarURL;
-(BOOL)_shouldHideCPL;
-(void)photoStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)photoStreamEnabled:(id)arg1 ;
-(id)sharedStreamsEnabled:(id)arg1 ;
-(void)sharedStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)cloudPhotosEnabled:(id)arg1 ;
-(void)cloudPhotosEnableWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)diagnoseServiceConnection;
-(void)generateCPLDiagnose:(id)arg1 ;
-(void)updateDiagnoseButtonName:(id)arg1 enabled:(BOOL)arg2 ;
-(void)keepOriginals:(id)arg1 ;
-(void)optimizeStorage:(id)arg1 ;
-(void)selectAutomaticTransferBehavior:(id)arg1 ;
-(void)selectKeepOriginalsTransferBehavior:(id)arg1 ;
-(id)uploadBurstPhotos:(id)arg1 ;
-(void)uploadBurstPhotosSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)videoAutoplayEnabled:(id)arg1 ;
-(void)_setPhotoStreamEnabled:(BOOL)arg1 ;
-(void)_setSharedStreamsEnabled:(BOOL)arg1 ;
-(void)_saveUserAccount;
-(void)_setDisplayedSpinner:(id)arg1 ;
-(void)_hideDisplayedSpinner;
-(id)_showSpinnerWithText:(id)arg1 ;
-(void)_showSpinnerForDuration:(double)arg1 withText:(id)arg2 ;
-(BOOL)_photoStreamAssetsWillBeDeletedIfTurnedOff;
-(BOOL)_sharedStreamsAssetsWillBeDeletedIfTurnedOff;
-(id)_initializeSpecifiers;
-(void)_filterImageModulationSpecifiers:(id)arg1 ;
-(void)_updateTransferRadioGroupWithSpecifiers:(id)arg1 ;
-(id)_removeNonPhotoStreamOrCloudPhotosSettingFromSpecifier:(id)arg1 ;
-(id)_fetchBlacklistedMemoryFeatures;
-(void)_removeResetBlacklistedMemoryButton;
-(void)resetBlacklistedMemoryFeatures;
-(void)_beginCloudPhotosDisableFlow;
-(void)_confirmCloudPhotosDisableWhilePrunedWithNonLocalResourceInfo:(id)arg1 ;
-(void)_confirmDeletePrunedResourcesWithNonLocalResourceInfo:(id)arg1 ;
-(void)_enableKeepOriginalsWithNonLocalResourceInfo:(id)arg1 ;
-(void)_confirmCloudPhotosDisableWithSyncInProgress;
-(void)_confirmCloudPhotosDisableWithNonLocalResourceInfo:(id)arg1 ;
-(void)_cancelDisableCloudPhotos;
-(void)_showManageStorage;
-(id)_nonLocalResourceInfo;
-(void)_confirmWithTitle:(id)arg1 message:(id)arg2 confirmationButtonTitle:(id)arg3 cancelButtonTtle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updatePhotoStreamSwitchEnabled;
-(void)_updatePhotoStreamSwitchNameAnimated:(BOOL)arg1 ;
-(id)_photoStreamSwitchName;
-(void)_updatePauseUnpauseButtonNameForSpecifiers:(id)arg1 ;
-(BOOL)_avalancheUploadOnlyPicks;
-(void)_updateAvalancheFooterTextAnimated:(BOOL)arg1 ;
-(void)_enableCloudPhotosIgnoringStorageLimits:(BOOL)arg1 ;
-(void)_showStorageOptions;
-(void)_disableCloudPhotos;
-(void)_updateCloudPhotoFooterTextAnimated:(BOOL)arg1 ;
-(void)_updateKeepOriginalsFooterTextAnimated:(BOOL)arg1 ;
-(id)_CPLSwitchFooterText;
-(id)_CPLStorageFooterText;
-(id)_uploadBurstFooterText;
-(unsigned long long)systemPolicyOptions;
@end

