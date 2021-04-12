/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUValveEditorItemManager, HUNameItemModuleController, NSMutableSet;

@interface HUValveEditorViewController : HUItemTableViewController {

	HUValveEditorItemManager* _valveEditorItemManager;
	HUNameItemModuleController* _nameModuleController;
	NSMutableSet* _moduleControllers;

}

@property (nonatomic,retain) HUValveEditorItemManager * valveEditorItemManager;              //@synthesize valveEditorItemManager=_valveEditorItemManager - In the implementation block
@property (nonatomic,retain) HUNameItemModuleController * nameModuleController;              //@synthesize nameModuleController=_nameModuleController - In the implementation block
@property (nonatomic,retain) NSMutableSet * moduleControllers;                               //@synthesize moduleControllers=_moduleControllers - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)itemModuleControllers;
-(NSMutableSet *)moduleControllers;
-(id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2 ;
-(HUValveEditorItemManager *)valveEditorItemManager;
-(HUNameItemModuleController *)nameModuleController;
-(void)setNameModuleController:(HUNameItemModuleController *)arg1 ;
-(void)setValveEditorItemManager:(HUValveEditorItemManager *)arg1 ;
-(void)setModuleControllers:(NSMutableSet *)arg1 ;
@end

