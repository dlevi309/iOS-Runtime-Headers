/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUUserTableViewController.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceFooterViewDelegate.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceViewControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsItemModuleControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class HFUserItem, HUEditUserItemManager, HUPendingAccessoriesGridViewController, HUAccessorySettingsItemModuleController, HUAboutResidentDeviceFooterView, NSString;

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UITextViewDelegate> {

	HFUserItem* _userItem;
	HUEditUserItemManager* _editUserItemManager;
	HUPendingAccessoriesGridViewController* _pendingAccessoriesViewController;
	HUAccessorySettingsItemModuleController* _userSettingsItemModuleController;
	HUAboutResidentDeviceFooterView* _aboutResidentDeviceFooterView;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                             //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,readonly) HUEditUserItemManager * editUserItemManager;                                            //@synthesize editUserItemManager=_editUserItemManager - In the implementation block
@property (nonatomic,readonly) HUPendingAccessoriesGridViewController * pendingAccessoriesViewController;              //@synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModuleController * userSettingsItemModuleController;               //@synthesize userSettingsItemModuleController=_userSettingsItemModuleController - In the implementation block
@property (nonatomic,retain) HUAboutResidentDeviceFooterView * aboutResidentDeviceFooterView;                          //@synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)userHandle;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
-(id)itemModuleControllers;
-(HFUserItem *)userItem;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUEditUserItemManager *)editUserItemManager;
-(HUPendingAccessoriesGridViewController *)pendingAccessoriesViewController;
-(void)_removeUser;
-(id)_lazyAboutResidentDeviceFooterView;
-(HUAccessorySettingsItemModuleController *)userSettingsItemModuleController;
-(void)setUserSettingsItemModuleController:(HUAccessorySettingsItemModuleController *)arg1 ;
-(HUAboutResidentDeviceFooterView *)aboutResidentDeviceFooterView;
-(void)setAboutResidentDeviceFooterView:(HUAboutResidentDeviceFooterView *)arg1 ;
-(void)learnMoreLinkTapped:(id)arg1 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg1 ;
-(void)moduleController:(id)arg1 presentGroup:(id)arg2 ;
-(BOOL)moduleController:(id)arg1 shouldDisableItem:(id)arg2 ;
-(void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2 ;
-(id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

