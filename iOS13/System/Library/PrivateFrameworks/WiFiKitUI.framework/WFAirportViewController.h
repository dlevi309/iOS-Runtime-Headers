/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFNetworkListing.h>

@protocol WFNetworkListRecord, WFAirportViewControllerDelegate, OS_dispatch_queue;
@class NSString, UITableView, NSOrderedSet, NSSet, NSArray, WFChooseNetworkHeaderViewController, NSObject;

@interface WFAirportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFNetworkListing> {

	BOOL _showOtherNetwork;
	BOOL _disabled;
	BOOL _userAutoJoinEnabled;
	BOOL _askToJoinShown;
	BOOL _disablePowerModification;
	BOOL _isManagedAppleID;
	BOOL _showDiagnostics;
	BOOL _showKnownNetworks;
	BOOL _tableViewIsUpdating;
	BOOL _networkResultsChangedWhileUIUpdates;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	id<WFAirportViewControllerDelegate> _listDelegate;
	long long _deviceCapability;
	NSString* _currentNetworkSubtitle;
	NSString* _powerOffLocationWarning;
	NSString* _userAutoJoinDisabledWarning;
	UITableView* _tableView;
	NSOrderedSet* _sections;
	NSSet* _allNetworks;
	NSArray* _infraNetworks;
	NSArray* _popularNetworks;
	NSArray* _knownNetworks;
	NSArray* _adhocNetworks;
	NSArray* _unconfiguredNetworks;
	WFChooseNetworkHeaderViewController* _chooseNetworkHeader;
	WFChooseNetworkHeaderViewController* _knownNetworkHeader;
	WFChooseNetworkHeaderViewController* _publicNetworkHeader;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<WFNetworkListRecord> _joiningHotspot;
	id<WFNetworkListRecord> _joiningNetwork;
	NSSet* _pendingNetworks;
	NSString* _currentKnownHeaderText;
	NSString* _currentInfraHeaderText;

}

@property (nonatomic,copy) NSString * powerOffLocationWarning;                                       //@synthesize powerOffLocationWarning=_powerOffLocationWarning - In the implementation block
@property (nonatomic,copy) NSString * userAutoJoinDisabledWarning;                                   //@synthesize userAutoJoinDisabledWarning=_userAutoJoinDisabledWarning - In the implementation block
@property (assign,nonatomic) BOOL showDiagnostics;                                                   //@synthesize showDiagnostics=_showDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL showKnownNetworks;                                                 //@synthesize showKnownNetworks=_showKnownNetworks - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSOrderedSet * sections;                                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSSet * allNetworks;                                                    //@synthesize allNetworks=_allNetworks - In the implementation block
@property (nonatomic,retain) NSArray * infraNetworks;                                                //@synthesize infraNetworks=_infraNetworks - In the implementation block
@property (nonatomic,retain) NSArray * popularNetworks;                                              //@synthesize popularNetworks=_popularNetworks - In the implementation block
@property (nonatomic,retain) NSArray * knownNetworks;                                                //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSArray * adhocNetworks;                                                //@synthesize adhocNetworks=_adhocNetworks - In the implementation block
@property (nonatomic,retain) NSArray * unconfiguredNetworks;                                         //@synthesize unconfiguredNetworks=_unconfiguredNetworks - In the implementation block
@property (nonatomic,retain) WFChooseNetworkHeaderViewController * chooseNetworkHeader;              //@synthesize chooseNetworkHeader=_chooseNetworkHeader - In the implementation block
@property (nonatomic,retain) WFChooseNetworkHeaderViewController * knownNetworkHeader;               //@synthesize knownNetworkHeader=_knownNetworkHeader - In the implementation block
@property (nonatomic,retain) WFChooseNetworkHeaderViewController * publicNetworkHeader;              //@synthesize publicNetworkHeader=_publicNetworkHeader - In the implementation block
@property (assign,nonatomic,__weak) id<WFAirportViewControllerDelegate> listDelegate;                //@synthesize listDelegate=_listDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                             //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkListRecord> joiningHotspot;                          //@synthesize joiningHotspot=_joiningHotspot - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkListRecord> joiningNetwork;                          //@synthesize joiningNetwork=_joiningNetwork - In the implementation block
@property (assign,nonatomic) BOOL askToJoinShown;                                                    //@synthesize askToJoinShown=_askToJoinShown - In the implementation block
@property (assign,nonatomic) BOOL disablePowerModification;                                          //@synthesize disablePowerModification=_disablePowerModification - In the implementation block
@property (assign,nonatomic) BOOL isManagedAppleID;                                                  //@synthesize isManagedAppleID=_isManagedAppleID - In the implementation block
@property (assign) BOOL tableViewIsUpdating;                                                         //@synthesize tableViewIsUpdating=_tableViewIsUpdating - In the implementation block
@property (assign,nonatomic) BOOL networkResultsChangedWhileUIUpdates;                               //@synthesize networkResultsChangedWhileUIUpdates=_networkResultsChangedWhileUIUpdates - In the implementation block
@property (nonatomic,retain) NSSet * pendingNetworks;                                                //@synthesize pendingNetworks=_pendingNetworks - In the implementation block
@property (nonatomic,retain) NSString * currentKnownHeaderText;                                      //@synthesize currentKnownHeaderText=_currentKnownHeaderText - In the implementation block
@property (nonatomic,retain) NSString * currentInfraHeaderText;                                      //@synthesize currentInfraHeaderText=_currentInfraHeaderText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork;                                                  //@synthesize showOtherNetwork=_showOtherNetwork - In the implementation block
@property (assign) float currentNetworkScaledRSSI;                                                   //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                                           //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                                                    //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability;                                             //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle;                                        //@synthesize currentNetworkSubtitle=_currentNetworkSubtitle - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinEnabled;                                               //@synthesize userAutoJoinEnabled=_userAutoJoinEnabled - In the implementation block
-(id)init;
-(BOOL)disabled;
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDisabled:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSOrderedSet *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setNetworks:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isManagedAppleID;
-(NSArray *)knownNetworks;
-(id<WFAirportViewControllerDelegate>)listDelegate;
-(void)setListDelegate:(id<WFAirportViewControllerDelegate>)arg1 ;
-(BOOL)powered;
-(void)setScanning:(BOOL)arg1 ;
-(void)setKnownNetworks:(NSArray *)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(NSString *)currentNetworkSubtitle;
-(void)powerModificationStateDidChange:(BOOL)arg1 ;
-(void)managedAppleIDStateChange:(BOOL)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(void)setCurrentNetwork:(id)arg1 previousNetwork:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)setCurrentNetworkSubtitle:(NSString *)arg1 ;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(BOOL)supportsWiFiPasswordSharing;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(BOOL)supportsHealthRecommendations;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1 ;
-(void)setAskToJoinMode:(long long)arg1 ;
-(long long)currentNetworkState;
-(void)updateViewsForNetworks:(id)arg1 ;
-(void)setUserAutoJoinEnabled:(BOOL)arg1 ;
-(long long)_askToJoinMode;
-(NSArray *)popularNetworks;
-(NSArray *)adhocNetworks;
-(NSArray *)unconfiguredNetworks;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(BOOL)userAutoJoinEnabled;
-(BOOL)_askToJoinShouldBeVisible;
-(id)_defaultSectionsForPowerState:(BOOL)arg1 ;
-(void)setShowDiagnostics:(BOOL)arg1 ;
-(void)setShowKnownNetworks:(BOOL)arg1 ;
-(BOOL)showKnownNetworks;
-(void)_updateNetworkRestrictionHeader;
-(id<WFNetworkListRecord>)joiningHotspot;
-(void)_reloadSectionForHotspotChange;
-(id)_currentNetworkCell;
-(void)setJoiningHotspot:(id<WFNetworkListRecord>)arg1 ;
-(BOOL)_refreshATJShownStateIfChanged;
-(NSArray *)infraNetworks;
-(id)_nameOfSection:(unsigned long long)arg1 ;
-(NSSet *)pendingNetworks;
-(void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(unsigned long long)arg3 insertSection:(BOOL)arg4 datasourceSection:(unsigned long long)arg5 ;
-(void)_dumpSections;
-(BOOL)showDiagnostics;
-(BOOL)askToJoinShown;
-(WFChooseNetworkHeaderViewController *)chooseNetworkHeader;
-(void)setAllNetworks:(NSSet *)arg1 ;
-(id)_sectionNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldContinueUpdateNetworkList;
-(void)_reloadPowerSection;
-(void)setInfraNetworks:(NSArray *)arg1 ;
-(id)_askToJoinStateStringForATJMode:(long long)arg1 ;
-(id)_getAutoHotspotOptionText:(long long)arg1 ;
-(unsigned long long)_sectionTypeAtSection:(long long)arg1 ;
-(BOOL)_isChinaDevice;
-(void)_powerSwitchChanged:(id)arg1 ;
-(BOOL)disablePowerModification;
-(id)_tableCellForNetwork:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(void)_enableWAPISwitchChanged:(id)arg1 ;
-(NSString *)powerOffLocationWarning;
-(NSString *)userAutoJoinDisabledWarning;
-(id)_askToJoinFooterString;
-(WFChooseNetworkHeaderViewController *)knownNetworkHeader;
-(WFChooseNetworkHeaderViewController *)publicNetworkHeader;
-(void)_promptToJoinAdhoc:(id)arg1 ;
-(void)updateAutoInstantHotspotSetting:(long long)arg1 ;
-(long long)_askToJoinModeFromString:(id)arg1 ;
-(void)_updateAskToJoinMode:(long long)arg1 ;
-(id)_askToJoinFooterStringForMode:(long long)arg1 ;
-(id)_currentNetworkCellIndexPath;
-(void)setAskToJoinShown:(BOOL)arg1 ;
-(void)setDisablePowerModification:(BOOL)arg1 ;
-(void)setIsManagedAppleID:(BOOL)arg1 ;
-(void)setPowerOffLocationWarning:(NSString *)arg1 ;
-(void)setUserAutoJoinDisabledWarning:(NSString *)arg1 ;
-(NSSet *)allNetworks;
-(void)setPopularNetworks:(NSArray *)arg1 ;
-(void)setAdhocNetworks:(NSArray *)arg1 ;
-(void)setUnconfiguredNetworks:(NSArray *)arg1 ;
-(void)setChooseNetworkHeader:(WFChooseNetworkHeaderViewController *)arg1 ;
-(void)setKnownNetworkHeader:(WFChooseNetworkHeaderViewController *)arg1 ;
-(void)setPublicNetworkHeader:(WFChooseNetworkHeaderViewController *)arg1 ;
-(id<WFNetworkListRecord>)joiningNetwork;
-(void)setJoiningNetwork:(id<WFNetworkListRecord>)arg1 ;
-(BOOL)tableViewIsUpdating;
-(void)setTableViewIsUpdating:(BOOL)arg1 ;
-(BOOL)networkResultsChangedWhileUIUpdates;
-(void)setNetworkResultsChangedWhileUIUpdates:(BOOL)arg1 ;
-(void)setPendingNetworks:(NSSet *)arg1 ;
-(NSString *)currentKnownHeaderText;
-(void)setCurrentKnownHeaderText:(NSString *)arg1 ;
-(NSString *)currentInfraHeaderText;
-(void)setCurrentInfraHeaderText:(NSString *)arg1 ;
@end

