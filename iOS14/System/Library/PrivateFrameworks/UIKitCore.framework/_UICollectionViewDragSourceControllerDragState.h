/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableOrderedSet, NSPointerArray, NSIndexPath, NSArray;

@interface _UICollectionViewDragSourceControllerDragState : NSObject {

	BOOL _dragItemsCreatedForReordering;
	NSMutableOrderedSet* _dataSourceIndexPathsOfDraggingItems;
	NSPointerArray* _dragItemsWithRebasableIndexPaths;

}

@property (nonatomic,retain) NSMutableOrderedSet * dataSourceIndexPathsOfDraggingItems;              //@synthesize dataSourceIndexPathsOfDraggingItems=_dataSourceIndexPathsOfDraggingItems - In the implementation block
@property (nonatomic,retain) NSPointerArray * dragItemsWithRebasableIndexPaths;                      //@synthesize dragItemsWithRebasableIndexPaths=_dragItemsWithRebasableIndexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexPath * dragFromDataSourceIndexPath; 
@property (nonatomic,readonly) NSArray * draggingDataSourceIndexPaths; 
@property (assign,nonatomic) BOOL dragItemsCreatedForReordering;                                     //@synthesize dragItemsCreatedForReordering=_dragItemsCreatedForReordering - In the implementation block
-(id)init;
-(id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2 ;
-(void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3 ;
-(id)description;
-(BOOL)dragItemsCreatedForReordering;
-(NSArray *)draggingDataSourceIndexPaths;
-(NSIndexPath *)dragFromDataSourceIndexPath;
-(void)setDragItemsCreatedForReordering:(BOOL)arg1 ;
-(BOOL)isDraggingFromDataSourceIndexPath:(id)arg1 ;
-(void)addDraggingDataSourceIndexPath:(id)arg1 ;
-(void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1 ;
-(NSMutableOrderedSet *)dataSourceIndexPathsOfDraggingItems;
-(NSPointerArray *)dragItemsWithRebasableIndexPaths;
-(void)setDataSourceIndexPathsOfDraggingItems:(NSMutableOrderedSet *)arg1 ;
-(void)setDragItemsWithRebasableIndexPaths:(NSPointerArray *)arg1 ;
@end

