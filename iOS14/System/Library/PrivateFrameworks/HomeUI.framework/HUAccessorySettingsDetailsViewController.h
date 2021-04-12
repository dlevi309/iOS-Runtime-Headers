/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModuleController, HFAccessorySettingItem, NSString;

@interface HUAccessorySettingsDetailsViewController : HUItemTableViewController <HUAccessorySettingsItemModuleControllerDelegate, HUAccessorySettingsDetailsViewControllerProtocol> {

	HFAccessorySettingGroupItem* _groupItem;
	HUAccessorySettingsItemModuleController* _accessorySettingsItemModuleController;
	HFAccessorySettingItem* _fileUploadItem;

}

@property (nonatomic,retain) HFAccessorySettingGroupItem * groupItem;                                                      //@synthesize groupItem=_groupItem - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModuleController * accessorySettingsItemModuleController;              //@synthesize accessorySettingsItemModuleController=_accessorySettingsItemModuleController - In the implementation block
@property (nonatomic,retain) HFAccessorySettingItem * fileUploadItem;                                                      //@synthesize fileUploadItem=_fileUploadItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)itemModuleControllers;
-(HFAccessorySettingGroupItem *)groupItem;
-(void)setGroupItem:(HFAccessorySettingGroupItem *)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(void)moduleController:(id)arg1 presentGroup:(id)arg2 ;
-(id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(HUAccessorySettingsItemModuleController *)accessorySettingsItemModuleController;
-(void)setAccessorySettingsItemModuleController:(HUAccessorySettingsItemModuleController *)arg1 ;
-(id)accessorySettingsItemManager;
-(HFAccessorySettingItem *)fileUploadItem;
-(void)setFileUploadItem:(HFAccessorySettingItem *)arg1 ;
@end

