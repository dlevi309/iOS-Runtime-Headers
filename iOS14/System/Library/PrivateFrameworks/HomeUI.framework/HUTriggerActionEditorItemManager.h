/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFSimpleItemManager.h>

@class HUButtonItem, HUViewControllerTableViewItem, HUInstructionsItem, HUTriggerHeaderItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager {

	HUButtonItem* _addShortcutItem;
	HUViewControllerTableViewItem* _gridItem;
	HUInstructionsItem* _instructionsItem;
	HUTriggerHeaderItem* _addShortcutHeader;

}

@property (nonatomic,retain) HUViewControllerTableViewItem * gridItem;              //@synthesize gridItem=_gridItem - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                 //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HUTriggerHeaderItem * addShortcutHeader;               //@synthesize addShortcutHeader=_addShortcutHeader - In the implementation block
@property (nonatomic,retain) HUButtonItem * addShortcutItem;                        //@synthesize addShortcutItem=_addShortcutItem - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUViewControllerTableViewItem *)gridItem;
-(HUInstructionsItem *)instructionsItem;
-(id)initWithInstructionsItem:(id)arg1 andDelegate:(id)arg2 showShortcutItem:(BOOL)arg3 ;
-(HUButtonItem *)addShortcutItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(HUTriggerHeaderItem *)addShortcutHeader;
-(void)setAddShortcutItem:(HUButtonItem *)arg1 ;
-(void)setGridItem:(HUViewControllerTableViewItem *)arg1 ;
-(void)setAddShortcutHeader:(HUTriggerHeaderItem *)arg1 ;
@end

