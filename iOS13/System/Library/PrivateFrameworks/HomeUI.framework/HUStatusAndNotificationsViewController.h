/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUCameraSmartNotificationSettingsModuleControllerDelegate.h>

@protocol HFServiceLikeItem;
@class HFItem, HUTriggerConditionEditorItemModuleController, HUCameraSmartNotificationSettingsModuleController, HUStatusAndNotificationsItemManager, NSString;

@interface HUStatusAndNotificationsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUCameraSmartNotificationSettingsModuleControllerDelegate> {

	HFItem*<HFServiceLikeItem> _item;
	HUTriggerConditionEditorItemModuleController* _conditionModuleController;
	HUCameraSmartNotificationSettingsModuleController* _cameraSmartSettingsModuleController;

}

@property (nonatomic,readonly) HUStatusAndNotificationsItemManager * itemManager; 
@property (nonatomic,retain) HFItem*<HFServiceLikeItem> item;                                                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModuleController * conditionModuleController;                             //@synthesize conditionModuleController=_conditionModuleController - In the implementation block
@property (nonatomic,readonly) HUCameraSmartNotificationSettingsModuleController * cameraSmartSettingsModuleController;              //@synthesize cameraSmartSettingsModuleController=_cameraSmartSettingsModuleController - In the implementation block
@property (assign,nonatomic) BOOL showStatusSection; 
@property (assign,nonatomic) BOOL useServiceNameAsTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItem*<HFServiceLikeItem>)item;
-(void)setItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(id)itemModuleControllers;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2 ;
-(void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2 ;
-(void)conditionEditorModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2 ;
-(BOOL)showStatusSection;
-(void)setShowStatusSection:(BOOL)arg1 ;
-(void)smartNotificationSettingsModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2 ;
-(HUTriggerConditionEditorItemModuleController *)conditionModuleController;
-(id)initWithServiceItem:(id)arg1 home:(id)arg2 ;
-(void)setUseServiceNameAsTitle:(BOOL)arg1 ;
-(HUCameraSmartNotificationSettingsModuleController *)cameraSmartSettingsModuleController;
-(BOOL)useServiceNameAsTitle;
@end

