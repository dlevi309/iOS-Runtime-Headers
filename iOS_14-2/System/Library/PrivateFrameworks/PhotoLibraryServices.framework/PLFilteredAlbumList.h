/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(id)filteredAlbumList:(id)arg1 filter:(int)arg2 ;
-(void)unregisterAllDerivedAlbums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(id)containers;
-(void)registerDerivedAlbumList:(id)arg1 ;
-(NSMutableOrderedSet *)albums;
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
-(void)setFilter:(int)arg1 ;
-(int)filter;
-(NSPredicate *)predicate;
-(id)containersRelationshipName;
-(id)filteredAlbumsAtIndexes:(id)arg1 ;
-(id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
-(unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(PLIndexMapper *)indexMapper;
-(void)_backingContextDidChange:(id)arg1 ;
-(PLManagedAlbumList *)backingAlbumList;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned long long)countOfFilteredAlbums;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(NSIndexSet *)filteredIndexes;
-(short)albumListType;
-(NSMutableOrderedSet *)_albums;
-(NSString *)description;
-(void)enumerateDerivedAlbumLists:(/*^block*/id)arg1 ;
-(void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2 ;
-(BOOL)isFolder;
-(void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)setBackingAlbumList:(PLManagedAlbumList *)arg1 ;
-(id)identifier;
-(void)removeFilteredAlbumsAtIndexes:(id)arg1 ;
-(id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(void)_invalidateFilteredIndexes;
-(Class)derivedChangeNotificationClass;
-(id)albumsSortingComparator;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(void)dealloc;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2 ;
@end

