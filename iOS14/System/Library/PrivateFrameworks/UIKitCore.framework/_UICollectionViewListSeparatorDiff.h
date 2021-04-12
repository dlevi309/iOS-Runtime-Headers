/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)indexPathsToDeleteForSeparators;
-(void)_mapUpdateItems:(id)arg1 ;
-(id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(id)indexPathsToInsertForSeparators;
-(void)_prepareInsertsAndDeletes;
@end

