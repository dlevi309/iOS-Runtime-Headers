/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/BYClientDaemonCloudSyncProtocol.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>

@protocol BSInvalidatable;
@class PSSpecifier, NSString, MBManager, BYBuddyDaemonCloudSyncClient, UIAlertController, UILabel, UIProgressView, NSDateComponentsFormatter, NSNumberFormatter, PSGBackupDisabledAppsInfo;

@interface PSGResetPrefController : PSListController <BYClientDaemonCloudSyncProtocol, MBManagerDelegate, SBSHardwareButtonEventConsuming> {

	BOOL _requireRestrictionsCode;
	BOOL _requirePasscode;
	BOOL _returningFromPINSheetWithSuccess;
	BOOL _shouldEraseWithFMiP;
	BOOL _shouldTryEraseAgainWithFMiP;
	BOOL _shouldEraseCellularPlans;
	int _codesNeeded;
	int _codesEntered;
	PSSpecifier* _currentSpecifier;
	PSSpecifier* _locationSpecifier;
	long long _locationSpecifierIndex;
	NSString* _passcode;
	BOOL _shouldSkipCloudStatusCheck;
	BOOL _didFailSync;
	BOOL _didFailBackup;
	MBManager* _backupManager;
	BYBuddyDaemonCloudSyncClient* _cloudSyncClient;
	id<BSInvalidatable> _homeButtonEventConsumerToken;
	UIAlertController* _cloudProgressAlertController;
	UILabel* _cloudProgressAlertLabel;
	UIProgressView* _cloudProgressView;
	NSDateComponentsFormatter* _durationFormatter;
	NSNumberFormatter* _percentFormatter;
	double _cloudBackupProgress;
	double _cloudSyncProgress;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	BOOL _isOnPower;
	PSGBackupDisabledAppsInfo* _backupDisabledAppsInfo;
	BOOL _isFetchingDomainInfo;
	BOOL _needToShowPopupAlertForBackup;
	BOOL _shouldSkipBasebandStatusCheck;

}

@property (assign,nonatomic) BOOL shouldSkipBasebandStatusCheck;              //@synthesize shouldSkipBasebandStatusCheck=_shouldSkipBasebandStatusCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1 ;
-(id)specifiers;
-(void)popupViewDidDisappear;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)didAppear;
-(void)profileNotification:(id)arg1 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 ;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(BOOL)_networkConnectivityAvailable;
-(void)locatorStateDidChange:(id)arg1 ;
-(void)updateLocationResetSpecifier;
-(void)prepareAlertForBackupDisabledDomainAndShow:(BOOL)arg1 ;
-(void)configureSpin:(BOOL)arg1 ofCellForSpecifier:(id)arg2 setEnabled:(BOOL)arg3 ;
-(BOOL)shouldSkipBasebandStatusCheck;
-(void)setShouldSkipBasebandStatusCheck:(BOOL)arg1 ;
-(void)showPopUpAlertForBackupDisabledApps;
-(void)showAlertForBackupDisabledItemsWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)proceedWithErase;
-(id)manageStorageAction;
-(unsigned long long)statusForCloudDataClasses:(unsigned long long)arg1 backupState:(int)arg2 ;
-(void)presentAlertForCloudStatus:(unsigned long long)arg1 ;
-(void)eraseSettingsAndContent:(id)arg1 ;
-(void)eraseSettings:(id)arg1 ;
-(void)resetAllCellularNetworks:(id)arg1 ;
-(void)_disablePhoneLocatorAndErase;
-(void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(/*^block*/id)arg1 ;
-(void)_eraseSettingsAndContent;
-(void)_resetWithMode:(long long)arg1 andOptions:(id)arg2 ;
-(void)reprovisionAccount;
-(void)resetAKey;
-(void)confirmEraseCellularSettings;
-(void)eraseCellularSettings;
-(void)presentSyncAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)presentBackupAlertWithTitle:(id)arg1 message:(id)arg2 finishButtonTitle:(id)arg3 shouldSync:(BOOL)arg4 ;
-(BOOL)hasWifi;
-(void)startSync:(BOOL)arg1 continueBackup:(BOOL)arg2 ;
-(void)presentSyncNeedsWiFiAlert;
-(void)updateCloudProgressAlertLabel:(id)arg1 ;
-(void)cloudProcessesDidFail;
-(void)updateSyncProgress:(float)arg1 ;
-(void)cloudProcessesDidSucceed;
-(void)updateBackupProgress:(float)arg1 estimatedTimeRemaining:(unsigned long long)arg2 ;
-(void)_managerDidFailBackup;
-(void)resetKeyboardDictionary:(id)arg1 ;
-(void)resetIconPositions:(id)arg1 ;
-(void)resetPrivacyWarnings:(id)arg1 ;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(void)resetNetworkSettings:(id)arg1 ;
-(void)subscriberOptions:(id)arg1 ;
-(void)changeAlertMessageIfNeeded:(BOOL)arg1 ;
@end

