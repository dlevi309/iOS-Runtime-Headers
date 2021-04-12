/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFSimpleItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager {

	HFStaticItem* _gridItem;
	HFStaticItem* _addShortcutHeader;
	HFStaticItem* _addShortcutItem;
	HUInstructionsItem* _instructionsItem;

}

@property (nonatomic,retain) HFStaticItem * gridItem;                            //@synthesize gridItem=_gridItem - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;              //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * addShortcutHeader;                   //@synthesize addShortcutHeader=_addShortcutHeader - In the implementation block
@property (nonatomic,retain) HFStaticItem * addShortcutItem;                     //@synthesize addShortcutItem=_addShortcutItem - In the implementation block
-(HFStaticItem *)gridItem;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(id)initWithInstructionsItem:(id)arg1 andDelegate:(id)arg2 showShortcutItem:(BOOL)arg3 ;
-(HFStaticItem *)addShortcutHeader;
-(HFStaticItem *)addShortcutItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(void)setGridItem:(HFStaticItem *)arg1 ;
-(void)setAddShortcutHeader:(HFStaticItem *)arg1 ;
-(void)setAddShortcutItem:(HFStaticItem *)arg1 ;
@end

