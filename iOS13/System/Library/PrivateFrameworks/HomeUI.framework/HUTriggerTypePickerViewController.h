/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@protocol HUTriggerEditorDelegate;
@class HFActionSetBuilder, HUTriggerTypePickerItemManager;

@interface HUTriggerTypePickerViewController : HUItemTableViewController {

	id<HUTriggerEditorDelegate> _delegate;
	HFActionSetBuilder* _actionSetBuilder;

}

@property (nonatomic,retain) HFActionSetBuilder * actionSetBuilder;                       //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,readonly) HUTriggerTypePickerItemManager * itemManager; 
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id<HUTriggerEditorDelegate>)delegate;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)setActionSetBuilder:(HFActionSetBuilder *)arg1 ;
-(HFActionSetBuilder *)actionSetBuilder;
-(id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)_createTriggerEditorForItem:(id)arg1 ;
-(id)_createTriggerBuilderOfClass:(Class)arg1 ;
@end

