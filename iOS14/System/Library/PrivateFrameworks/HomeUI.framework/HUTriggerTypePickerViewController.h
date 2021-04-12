/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@protocol HUTriggerEditorDelegate;
@class HFActionSetBuilder, NSArray, HUTriggerTypePickerItemManager;

@interface HUTriggerTypePickerViewController : HUItemTableViewController {

	id<HUTriggerEditorDelegate> _delegate;
	HFActionSetBuilder* _actionSetBuilder;
	NSArray* _anonymousActionBuilders;

}

@property (nonatomic,retain) HFActionSetBuilder * actionSetBuilder;                       //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,retain) NSArray * anonymousActionBuilders;                           //@synthesize anonymousActionBuilders=_anonymousActionBuilders - In the implementation block
@property (nonatomic,readonly) HUTriggerTypePickerItemManager * itemManager; 
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(HFActionSetBuilder *)actionSetBuilder;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(void)setActionSetBuilder:(HFActionSetBuilder *)arg1 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2 ;
-(id)initWithActionSetBuilder:(id)arg1 anonymousActionBuilders:(id)arg2 delegate:(id)arg3 ;
-(id)_createTriggerEditorForItem:(id)arg1 ;
-(id)_createTriggerBuilderOfClass:(Class)arg1 ;
-(NSArray *)anonymousActionBuilders;
-(void)setAnonymousActionBuilders:(NSArray *)arg1 ;
@end

