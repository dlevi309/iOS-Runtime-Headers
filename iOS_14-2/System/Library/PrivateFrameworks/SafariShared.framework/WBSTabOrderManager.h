/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSTabOrderProvider;
@class NSMutableDictionary;

@interface WBSTabOrderManager : NSObject {

	NSMutableDictionary* _simplifiedIdentifierMap;
	long long _nextSimplifiedIdentifier;
	id<WBSTabOrderProvider> _tabOrderProvider;

}

@property (assign,nonatomic,__weak) id<WBSTabOrderProvider> tabOrderProvider;                      //@synthesize tabOrderProvider=_tabOrderProvider - In the implementation block
@property (nonatomic,readonly) id<WBSOrderedTab> tabToSelectBeforeClosingSelectedTab; 
-(id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1 ;
-(unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(id)init;
-(id)tabInsertionHintForNewBlankTabInCurrentContext;
-(id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(id)_tabInsertionHintForNewTabAfterTab:(id)arg1 relation:(unsigned long long)arg2 ;
-(unsigned long long)_indexOfTabToInsertNewTabAfter;
-(id)tabToInsertSpawnedTabAfter;
-(id)tabInsertionHintForNewBlankTab;
-(BOOL)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2 ;
-(id)tabInsertionHintForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_userPreferredNewSpawnedTabPosition;
-(BOOL)tab:(id)arg1 isInSameSetAsTab:(id)arg2 ;
-(id<WBSOrderedTab>)tabToSelectBeforeClosingSelectedTab;
-(id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1 ;
-(BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
-(id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1 ;
-(id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(BOOL)arg2 ;
-(id<WBSTabOrderProvider>)tabOrderProvider;
-(void)setTabOrderProvider:(id<WBSTabOrderProvider>)arg1 ;
-(id)tabInsertionHintForDuplicateOfTab:(id)arg1 ;
-(id)tabToInsertNewBlankTabAfter;
-(unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)arg1 ;
-(id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2 ;
-(id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)tabInsertionHintForSpawnedTab;
-(unsigned long long)_indexOfLastRelatedTab;
@end

