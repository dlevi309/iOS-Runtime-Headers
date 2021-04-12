/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HUNetworkConfigurationSettingsModuleController, HUNetworkConfigurationSettingsItemManager, NSString;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController <UITextViewDelegate> {

	HUNetworkConfigurationSettingsModuleController* _networkConfigurationSettingsModuleController;

}

@property (nonatomic,readonly) HUNetworkConfigurationSettingsItemManager * itemManager; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModuleController * networkConfigurationSettingsModuleController;              //@synthesize networkConfigurationSettingsModuleController=_networkConfigurationSettingsModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithNetworkConfigurationGroupItem:(id)arg1 ;
-(void)setNetworkConfigurationSettingsModuleController:(HUNetworkConfigurationSettingsModuleController *)arg1 ;
-(HUNetworkConfigurationSettingsModuleController *)networkConfigurationSettingsModuleController;
-(void)updateNetworkConfigurationSettingsModuleFooter;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
@end

