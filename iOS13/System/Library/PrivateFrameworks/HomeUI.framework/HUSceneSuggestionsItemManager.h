/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HFActionSetSuggestionItemProvider;

@interface HUSceneSuggestionsItemManager : HFItemManager {

	HFItem* _addCustomSceneItem;
	HFActionSetSuggestionItemProvider* _suggestionItemProvider;

}

@property (nonatomic,retain) HFActionSetSuggestionItemProvider * suggestionItemProvider;              //@synthesize suggestionItemProvider=_suggestionItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * addCustomSceneItem;                                             //@synthesize addCustomSceneItem=_addCustomSceneItem - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(HFItem *)addCustomSceneItem;
-(id)_currentSectionIdentifiers;
-(void)setAddCustomSceneItem:(HFItem *)arg1 ;
-(void)setSuggestionItemProvider:(HFActionSetSuggestionItemProvider *)arg1 ;
-(HFActionSetSuggestionItemProvider *)suggestionItemProvider;
@end

