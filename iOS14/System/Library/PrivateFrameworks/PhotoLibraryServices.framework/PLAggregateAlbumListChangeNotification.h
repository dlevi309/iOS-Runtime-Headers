/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)deletedIndexes;
-(id)insertedIndexes;
-(id)object;
-(id)insertedObjects;
-(BOOL)shouldReload;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)albumList;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)changedObjects;
-(id)deletedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(id)changedIndexesRelativeToSnapshot;
-(id)changedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

