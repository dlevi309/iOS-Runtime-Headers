/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>
#import <libobjc.A.dylib/PLDeletableManagedObject.h>

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject> {

	BOOL _needsPersistenceUpdate;
	BOOL _needsFixedOrderKeysComplianceUpdate;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                           //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;              //@synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * childCollections; 
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
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)childKeyForOrdering;
+(id)entityName;
+(id)insertNewFolderWithTitle:(id)arg1 kind:(int)arg2 intoLibrary:(id)arg3 ;
+(id)localizedRecoveredTitle;
+(id)validKindsForPersistence;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
-(long long)cloudDeletionType;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(unsigned long long)assetsCount;
-(id)containers;
-(id)assets;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(id)albums;
-(unsigned long long)videosCount;
-(void)didSave;
-(BOOL)hasAtLeastOneAlbum;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsReordering;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
-(BOOL)needsReordering;
-(unsigned long long)albumsCount;
-(unsigned long long)containersCount;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditContainers;
-(BOOL)canEditAlbums;
-(id)mutableAssets;
-(id)childKeyForOrdering;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canPerformDeleteOperation;
-(void)willSave;
-(void)updateAlbumsOrderIfNeeded;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(int)filter;
-(id)containersRelationshipName;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addChildCollections:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(unsigned long long)photosCount;
-(unsigned long long)count;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(short)albumListType;
-(void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg1 ;
-(unsigned long long)approximateCount;
-(id)identifier;
-(BOOL)isEmpty;
-(id)albumsSortingComparator;
-(void)_enforceFixedOrderKeyCompliance;
-(void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg1 ;
-(void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)addChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollectionsObject:(id)arg1 ;
-(BOOL)needsFixedOrderKeysComplianceUpdate;
-(void)setNeedsFixedOrderKeysComplianceUpdate:(BOOL)arg1 ;
-(id)descriptionOfChildCollectionOrderValues;
-(void)refreshCollections;
@end

