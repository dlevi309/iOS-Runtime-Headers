/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSEventHandling.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBSetupWiFiScanner, SBActivationInfoViewController, SBSetupRegulatoryInfoViewController, SBSetupManager, CSCoverSheetViewController, NSString, NSTimer, NSDictionary, NSArray, NSMutableArray, UITapGestureRecognizer, UIHoverGestureRecognizer;

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <CSEventHandling, UIGestureRecognizerDelegate> {

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
	UITapGestureRecognizer* _pointerClickGestureRecognizer;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)presentationPriority;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_startWifiScan;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(id)setupView;
-(void)aggregateAppearance:(id)arg1 ;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_isSecurityResearchDevice;
-(void)_didClickHomeAffordance:(id)arg1 ;
-(void)_handleHoverEvent:(id)arg1 ;
-(void)_fetchLanguageFromTelephony;
-(unsigned long long)_componentsRelevantToPointerSuppression;
-(BOOL)isCyclingComponents:(unsigned long long)arg1 ;
-(void)_stopCyclingComponents:(unsigned long long)arg1 ;
-(void)_startCyclingComponents:(unsigned long long)arg1 withDelay:(double)arg2 ;
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
@end

