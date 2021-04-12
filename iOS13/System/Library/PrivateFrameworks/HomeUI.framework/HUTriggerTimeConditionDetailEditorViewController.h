/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSignificantEventOffsetPickerDelegate.h>
#import <libobjc.A.dylib/HUDatePickerCellDelegate.h>

@protocol HUTriggerTimeConditionDetailEditorDelegate;
@class HUTriggerTimeConditionDetailEditorItemManager, HFTimeRangeCondition, NSString;

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate, HUDatePickerCellDelegate> {

	id<HUTriggerTimeConditionDetailEditorDelegate> _delegate;

}

@property (nonatomic,readonly) HUTriggerTimeConditionDetailEditorItemManager * itemManager; 
@property (nonatomic,readonly) HFTimeRangeCondition * rangeCondition; 
@property (nonatomic,__weak,readonly) id<HUTriggerTimeConditionDetailEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUTriggerTimeConditionDetailEditorDelegate>)delegate;
-(void)viewDidLoad;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFTimeRangeCondition *)rangeCondition;
-(id)initWithRangeCondition:(id)arg1 delegate:(id)arg2 ;
-(void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2 ;
-(void)datePickerCell:(id)arg1 didSelectDate:(id)arg2 ;
-(id)allCellClasses;
@end

