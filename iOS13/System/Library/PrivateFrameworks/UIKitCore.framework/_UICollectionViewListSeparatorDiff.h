/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap, NSMutableDictionary, NSArray;

@interface _UICollectionViewListSeparatorDiff : NSObject {

	_UICollectionViewListSnapshotter* _oldSnapshot;
	_UICollectionViewListSnapshotter* _newSnapshot;
	_UIDataSourceUpdateMap* _map;
	NSMutableDictionary* _insertedIndexPaths;
	NSMutableDictionary* _deletedIndexPaths;
	NSArray* _insertedSeparators;
	NSArray* _deletedSeparators;

}
-(void)_mapUpdateItems:(id)arg1 ;
-(void)_prepareInsertsAndDeletes;
-(id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(id)indexPathsToInsertForSeparators;
-(id)indexPathsToDeleteForSeparators;
@end

