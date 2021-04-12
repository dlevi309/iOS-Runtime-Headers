/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFActionSetBuilder, NSSet, HFStaticItem, NSMutableDictionary;

@interface HUSceneActionEditorItemManager : HFItemManager {

	HFActionSetBuilder* _actionSetBuilder;
	unsigned long long _mode;
	NSSet* _prioritizedServices;
	HFStaticItem* _nameAndIconItem;
	HFStaticItem* _mediaInstructionsItem;
	HFStaticItem* _mediaItem;
	HFStaticItem* _changeServicesItem;
	HFStaticItem* _testSceneItem;
	HFStaticItem* _favoriteItem;
	HFStaticItem* _deleteSceneItem;
	NSMutableDictionary* _instructionsItemsByEditorType;
	NSMutableDictionary* _actionGridItemsByEditorType;

}

@property (nonatomic,retain) HFActionSetBuilder * actionSetBuilder;                              //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameAndIconItem;                                     //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * instructionsItemsByEditorType;              //@synthesize instructionsItemsByEditorType=_instructionsItemsByEditorType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * actionGridItemsByEditorType;                //@synthesize actionGridItemsByEditorType=_actionGridItemsByEditorType - In the implementation block
@property (nonatomic,retain) HFStaticItem * mediaInstructionsItem;                               //@synthesize mediaInstructionsItem=_mediaInstructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * mediaItem;                                           //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * changeServicesItem;                                  //@synthesize changeServicesItem=_changeServicesItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * testSceneItem;                                       //@synthesize testSceneItem=_testSceneItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * favoriteItem;                                        //@synthesize favoriteItem=_favoriteItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * deleteSceneItem;                                     //@synthesize deleteSceneItem=_deleteSceneItem - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSSet * prioritizedServices;                                          //@synthesize prioritizedServices=_prioritizedServices - In the implementation block
@property (nonatomic,readonly) NSSet * actionGridItems; 
@property (nonatomic,readonly) NSSet * instructionsItems; 
@property (nonatomic,readonly) NSSet * itemsToHideWhenEmpty; 
+(id)sectionIdentifierForActionGridEditorType:(unsigned long long)arg1 ;
+(unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)arg1 ;
+(id)allActionGridEditorSectionIdentifiers;
-(unsigned long long)mode;
-(HFStaticItem *)mediaItem;
-(void)setMediaItem:(HFStaticItem *)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(void)setActionSetBuilder:(HFActionSetBuilder *)arg1 ;
-(HFActionSetBuilder *)actionSetBuilder;
-(HFStaticItem *)nameAndIconItem;
-(void)setPrioritizedServices:(NSSet *)arg1 ;
-(NSMutableDictionary *)actionGridItemsByEditorType;
-(NSMutableDictionary *)instructionsItemsByEditorType;
-(NSSet *)actionGridItems;
-(HFStaticItem *)testSceneItem;
-(HFStaticItem *)favoriteItem;
-(HFStaticItem *)mediaInstructionsItem;
-(void)setNameAndIconItem:(HFStaticItem *)arg1 ;
-(void)_createItemsForActionGridEditorType:(unsigned long long)arg1 home:(id)arg2 ;
-(void)setChangeServicesItem:(HFStaticItem *)arg1 ;
-(void)setTestSceneItem:(HFStaticItem *)arg1 ;
-(void)setFavoriteItem:(HFStaticItem *)arg1 ;
-(void)setDeleteSceneItem:(HFStaticItem *)arg1 ;
-(void)setMediaInstructionsItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)changeServicesItem;
-(HFStaticItem *)deleteSceneItem;
-(NSSet *)prioritizedServices;
-(id)_buildSectionForActionGridEditorType:(unsigned long long)arg1 ;
-(NSSet *)itemsToHideWhenEmpty;
-(id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(NSSet *)instructionsItems;
@end

