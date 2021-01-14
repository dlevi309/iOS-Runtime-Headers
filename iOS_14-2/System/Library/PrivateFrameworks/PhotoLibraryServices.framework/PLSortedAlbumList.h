/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(id)containers;
-(id)albums;
-(BOOL)hasAtLeastOneAlbum;
-(void)setNeedsReordering;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
-(BOOL)needsReordering;
-(unsigned long long)albumsCount;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditContainers;
-(BOOL)canEditAlbums;
-(void)updateAlbumsOrderIfNeeded;
-(int)filter;
-(id)containersRelationshipName;
-(id)photoLibrary;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(NSObject*<PLAlbumContainer>)backingAlbumList;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(short)albumListType;
-(NSMutableOrderedSet *)_albums;
-(BOOL)isFolder;
-(void)setBackingAlbumList:(NSObject*<PLAlbumContainer>)arg1 ;
-(id)identifier;
-(BOOL)isEmpty;
-(Class)derivedChangeNotificationClass;
-(id)albumsSortingComparator;
-(id)initWithAlbumList:(id)arg1 sortComparator:(/*^block*/id)arg2 ;
-(void)createSortedIndexesMap;
-(unsigned long long)countOfSortedAlbums;
-(unsigned long long)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(void)dealloc;
-(id<NSObject><NSCopying>)cachedIndexMapState;
@end

