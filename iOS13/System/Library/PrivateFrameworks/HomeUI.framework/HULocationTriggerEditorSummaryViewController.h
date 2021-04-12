/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HULocationTriggerRegionEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresenceUserPickerItemModuleControllerDelegate.h>

@protocol HUTriggerEditorDelegate;
@class HFLocationTriggerBuilder, HUPresenceUserPickerItemModuleController, HUTriggerConditionEditorItemModuleController, HULocationTriggerEditorSummaryItemManager, NSString;

@interface HULocationTriggerEditorSummaryViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate> {

	HFLocationTriggerBuilder* _triggerBuilder;
	unsigned long long _mode;
	id<HUTriggerEditorDelegate> _delegate;
	HUPresenceUserPickerItemModuleController* _userPickerModuleController;
	HUTriggerConditionEditorItemModuleController* _conditionEditorModuleController;

}

@property (nonatomic,readonly) HULocationTriggerEditorSummaryItemManager * itemManager; 
@property (nonatomic,readonly) HUPresenceUserPickerItemModuleController * userPickerModuleController;                       //@synthesize userPickerModuleController=_userPickerModuleController - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModuleController * conditionEditorModuleController;              //@synthesize conditionEditorModuleController=_conditionEditorModuleController - In the implementation block
@property (nonatomic,readonly) HFLocationTriggerBuilder * triggerBuilder;                                                   //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,__weak,readonly) id<HUTriggerEditorDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLocationEventBuilderForHome:(id)arg1 eventType:(unsigned long long)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)regionEditorDidCancel:(id)arg1 ;
-(void)regionEditor:(id)arg1 didFinishWithRegion:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(id)itemModuleControllers;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)_showSummary:(id)arg1 ;
-(void)_showActionEditor:(id)arg1 ;
-(HUTriggerConditionEditorItemModuleController *)conditionEditorModuleController;
-(HUPresenceUserPickerItemModuleController *)userPickerModuleController;
-(void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2 ;
-(void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2 ;
-(void)presenceUserPickerItemModuleController:(id)arg1 presentViewController:(id)arg2 ;
-(void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg1 ;
@end

