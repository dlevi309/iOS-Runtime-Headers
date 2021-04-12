/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableSet, NSSet;

@interface _UICollectionViewSelectionController : NSObject {

	NSMutableSet* _selectedIndexPaths;
	NSMutableSet* _highlightedIndexPaths;
	NSMutableSet* _nonvisibleTrackedSelectedIdentifiers;
	BOOL _allowsMultipleSelection;

}

@property (nonatomic,readonly) long long selectedItemsCount; 
@property (nonatomic,readonly) long long highlightedItemsCount; 
@property (nonatomic,copy,readonly) NSSet * selectedIndexPaths; 
@property (nonatomic,copy,readonly) NSSet * highlightedIndexPaths; 
@property (assign,nonatomic) BOOL allowsMultipleSelection;                      //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
-(BOOL)allowsMultipleSelection;
-(BOOL)isHighlightedAtIndexPath:(id)arg1 ;
-(id)init;
-(id)rebaseIndexPath:(id)arg1 withTranslator:(id)arg2 ;
-(void)selectItemsAtIndexPaths:(id)arg1 ;
-(long long)highlightedItemsCount;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(void)unhighlightItemsAtIndexPaths:(id)arg1 ;
-(id)rebaseIndexPath:(id)arg1 withDiffableTransaction:(id)arg2 ;
-(void)highlightItemsAtIndexPaths:(id)arg1 ;
-(id)selectedIdentifiersForSnapshot:(id)arg1 ;
-(void)unhighlightAllItems;
-(void)highlightItemAtIndexPath:(id)arg1 ;
-(NSSet *)highlightedIndexPaths;
-(id)highlightedIdentifiersForSnapshot:(id)arg1 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)unhighlightItemAtIndexPath:(id)arg1 ;
-(void)reset;
-(void)rebaseItemsWithDiffableTransaction:(id)arg1 ;
-(long long)selectedItemsCount;
-(void)rebaseItemsWithTranslator:(id)arg1 ;
-(void)deselectAllItems;
-(void)deselectItemAtIndexPath:(id)arg1 ;
-(BOOL)isSelectedAtIndexPath:(id)arg1 ;
-(NSSet *)selectedIndexPaths;
-(void)deselectItemsAtIndexPaths:(id)arg1 ;
@end

