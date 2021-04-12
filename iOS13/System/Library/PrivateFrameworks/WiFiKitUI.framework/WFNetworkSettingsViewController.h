/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFAccessoryViewController.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFNetworkSettingsViewControllerDataCoordinator, WFNetworkSettingsViewControllerDelegate, WFDetailsProviderContext;
@class UITableViewHeaderFooterView, WFNetworkSettingsConfig, UITableView, NSArray, WFNetworkSettingsCellFactory, NSAttributedString, WFHyperlinkFooterView, UISwitch, UIColor, UIAlertController, NSString;

@interface WFNetworkSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, WFNetworkView> {

	UITableViewHeaderFooterView* _lowDataModeFooterView;
	id<WFNetworkSettingsViewControllerDataCoordinator> _dataCoordinator;
	id<WFNetworkSettingsViewControllerDelegate> _delegate;
	WFNetworkSettingsConfig* _config;
	long long _deviceCapability;
	UITableView* _tableView;
	NSArray* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	NSAttributedString* _recommendationLinkAttributedString;
	WFHyperlinkFooterView* _linkFooterView;
	UISwitch* _autoJoinSwitch;
	UISwitch* _autoLoginSwitch;
	UISwitch* _saveDataModeSwitch;
	UIColor* _backgroundColor;
	id<WFDetailsProviderContext> _context;
	UIAlertController* _alert;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                                         //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArray * sections;                                                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;                                             //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,copy) WFNetworkSettingsConfig * config;                                                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSAttributedString * recommendationLinkAttributedString;                                //@synthesize recommendationLinkAttributedString=_recommendationLinkAttributedString - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                                                 //@synthesize linkFooterView=_linkFooterView - In the implementation block
@property (nonatomic,retain) UISwitch * autoJoinSwitch;                                                              //@synthesize autoJoinSwitch=_autoJoinSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * autoLoginSwitch;                                                             //@synthesize autoLoginSwitch=_autoLoginSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * saveDataModeSwitch;                                                          //@synthesize saveDataModeSwitch=_saveDataModeSwitch - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<WFDetailsProviderContext> context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIAlertController * alert;                                                              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDataCoordinator> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                                                             //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(void)dealloc;
-(id<WFNetworkSettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFNetworkSettingsViewControllerDelegate>)arg1 ;
-(WFNetworkSettingsConfig *)config;
-(id<WFDetailsProviderContext>)context;
-(void)setConfig:(WFNetworkSettingsConfig *)arg1 ;
-(void)setContext:(id<WFDetailsProviderContext>)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(UIAlertController *)alert;
-(id)initWithConfig:(id)arg1 ;
-(void)setAlert:(UIAlertController *)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(id)initWithConfig:(id)arg1 detailsContext:(id)arg2 ;
-(void)setDataCoordinator:(id<WFNetworkSettingsViewControllerDataCoordinator>)arg1 ;
-(void)refreshConfig:(id)arg1 ;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(WFHyperlinkFooterView *)linkFooterView;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
-(long long)_sectionTypeAtSection:(long long)arg1 ;
-(BOOL)_isChinaDevice;
-(id)_sectionsFromConfig:(id)arg1 ;
-(void)_logSections:(id)arg1 ;
-(BOOL)_shouldShowIPv6ForConfig:(id)arg1 ;
-(UISwitch *)autoJoinSwitch;
-(UISwitch *)autoLoginSwitch;
-(UISwitch *)saveDataModeSwitch;
-(BOOL)_isIPv4ConfigAuto;
-(id<WFNetworkSettingsViewControllerDataCoordinator>)dataCoordinator;
-(void)_promptForgetNetwork;
-(void)_saveConfig:(id)arg1 ;
-(void)_presentDetailViewController:(id)arg1 ;
-(void)_presentRenewLeaseAlertWithSourceRect:(CGRect)arg1 ;
-(BOOL)_showRecommendationSupportLink;
-(id)_lowDataModeFooterView;
-(NSAttributedString *)recommendationLinkAttributedString;
-(void)_saveAutoJoinEnabledChanged:(BOOL)arg1 ;
-(void)_saveAutoLoginEnabledChanged:(BOOL)arg1 ;
-(void)_saveSaveDataModeChanged:(BOOL)arg1 ;
-(void)_autoJoinSwitchChanged:(id)arg1 ;
-(void)_autoLoginSwitchChanged:(id)arg1 ;
-(void)_saveDataModeSwitchChanged:(id)arg1 ;
-(void)_openRecommendationsLink:(id)arg1 ;
-(id)_stringForSettingsSection:(long long)arg1 ;
-(void)_httpProxyConfigChanged:(long long)arg1 ;
-(void)_httpProxyAuthChanged:(id)arg1 ;
-(void)setRecommendationLinkAttributedString:(NSAttributedString *)arg1 ;
-(void)setAutoJoinSwitch:(UISwitch *)arg1 ;
-(void)setAutoLoginSwitch:(UISwitch *)arg1 ;
-(void)setSaveDataModeSwitch:(UISwitch *)arg1 ;
@end

