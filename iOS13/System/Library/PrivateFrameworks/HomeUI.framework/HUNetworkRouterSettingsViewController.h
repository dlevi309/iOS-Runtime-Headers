/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HUNetworkConfigurationItemListModuleController, HUNetworkRouterSettingsItemManager, NSString;

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate> {

	HUNetworkConfigurationItemListModuleController* _networkConfigurationItemListModuleController;

}

@property (nonatomic,readonly) HUNetworkRouterSettingsItemManager * itemManager; 
@property (nonatomic,retain) HUNetworkConfigurationItemListModuleController * networkConfigurationItemListModuleController;              //@synthesize networkConfigurationItemListModuleController=_networkConfigurationItemListModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(HUNetworkConfigurationItemListModuleController *)networkConfigurationItemListModuleController;
-(id)presentNetworkRouterSettingsForItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldShowNetworkRouterDetails;
-(Class)_networkRouterDetailsViewControllerClass;
-(void)setNetworkConfigurationItemListModuleController:(HUNetworkConfigurationItemListModuleController *)arg1 ;
-(id)presentNetworkConfigurationSettingsForProfile:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentNetworkRouterSettingsForProfile:(id)arg1 animated:(BOOL)arg2 ;
@end

