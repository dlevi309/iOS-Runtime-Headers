/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>
#import <libobjc.A.dylib/PLDerivedAlbumListOrigin.h>

@protocol PLIndexMappingCache;
@class PLIndexMapper, NSMutableIndexSet, NSMutableOrderedSet, NSObject, PLManagedAlbumList, NSPredicate, PLPhotoLibrary, NSString, NSIndexSet;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin> {

	PLIndexMapper* _indexMapper;
	NSMutableIndexSet* _filteredIndexes;
	NSMutableOrderedSet* _weak_albums;
	NSObject*<PLIndexMappingCache> _derivedAlbumLists[5];
	int filter;
	PLManagedAlbumList* backingAlbumList;
	NSPredicate* predicate;

}

@property (nonatomic,retain) PLManagedAlbumList * backingAlbumList; 
@property (assign,nonatomic) int filter; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,readonly) short albumListType; 
@property (nonatomic,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,readonly) BOOL canEditAlbums; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(id)filteredAlbumList:(id)arg1 filter:(int)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isEmpty;
-(id)identifier;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)managedObjectContext;
-(void)setFilter:(int)arg1 ;
-(int)filter;
-(NSString *)_typeDescription;
-(PLPhotoLibrary *)photoLibrary;
-(NSMutableOrderedSet *)albums;
-(BOOL)isFolder;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(void)unregisterAllDerivedAlbums;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)filteredIndexes;
-(PLIndexMapper *)indexMapper;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(void)registerDerivedAlbumList:(id)arg1 ;
-(void)enumerateDerivedAlbumLists:(/*^block*/id)arg1 ;
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
-(PLManagedAlbumList *)backingAlbumList;
-(id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2 ;
-(void)_backingContextDidChange:(id)arg1 ;
-(void)_invalidateFilteredIndexes;
-(NSMutableOrderedSet *)_albums;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)countOfFilteredAlbums;
-(unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1 ;
-(id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(id)filteredAlbumsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeFilteredAlbumsAtIndexes:(id)arg1 ;
-(void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2 ;
-(void)setBackingAlbumList:(PLManagedAlbumList *)arg1 ;
@end

