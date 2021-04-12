/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationSettingsModuleController, HUNetworkConfigurationSettingsItemManager;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController {

	HUNetworkConfigurationSettingsModuleController* _networkConfigurationSettingsModuleController;

}

@property (nonatomic,readonly) HUNetworkConfigurationSettingsItemManager * itemManager; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModuleController * networkConfigurationSettingsModuleController;              //@synthesize networkConfigurationSettingsModuleController=_networkConfigurationSettingsModuleController - In the implementation block
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)initWithNetworkConfigurationGroupItem:(id)arg1 ;
-(void)setNetworkConfigurationSettingsModuleController:(HUNetworkConfigurationSettingsModuleController *)arg1 ;
-(HUNetworkConfigurationSettingsModuleController *)networkConfigurationSettingsModuleController;
-(void)updateNetworkConfigurationSettingsModuleFooter;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
@end

