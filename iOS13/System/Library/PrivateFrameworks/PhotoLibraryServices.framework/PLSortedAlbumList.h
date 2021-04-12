/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>

@protocol PLAlbumContainer;
@class NSObject, NSMutableOrderedSet, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {

	NSObject*<PLAlbumContainer> _backingAlbumList;
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	/*^block*/id _sortComparator;
	NSMutableOrderedSet* _weak_albums;

}

@property (nonatomic,retain) NSObject*<PLAlbumContainer> backingAlbumList;                    //@synthesize backingAlbumList=_backingAlbumList - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,copy) id sortComparator;                                                 //@synthesize sortComparator=_sortComparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)identifier;
-(id)managedObjectContext;
-(int)filter;
-(NSString *)_typeDescription;
-(id)photoLibrary;
-(id)albums;
-(BOOL)isFolder;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(NSObject*<PLAlbumContainer>)backingAlbumList;
-(NSMutableOrderedSet *)_albums;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(void)setBackingAlbumList:(NSObject*<PLAlbumContainer>)arg1 ;
-(id)initWithAlbumList:(id)arg1 sortComparator:(/*^block*/id)arg2 ;
-(void)createSortedIndexesMap;
-(unsigned long long)countOfSortedAlbums;
-(unsigned long long)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
@end

