/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableOrderedSet, NSPointerArray, NSIndexPath, NSArray;

@interface _UICollectionViewDragSourceControllerDragState : NSObject {

	NSMutableOrderedSet* _dataSourceIndexPathsOfDraggingItems;
	NSPointerArray* _dragItemsWithRebasableIndexPaths;

}

@property (nonatomic,retain) NSMutableOrderedSet * dataSourceIndexPathsOfDraggingItems;              //@synthesize dataSourceIndexPathsOfDraggingItems=_dataSourceIndexPathsOfDraggingItems - In the implementation block
@property (nonatomic,retain) NSPointerArray * dragItemsWithRebasableIndexPaths;                      //@synthesize dragItemsWithRebasableIndexPaths=_dragItemsWithRebasableIndexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexPath * dragFromDataSourceIndexPath; 
@property (nonatomic,readonly) NSArray * draggingDataSourceIndexPaths; 
-(id)init;
-(id)description;
-(NSArray *)draggingDataSourceIndexPaths;
-(NSIndexPath *)dragFromDataSourceIndexPath;
-(id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2 ;
-(BOOL)isDraggingFromDataSourceIndexPath:(id)arg1 ;
-(void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3 ;
-(void)addDraggingDataSourceIndexPath:(id)arg1 ;
-(void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1 ;
-(NSMutableOrderedSet *)dataSourceIndexPathsOfDraggingItems;
-(NSPointerArray *)dragItemsWithRebasableIndexPaths;
-(void)setDataSourceIndexPathsOfDraggingItems:(NSMutableOrderedSet *)arg1 ;
-(void)setDragItemsWithRebasableIndexPaths:(NSPointerArray *)arg1 ;
@end

