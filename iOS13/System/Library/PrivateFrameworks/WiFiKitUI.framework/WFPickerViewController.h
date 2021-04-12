/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFNetworkListing.h>

@protocol WFNetworkListRecord, WFNetworkListDelegate;
@class UITableView, NSArray, NSString;

@interface WFPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing> {

	BOOL showOtherNetwork;
	BOOL _dismissed;
	BOOL _showCurrentNetworkTop;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	UITableView* _tableView;
	NSArray* _sortedNetworks;
	id<WFNetworkListDelegate> _listDelegate;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * sortedNetworks;                       //@synthesize sortedNetworks=_sortedNetworks - In the implementation block
@property (__weak) id<WFNetworkListDelegate> listDelegate;                   //@synthesize listDelegate=_listDelegate - In the implementation block
@property (assign,nonatomic) BOOL showCurrentNetworkTop;                     //@synthesize showCurrentNetworkTop=_showCurrentNetworkTop - In the implementation block
@property (assign,nonatomic) BOOL dismissed;                                 //@synthesize dismissed=_dismissed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI;                           //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                            //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability;                     //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
-(id)init;
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)dismissed;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setNetworks:(id)arg1 ;
-(id<WFNetworkListDelegate>)listDelegate;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(void)setDismissed:(BOOL)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(long long)currentNetworkState;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(NSArray *)sortedNetworks;
-(id)_cellForNetworkRecord:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(void)setSortedNetworks:(NSArray *)arg1 ;
-(BOOL)showCurrentNetworkTop;
-(void)setShowCurrentNetworkTop:(BOOL)arg1 ;
@end

