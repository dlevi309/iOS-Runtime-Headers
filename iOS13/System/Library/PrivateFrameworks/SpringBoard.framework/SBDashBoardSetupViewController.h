/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSEventHandling.h>

@class SBSetupWiFiScanner, SBActivationInfoViewController, SBSetupRegulatoryInfoViewController, SBSetupManager, CSCoverSheetViewController, NSString, NSTimer, NSDictionary, NSArray, NSMutableArray;

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <CSEventHandling> {

	SBSetupWiFiScanner* _wifiScanner;
	SBActivationInfoViewController* _activationInfoViewController;
	SBSetupRegulatoryInfoViewController* _regulatoryInfoViewController;
	SBSetupManager* _setupManager;
	CSCoverSheetViewController* _coverSheetViewController;
	NSString* _configureKey;
	NSString* _wifiPrimaryLanguage;
	NSString* _telephonyPrimaryLanguage;
	NSTimer* _cycleStartTimer;
	NSDictionary* _localizedStrings;
	NSDictionary* _storeRestrictedStrings;
	NSArray* _stringsOrdering;
	NSMutableArray* _currentStringsOrdering;
	unsigned long long _currentStringsIndex;
	BOOL _shouldResetOrderingOnNextCycle;
	BOOL _isCyclingComponents;
	unsigned long long _componentsToCycle;
	BOOL _isStoreRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(void)_startWifiScan;
-(id)setupView;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_fetchLanguageFromTelephony;
-(void)_startCyclingComponents:(unsigned long long)arg1 withDelay:(double)arg2 ;
-(void)_stopCyclingComponents:(unsigned long long)arg1 ;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)_cancelWifiScan;
-(void)_resetDisplayedLocalizedStringsImmediately:(BOOL)arg1 ;
-(void)_animateComponentsForNewCycle;
-(void)_updateDisplayedStrings;
-(void)_incrementLocalizedStringsForNewCycle;
-(id)_importantLanguageIdentifiers;
-(id)_currentLanguageIdentifier;
-(id)_currentStringsDictionary;
-(id)_currentStoreRestrictedStringsDictionary;
-(void)_regulatoryInfoButtonTapped:(id)arg1 ;
-(void)_updateWifiPrimaryLanguageFromDiscoveredCountryCodes:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
@end

