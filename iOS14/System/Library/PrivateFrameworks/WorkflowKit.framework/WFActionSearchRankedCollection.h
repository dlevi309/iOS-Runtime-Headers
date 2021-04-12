/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
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

