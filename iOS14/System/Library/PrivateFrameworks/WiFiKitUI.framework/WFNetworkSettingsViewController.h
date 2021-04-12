/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <WiFiKitUI/WFInsetTableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFNetworkSettingsViewControllerDataCoordinator, WFNetworkSettingsViewControllerDelegate, WFDetailsProviderContext;
@class UITableViewHeaderFooterView, WFNetworkSettingsConfig, NSArray, WFNetworkSettingsCellFactory, NSAttributedString, WFHyperlinkFooterView, UISwitch, UIColor, UIAlertController, NSString;

@interface WFNetworkSettingsViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkView> {

	UITableViewHeaderFooterView* _lowDataModeFooterView;
	UITableViewHeaderFooterView* _randomMACFooterView;
	BOOL _randomMACSwitchOn;
	BOOL _isUsingRandomMac;
	BOOL _randomFeatureEnabled;
	BOOL _useInsetGroupedTableView;
	id<WFNetworkSettingsViewControllerDataCoordinator> _dataCoordinator;
	id<WFNetworkSettingsViewControllerDelegate> _delegate;
	WFNetworkSettingsConfig* _config;
	long long _deviceCapability;
	NSArray* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	NSAttributedString* _recommendationLinkAttributedString;
	WFHyperlinkFooterView* _linkFooterView;
	UISwitch* _autoJoinSwitch;
	UISwitch* _autoLoginSwitch;
	UISwitch* _saveDataModeSwitch;
	UISwitch* _randomMACSwitch;
	UIColor* _backgroundColor;
	id<WFDetailsProviderContext> _context;
	UIAlertController* _alert;
	NSString* _hardwareMACAddress;
	NSString* _randomMACAddress;

}

@property (retain) NSArray * sections;                                                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;                                             //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,copy) WFNetworkSettingsConfig * config;                                                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSAttributedString * recommendationLinkAttributedString;                                //@synthesize recommendationLinkAttributedString=_recommendationLinkAttributedString - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                                                 //@synthesize linkFooterView=_linkFooterView - In the implementation block
@property (nonatomic,retain) UISwitch * autoJoinSwitch;                                                              //@synthesize autoJoinSwitch=_autoJoinSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * autoLoginSwitch;                                                             //@synthesize autoLoginSwitch=_autoLoginSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * saveDataModeSwitch;                                                          //@synthesize saveDataModeSwitch=_saveDataModeSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * randomMACSwitch;                                                             //@synthesize randomMACSwitch=_randomMACSwitch - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<WFDetailsProviderContext> context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIAlertController * alert;                                                              //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain) NSString * hardwareMACAddress;                                                          //@synthesize hardwareMACAddress=_hardwareMACAddress - In the implementation block
@property (nonatomic,retain) NSString * randomMACAddress;                                                            //@synthesize randomMACAddress=_randomMACAddress - In the implementation block
@property (assign,nonatomic) BOOL randomMACSwitchOn;                                                                 //@synthesize randomMACSwitchOn=_randomMACSwitchOn - In the implementation block
@property (assign,nonatomic) BOOL isUsingRandomMac;                                                                  //@synthesize isUsingRandomMac=_isUsingRandomMac - In the implementation block
@property (assign,nonatomic) BOOL randomFeatureEnabled;                                                              //@synthesize randomFeatureEnabled=_randomFeatureEnabled - In the implementation block
@property (assign,nonatomic) BOOL useInsetGroupedTableView;                                                          //@synthesize useInsetGroupedTableView=_useInsetGroupedTableView - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDataCoordinator> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                                                             //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(void)setSections:(NSArray *)arg1 ;
-(WFNetworkSettingsConfig *)config;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id<WFNetworkSettingsViewControllerDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id<WFDetailsProviderContext>)context;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setRandomMACAddress:(NSString *)arg1 ;
-(void)setDelegate:(id<WFNetworkSettingsViewControllerDelegate>)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setAlert:(UIAlertController *)arg1 ;
-(UIAlertController *)alert;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setConfig:(WFNetworkSettingsConfig *)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(NSString *)hardwareMACAddress;
-(NSString *)randomMACAddress;
-(void)dealloc;
-(void)setContext:(id<WFDetailsProviderContext>)arg1 ;
-(WFHyperlinkFooterView *)linkFooterView;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setHardwareMACAddress:(NSString *)arg1 ;
-(void)setRandomMACSwitchOn:(BOOL)arg1 ;
-(id)initWithConfig:(id)arg1 detailsContext:(id)arg2 hardwareMACAddress:(id)arg3 useInsetGroupedTableView:(BOOL)arg4 ;
-(void)setDataCoordinator:(id<WFNetworkSettingsViewControllerDataCoordinator>)arg1 ;
-(void)refreshConfig:(id)arg1 ;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(BOOL)useInsetGroupedTableView;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
-(void)setUseInsetGroupedTableView:(BOOL)arg1 ;
-(id<WFNetworkSettingsViewControllerDataCoordinator>)dataCoordinator;
-(long long)_sectionTypeAtSection:(long long)arg1 ;
-(BOOL)_isChinaDevice;
-(id)initWithConfig:(id)arg1 detailsContext:(id)arg2 hardwareMACAddress:(id)arg3 ;
-(id)_sectionsFromConfig:(id)arg1 ;
-(void)_logSections:(id)arg1 ;
-(BOOL)_shouldShowIPv6ForConfig:(id)arg1 ;
-(UISwitch *)randomMACSwitch;
-(void)_updateRandomMACValueChanged:(BOOL)arg1 ;
-(UISwitch *)autoJoinSwitch;
-(UISwitch *)autoLoginSwitch;
-(UISwitch *)saveDataModeSwitch;
-(BOOL)_shouldShowRandomConfigSwith;
-(id)_macAddressToDisplay;
-(BOOL)randomMACSwitchOn;
-(BOOL)_isIPv4ConfigAuto;
-(void)_promptForgetNetwork;
-(void)_saveConfig:(id)arg1 ;
-(void)_presentDetailViewController:(id)arg1 ;
-(void)_presentRenewLeaseAlertWithSourceRect:(CGRect)arg1 ;
-(BOOL)_showRecommendationSupportLink;
-(id)_lowDataModeFooterView;
-(id)_randomMACFooterView;
-(NSAttributedString *)recommendationLinkAttributedString;
-(void)_saveAutoJoinEnabledChanged:(BOOL)arg1 ;
-(void)_saveAutoLoginEnabledChanged:(BOOL)arg1 ;
-(void)_saveSaveDataModeChanged:(BOOL)arg1 ;
-(void)_promptChangePrivateAddress;
-(void)setIsUsingRandomMac:(BOOL)arg1 ;
-(void)_autoJoinSwitchChanged:(id)arg1 ;
-(void)_autoLoginSwitchChanged:(id)arg1 ;
-(void)_saveDataModeSwitchChanged:(id)arg1 ;
-(void)_usingRandomMACSwitchChanged:(id)arg1 ;
-(void)_openRecommendationsLink:(id)arg1 ;
-(id)_stringForSettingsSection:(long long)arg1 ;
-(BOOL)isUsingRandomMac;
-(id)_randomAddressToDisplay;
-(id)_randomMACFooterTextToDisplay;
-(void)_httpProxyConfigChanged:(long long)arg1 ;
-(void)_httpProxyAuthChanged:(id)arg1 ;
-(void)setRecommendationLinkAttributedString:(NSAttributedString *)arg1 ;
-(void)setAutoJoinSwitch:(UISwitch *)arg1 ;
-(void)setAutoLoginSwitch:(UISwitch *)arg1 ;
-(void)setSaveDataModeSwitch:(UISwitch *)arg1 ;
-(void)setRandomMACSwitch:(UISwitch *)arg1 ;
-(BOOL)randomFeatureEnabled;
-(void)setRandomFeatureEnabled:(BOOL)arg1 ;
@end

