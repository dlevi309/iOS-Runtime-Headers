/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/_PLManagedAlbumList.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLDerivedAlbumListOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSObject, NSNumber, NSMutableOrderedSet;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivedAlbumLists[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,copy) NSNumber * identifier; 
@property (nonatomic,copy) NSNumber * needsReorderingNumber; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (assign,nonatomic) short albumListType; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) BOOL hasAtLeastOneAlbum; 
@property (nonatomic,readonly) BOOL canEditAlbums; 
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
+(void)initialize;
+(id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2 ;
+(BOOL)albumKindHasFixedOrder:(int)arg1 ;
+(id)facesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)_typeDescriptionForAlbumListType:(short)arg1 ;
+(unsigned long long)priorityForAlbumKind:(int)arg1 ;
+(id)allStreamedAlbumsListInManagedObjectContext:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)_singletonListWithType:(short)arg1 library:(id)arg2 ;
+(id)importListInManagedObjectContext:(id)arg1 ;
+(void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 pathManager:(id)arg3 allowsOverwrite:(BOOL)arg4 ;
+(id)importListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)albumListInManagedObjectContext:(id)arg1 ;
+(BOOL)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2 ;
+(id)allStreamedAlbumsListInPhotoLibrary:(id)arg1 ;
+(id)scenesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)eventListInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)placesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)eventListInPhotoLibrary:(id)arg1 ;
+(BOOL)isValidTypeForPersistence:(short)arg1 ;
+(BOOL)isValidPathForPersistence:(id)arg1 ;
+(id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2 ;
+(id)scenesAlbumListInManagedObjectContext:(id)arg1 ;
+(BOOL)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2 ;
+(id)placesAlbumListInPhotoLibrary:(id)arg1 ;
+(void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2 ;
+(id)albumListInPhotoLibrary:(id)arg1 ;
-(id)payloadID;
-(void)unregisterAllDerivedAlbums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(id)containers;
-(void)registerDerivedAlbumList:(id)arg1 ;
-(NSMutableOrderedSet *)albums;
-(void)awakeFromFetch;
-(void)unregisterForChanges;
-(void)didSave;
-(BOOL)hasAtLeastOneAlbum;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)setNeedsReordering;
-(NSString *)_prettyDescription;
-(void)awakeFromInsert;
-(NSString *)_typeDescription;
-(BOOL)needsReordering;
-(unsigned long long)albumsCount;
-(unsigned long long)containersCount;
-(unsigned long long)unreadAlbumsCount;
-(void)willTurnIntoFault;
-(BOOL)canEditContainers;
-(id)payloadIDForTombstone:(id)arg1 ;
-(BOOL)canEditAlbums;
-(BOOL)hasDerivedIndexMappers;
-(void)willSave;
-(void)updateAlbumsOrderIfNeeded;
-(void)registerForChanges;
-(int)filter;
-(id)containersRelationshipName;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(short)albumListType;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)enumerateDerivedAlbumLists:(/*^block*/id)arg1 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(BOOL)isFolder;
-(void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1 ;
-(BOOL)isRegisteredForChanges;
-(BOOL)isEmpty;
-(id)_albumsCountFetchRequest;
-(id)albumsSortingComparator;
-(void)setAlbumListType:(short)arg1 ;
-(void)dealloc;
@end

