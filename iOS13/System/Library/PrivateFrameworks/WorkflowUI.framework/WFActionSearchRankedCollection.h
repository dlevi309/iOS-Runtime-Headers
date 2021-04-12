/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {

	NSMutableOrderedSet* _itemsWithExactNameMatch;
	NSMutableOrderedSet* _itemsWithNameMatch;
	NSMutableOrderedSet* _itemsWithCategoryMatch;
	NSMutableOrderedSet* _itemsWithKeywordMatch;

}
-(id)init;
-(id)orderedSetForType:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2 ;
-(id)rankedItems;
@end

