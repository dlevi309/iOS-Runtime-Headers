/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUDayOfWeekPickerCellDelegate.h>
#import <libobjc.A.dylib/HUTimerTriggerOffsetEditorDelegate.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUInlineDatePickerCellDelegate.h>

@protocol HUTriggerEditorDelegate;
@class HFTimerTriggerBuilder, HUTriggerConditionEditorItemModuleController, HFItem, HUGridLayoutOptions, HUTimerTriggerEditorItemManager, NSDateComponents, NSArray, NSString;

@interface HUTimerTriggerEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUTimerTriggerOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate> {

	HFTimerTriggerBuilder* _timerTriggerBuilder;
	unsigned long long _mode;
	id<HUTriggerEditorDelegate> _delegate;
	HUTriggerConditionEditorItemModuleController* _conditionModuleController;
	HFItem* _selectedDateOptionItem;
	HUGridLayoutOptions* _layoutOptions;

}

@property (nonatomic,retain) HUTimerTriggerEditorItemManager * itemManager; 
@property (nonatomic,retain) HFTimerTriggerBuilder * timerTriggerBuilder;                                             //@synthesize timerTriggerBuilder=_timerTriggerBuilder - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModuleController * conditionModuleController;              //@synthesize conditionModuleController=_conditionModuleController - In the implementation block
@property (nonatomic,retain) HFItem * selectedDateOptionItem;                                                         //@synthesize selectedDateOptionItem=_selectedDateOptionItem - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedFireTimeComponents; 
@property (nonatomic,retain) NSArray * selectedRecurrences; 
@property (nonatomic,retain) NSDateComponents * selectedSignificantEventOffset; 
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                                     //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)mode;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)_cancel:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(NSArray *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSArray *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)itemModuleControllers;
-(BOOL)_canCommitTriggerBuilder;
-(id)_commitTriggerBuilder;
-(id)initWithTimerTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)_showSummary:(id)arg1 ;
-(void)_showActionEditor:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2 ;
-(void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2 ;
-(void)datePickerCell:(id)arg1 didSelectDate:(id)arg2 ;
-(void)setTimerTriggerBuilder:(HFTimerTriggerBuilder *)arg1 ;
-(HFTimerTriggerBuilder *)timerTriggerBuilder;
-(void)setSelectedDateOptionItem:(HFItem *)arg1 ;
-(id)_selectedSignificantEvent;
-(BOOL)_canContinue;
-(void)setSelectedFireTimeComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)selectedFireTimeComponents;
-(HUTriggerConditionEditorItemModuleController *)conditionModuleController;
-(HFItem *)selectedDateOptionItem;
-(id)_instructionsSectionIDs;
-(NSDateComponents *)selectedSignificantEventOffset;
-(id)_localizedRecurrenceDescripiton;
-(void)setSelectedSignificantEventOffset:(NSDateComponents *)arg1 ;
-(void)timerTriggerOffsetEditor:(id)arg1 didFinishWithOffset:(id)arg2 ;
-(void)timerTriggerOffsetEditorDidCancel:(id)arg1 ;
-(void)_changeFireTime:(id)arg1 ;
@end

