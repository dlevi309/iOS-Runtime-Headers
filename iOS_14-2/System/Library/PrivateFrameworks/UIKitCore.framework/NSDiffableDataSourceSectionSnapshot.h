/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _NSDiffableDataSourceSectionSnapshotState, NSMutableArray, NSArray, NSOrderedSet, NSIndexSet;

@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying> {

	_NSDiffableDataSourceSectionSnapshotState* _state;
	NSMutableArray* _expandedItemsUpdates;
	NSMutableArray* _collapsedItemsUpdates;

}

@property (nonatomic,readonly) _NSDiffableDataSourceSectionSnapshotState * _state; 
@property (nonatomic,readonly) NSArray * _rootItems; 
@property (nonatomic,readonly) NSOrderedSet * _itemsOrderedSet; 
@property (nonatomic,readonly) NSOrderedSet * _visibleItemsOrderedSet; 
@property (nonatomic,readonly) NSIndexSet * _visibleIndexes; 
@property (nonatomic,readonly) NSArray * expandedItemsUpdates; 
@property (nonatomic,readonly) NSArray * collapsedItemsUpdates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * rootItems; 
@property (nonatomic,readonly) NSArray * visibleItems; 
-(id)visualDescription;
-(id)initWithState:(id)arg1 ;
-(void)deleteAllItems;
-(_NSDiffableDataSourceSectionSnapshotState *)_state;
-(id)init;
-(void)replaceChildrenOfParentItem:(id)arg1 withSnapshot:(id)arg2 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 insertionMode:(long long)arg3 ;
-(id)childSnapshotOfParent:(id)arg1 includingParent:(BOOL)arg2 ;
-(NSArray *)items;
-(long long)levelOfItem:(id)arg1 ;
-(void)expandItems:(id)arg1 ;
-(id)description;
-(BOOL)isVisible:(id)arg1 ;
-(NSArray *)_rootItems;
-(void)deleteItems:(id)arg1 orphanDisposition:(long long)arg2 ;
-(id)expandedItems;
-(void)collapseItems:(id)arg1 ;
-(NSArray *)rootItems;
-(BOOL)isExpanded:(id)arg1 ;
-(id)parentOfChild:(id)arg1 ;
-(void)appendItems:(id)arg1 intoParent:(id)arg2 ;
-(id)childrenOfParent:(id)arg1 recursive:(BOOL)arg2 ;
-(id)childrenOfParent:(id)arg1 ;
-(NSArray *)visibleItems;
-(id)initWithSnapshot:(id)arg1 ;
-(NSOrderedSet *)_itemsOrderedSet;
-(NSArray *)collapsedItemsUpdates;
-(NSArray *)expandedItemsUpdates;
-(NSOrderedSet *)_visibleItemsOrderedSet;
-(id)_indexesOfChildrenForParent:(id)arg1 recursive:(BOOL)arg2 ;
-(id)childSnapshotOfParent:(id)arg1 ;
-(void)setChildrenWithSnapshot:(id)arg1 forParent:(id)arg2 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(id)snapshotter;
-(long long)indexOfItem:(id)arg1 ;
-(id)_indexesOfItems:(id)arg1 ;
-(void)appendItems:(id)arg1 intoParentItem:(id)arg2 ;
-(id)snapshotOfParentItem:(id)arg1 ;
-(void)insertSnapshot:(id)arg1 beforeItem:(id)arg2 ;
-(id)_indexesOfItems:(id)arg1 ignoringItemsNotFound:(BOOL)arg2 ;
-(id)snapshotOfParentItem:(id)arg1 includingParentItem:(BOOL)arg2 ;
-(id)parentOfChildItem:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)insertSnapshot:(id)arg1 afterItem:(id)arg2 ;
-(void)_replaceItem:(id)arg1 withItem:(id)arg2 ;
-(BOOL)_itemHasChildren:(id)arg1 ;
-(NSIndexSet *)_visibleIndexes;
-(id)_itemBeforeItem:(id)arg1 ;
-(id)_itemAfterItem:(id)arg1 ;
-(void)insertItems:(id)arg1 beforeItem:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendItems:(id)arg1 ;
-(long long)levelForItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)deleteItems:(id)arg1 ;
@end

