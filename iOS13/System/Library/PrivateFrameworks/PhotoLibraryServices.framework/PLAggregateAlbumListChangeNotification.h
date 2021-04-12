/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)object;
-(id)insertedObjects;
-(id)insertedIndexes;
-(id)deletedIndexes;
-(id)deletedObjects;
-(id)changedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldReload;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)changedIndexesRelativeToSnapshot;
-(id)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(id)albumList;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
@end

