/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)tabInsertionHintForPosition:(unsigned long long)arg1 ;
-(id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(id<WBSTabOrderProvider>)tabOrderProvider;
-(id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_tabInsertionHintForNewTabAfterTab:(id)arg1 relation:(unsigned long long)arg2 ;
-(unsigned long long)_indexOfTabToInsertNewTabAfter;
-(unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2 ;
-(unsigned long long)_indexOfLastRelatedTab;
-(BOOL)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2 ;
-(id)tabInsertionHintForNewBlankTab;
-(unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)arg1 ;
-(id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1 ;
-(id)tabInsertionHintForSpawnedTab;
-(unsigned long long)_userPreferredNewSpawnedTabPosition;
-(BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
-(id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(BOOL)arg2 ;
-(BOOL)tab:(id)arg1 isInSameSetAsTab:(id)arg2 ;
-(id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1 ;
-(id)tabToInsertNewBlankTabAfter;
-(id)tabInsertionHintForNewBlankTabInCurrentContext;
-(id)tabToInsertSpawnedTabAfter;
-(id<WBSOrderedTab>)tabToSelectBeforeClosingSelectedTab;
-(id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1 ;
-(void)setTabOrderProvider:(id<WBSTabOrderProvider>)arg1 ;
@end

