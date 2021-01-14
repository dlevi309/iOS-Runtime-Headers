/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsItemModuleControllerDelegate.h>

@class HFUserItem, HUMediaServiceItem, HUMediaServiceItemManager, HUAccessorySettingsItemModuleController, NSString;

@interface HUMediaServiceTableViewController : HUItemTableViewController <HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate> {

	HFUserItem* _userItem;
	HUMediaServiceItem* _mediaServiceItem;
	HUMediaServiceItemManager* _mediaServiceItemManager;
	HUAccessorySettingsItemModuleController* _userSettingsItemModuleController;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUMediaServiceItem * mediaServiceItem;                                            //@synthesize mediaServiceItem=_mediaServiceItem - In the implementation block
@property (nonatomic,copy,readonly) HUMediaServiceItemManager * mediaServiceItemManager;                              //@synthesize mediaServiceItemManager=_mediaServiceItemManager - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModuleController * userSettingsItemModuleController;              //@synthesize userSettingsItemModuleController=_userSettingsItemModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)itemModuleControllers;
-(HUMediaServiceItem *)mediaServiceItem;
-(HUAccessorySettingsItemModuleController *)userSettingsItemModuleController;
-(void)setUserSettingsItemModuleController:(HUAccessorySettingsItemModuleController *)arg1 ;
-(id)initWithItem:(id)arg1 mediaServiceItem:(id)arg2 ;
-(void)moduleController:(id)arg1 presentGroup:(id)arg2 ;
-(BOOL)moduleController:(id)arg1 shouldDisableItem:(id)arg2 ;
-(void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2 ;
-(id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(HUMediaServiceItemManager *)mediaServiceItemManager;
-(void)_removeService;
@end

