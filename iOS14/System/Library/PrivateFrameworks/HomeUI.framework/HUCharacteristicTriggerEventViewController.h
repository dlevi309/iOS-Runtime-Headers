/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUPickerCellDelegate.h>

@protocol HUTriggerEditorDelegate;
@class HFCharacteristicTriggerBuilder, HUTriggerConditionEditorItemModuleController, HUCharacteristicEventOptionItem, HUCharacteristicTriggerEventItemManager, NSString;

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate> {

	HFCharacteristicTriggerBuilder* _characteristicTriggerBuilder;
	unsigned long long _mode;
	id<HUTriggerEditorDelegate> _delegate;
	HUTriggerConditionEditorItemModuleController* _conditionModuleController;
	HUCharacteristicEventOptionItem* _selectedEventOptionItem;

}

@property (nonatomic,retain) HFCharacteristicTriggerBuilder * characteristicTriggerBuilder;                           //@synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) HUCharacteristicTriggerEventItemManager * itemManager; 
@property (nonatomic,readonly) HUTriggerConditionEditorItemModuleController * conditionModuleController;              //@synthesize conditionModuleController=_conditionModuleController - In the implementation block
@property (nonatomic,retain) HUCharacteristicEventOptionItem * selectedEventOptionItem;                               //@synthesize selectedEventOptionItem=_selectedEventOptionItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)mode;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)itemModuleControllers;
-(HFCharacteristicTriggerBuilder *)characteristicTriggerBuilder;
-(BOOL)_canCommitTriggerBuilder;
-(id)_commitTriggerBuilder;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)_showSummary:(id)arg1 ;
-(void)_showActionEditor:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2 ;
-(void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2 ;
-(void)_validateNextButton;
-(void)setCharacteristicTriggerBuilder:(HFCharacteristicTriggerBuilder *)arg1 ;
-(BOOL)_canContinue;
-(HUTriggerConditionEditorItemModuleController *)conditionModuleController;
-(void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2 ;
-(BOOL)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2 ;
-(long long)numberOfValuesForPickerViewCell:(id)arg1 ;
-(id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2 ;
-(HUCharacteristicEventOptionItem *)selectedEventOptionItem;
-(void)setSelectedEventOptionItem:(HUCharacteristicEventOptionItem *)arg1 ;
-(void)_updateTriggerBuilder;
-(void)_updateVisibleCellCheckmarks;
@end

