/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFNetworkListing.h>

@protocol WFNetworkListRecord, WFBuddyViewControllerDelegate, WFNetworkListDelegate;
@class NSArray, UITableView, NSLayoutConstraint, NSString, UIView, NSOrderedSet, UISwitch;

@interface WFBuddyViewController : OBWelcomeController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing> {

	BOOL showOtherNetwork;
	BOOL _showNetworkSettings;
	BOOL _showAdditionalSetupInfo;
	BOOL _supportsCellularActivation;
	BOOL _tableViewIsUpdating;
	BOOL _networkResultsChangedWhileUIUpdates;
	BOOL _tableReloadRequestQueued;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	id<WFBuddyViewControllerDelegate> _buddyDelegate;
	NSArray* _sortedNetworks;
	id<WFNetworkListDelegate> _listDelegate;
	UITableView* _tableView;
	NSLayoutConstraint* _heightAnchor;
	NSString* _alternateSetupTitle;
	NSString* _alternateSetupFooter;
	UIView* _buddyIPadContainerView;
	NSOrderedSet* _sections;
	UISwitch* _enableWAPISwitch;
	NSArray* _pendingNetworks;

}

@property (nonatomic,retain) NSArray * sortedNetworks;                                            //@synthesize sortedNetworks=_sortedNetworks - In the implementation block
@property (__weak) id<WFNetworkListDelegate> listDelegate;                                        //@synthesize listDelegate=_listDelegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                   //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,copy) NSString * alternateSetupTitle;                                        //@synthesize alternateSetupTitle=_alternateSetupTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateSetupFooter;                                       //@synthesize alternateSetupFooter=_alternateSetupFooter - In the implementation block
@property (nonatomic,retain) UIView * buddyIPadContainerView;                                     //@synthesize buddyIPadContainerView=_buddyIPadContainerView - In the implementation block
@property (retain) NSOrderedSet * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UISwitch * enableWAPISwitch;                                         //@synthesize enableWAPISwitch=_enableWAPISwitch - In the implementation block
@property (assign) BOOL tableViewIsUpdating;                                                      //@synthesize tableViewIsUpdating=_tableViewIsUpdating - In the implementation block
@property (assign,nonatomic) BOOL networkResultsChangedWhileUIUpdates;                            //@synthesize networkResultsChangedWhileUIUpdates=_networkResultsChangedWhileUIUpdates - In the implementation block
@property (assign,nonatomic) BOOL tableReloadRequestQueued;                                       //@synthesize tableReloadRequestQueued=_tableReloadRequestQueued - In the implementation block
@property (nonatomic,retain) NSArray * pendingNetworks;                                           //@synthesize pendingNetworks=_pendingNetworks - In the implementation block
@property (assign,nonatomic) BOOL showNetworkSettings;                                            //@synthesize showNetworkSettings=_showNetworkSettings - In the implementation block
@property (assign,nonatomic) BOOL showAdditionalSetupInfo;                                        //@synthesize showAdditionalSetupInfo=_showAdditionalSetupInfo - In the implementation block
@property (assign,nonatomic) BOOL supportsCellularActivation;                                     //@synthesize supportsCellularActivation=_supportsCellularActivation - In the implementation block
@property (assign,nonatomic,__weak) id<WFBuddyViewControllerDelegate> buddyDelegate;              //@synthesize buddyDelegate=_buddyDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI;                                                //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                                        //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                                                 //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability;                                          //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
-(id)init;
-(NSLayoutConstraint *)heightAnchor;
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSOrderedSet *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setNetworks:(id)arg1 ;
-(id<WFNetworkListDelegate>)listDelegate;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(long long)currentNetworkState;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1 ;
-(id)_nameOfSection:(long long)arg1 ;
-(NSArray *)pendingNetworks;
-(void)_enableWAPISwitchChanged:(id)arg1 ;
-(BOOL)tableViewIsUpdating;
-(void)setTableViewIsUpdating:(BOOL)arg1 ;
-(BOOL)networkResultsChangedWhileUIUpdates;
-(void)setNetworkResultsChangedWhileUIUpdates:(BOOL)arg1 ;
-(void)setPendingNetworks:(NSArray *)arg1 ;
-(NSArray *)sortedNetworks;
-(id)_cellForNetworkRecord:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(void)setSortedNetworks:(NSArray *)arg1 ;
-(void)setSupportsCellularActivation:(BOOL)arg1 ;
-(void)_notifyBuddyWiFiPickerIsVisble:(BOOL)arg1 ;
-(void)setAlternateSetupTitle:(NSString *)arg1 ;
-(void)setAlternateSetupFooter:(NSString *)arg1 ;
-(void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(long long)arg3 ;
-(void)_refreshSections;
-(BOOL)showAdditionalSetupInfo;
-(id)_debugSectionStringFromSections:(id)arg1 ;
-(BOOL)showNetworkSettings;
-(NSString *)alternateSetupTitle;
-(UISwitch *)enableWAPISwitch;
-(NSString *)alternateSetupFooter;
-(void)_chooseOtherNetworkTapped:(id)arg1 ;
-(id<WFBuddyViewControllerDelegate>)buddyDelegate;
-(void)setShowNetworkSettings:(BOOL)arg1 ;
-(void)setShowAdditionalSetupInfo:(BOOL)arg1 ;
-(BOOL)supportsCellularActivation;
-(void)setBuddyDelegate:(id<WFBuddyViewControllerDelegate>)arg1 ;
-(UIView *)buddyIPadContainerView;
-(void)setBuddyIPadContainerView:(UIView *)arg1 ;
-(void)setEnableWAPISwitch:(UISwitch *)arg1 ;
-(BOOL)tableReloadRequestQueued;
-(void)setTableReloadRequestQueued:(BOOL)arg1 ;
@end

