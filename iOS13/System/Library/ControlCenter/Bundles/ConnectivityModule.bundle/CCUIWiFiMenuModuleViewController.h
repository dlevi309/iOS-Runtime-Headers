/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIAlwaysExpandedMenuModuleViewController.h>
#import <libobjc.A.dylib/WFNetworkListing.h>
#import <libobjc.A.dylib/WFNetworkViewProvider.h>

@protocol WFNetworkListRecord, WFNetworkListDelegate;
@class NSString, WFNetworkListController, NSArray, UIImage;

@interface CCUIWiFiMenuModuleViewController : CCUIAlwaysExpandedMenuModuleViewController <WFNetworkListing, WFNetworkViewProvider> {

	WFNetworkListController* _wifiManager;
	NSArray* _networks;
	UIImage* _hotspotImage;
	UIImage* _wifiSecureImage;
	UIImage* _wifiSignalLowImage;
	UIImage* _wifiSignalMediumImage;
	UIImage* _wifiSignalHighImage;
	BOOL _showOtherNetwork;
	float _currentNetworkScaledRSSI;
	unsigned long long _currentNetworkSignalBars;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	id<WFNetworkListDelegate> _listDelegate;

}

@property (__weak) id<WFNetworkListDelegate> listDelegate;                   //@synthesize listDelegate=_listDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork;                          //@synthesize showOtherNetwork=_showOtherNetwork - In the implementation block
@property (assign) float currentNetworkScaledRSSI;                           //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                            //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars;              //@synthesize currentNetworkSignalBars=_currentNetworkSignalBars - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                     //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setNetworks:(id)arg1 ;
-(id<WFNetworkListDelegate>)listDelegate;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(id)trailingViewForMenuItem:(id)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(void)setCurrentNetworkSignalBars:(unsigned long long)arg1 ;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(void)presentNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(id)credentialsViewControllerWithContext:(id)arg1 ;
-(id)certificateViewControllerWithContext:(id)arg1 ;
-(id)networkErrorViewControllerWithContext:(id)arg1 ;
-(id)networkDetailsViewControllerWithContext:(id)arg1 ;
-(long long)currentNetworkState;
-(void)dismissNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(void)_updateWiFiMenuItems;
-(id)_wifiSecureImage;
-(id)_hotspotImage;
-(id)_wifiImageForSignalBars:(unsigned long long)arg1 ;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_wifiSignalLowImage;
-(id)_wifiSignalMediumImage;
-(id)_wifiSignalHighImage;
-(id)_menuItemFromNetworkRecord:(id)arg1 ;
-(void)_serializeNetworkRecord:(id)arg1 ;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(unsigned long long)currentNetworkSignalBars;
@end

