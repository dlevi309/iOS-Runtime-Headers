/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSMutableDictionary, NSArray, NSObject, NSMapTable, NSManagedObjectContext, PHPersistentChangeToken;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSMutableDictionary* _updatedObjectsChangedAttributesByEntityName;
	NSMutableDictionary* _updatedObjectsChangedRelationshipsByEntityName;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	BOOL _unknownMergeEvent;
	NSMutableDictionary* _objectIDsByLocalIdentifier;
	NSManagedObjectContext* _context;
	NSDictionary* _deletedUuidsByObjectId;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) NSManagedObjectContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDictionary * deletedUuidsByObjectId;              //@synthesize deletedUuidsByObjectId=_deletedUuidsByObjectId - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long totalChangeCount; 
+(id)mergePersistedChanges:(id)arg1 ;
+(id)handlerQueue;
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 photoLibrary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_propertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 ;
-(BOOL)containsChangesForEntityClass:(Class)arg1 ;
-(BOOL)contentOrThumbnailChangedForPHAssetOID:(id)arg1 ;
-(id)init;
-(id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2 ;
-(id)updatedObjectIDs;
-(id)_relationshipNamesForObjectID:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)favoriteStateChangedForPHAssetOID:(id)arg1 ;
-(unsigned long long)totalChangeCount;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(BOOL)keyFaceChangedForPersonOID:(id)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 changedAttributesByOID:(id)arg5 changedRelationshipsByOID:(id)arg6 unknownMergeEvent:(BOOL)arg7 changeToken:(id)arg8 managedObjectContext:(id)arg9 ;
-(id)insertedObjectIDs;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2 ;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1 ;
-(NSManagedObjectContext *)context;
-(id)changedPropertyNamesForObject:(id)arg1 ;
-(void)_prepareCachedValuesForEntity:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)description;
-(id)_formatedDeletedUUidsByObjectId;
-(BOOL)packedBadgeAttributesChangedForPHAssetOID:(id)arg1 ;
-(id)changedRelationshipNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1 ;
-(id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(/*^block*/id)arg2 ;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg1 ;
-(BOOL)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(id)fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 context:(id)arg3 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)deletedObjectIDs;
-(BOOL)hasIncrementalChanges;
-(id)changedRelationshipsByOID;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)keyAssetsChangedForPHAssetCollectionOID:(id)arg1 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 changeToken:(id)arg3 ;
-(id)changeDetailsForObject:(id)arg1 ;
-(BOOL)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(BOOL)intersectsWithDetectionCriteria:(id)arg1 managedObjectContext:(id)arg2 ;
-(PHPersistentChangeToken *)changeToken;
-(BOOL)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1 ;
-(id)changedRelationshipNamesForObject:(id)arg1 ;
-(BOOL)trashedStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)contentOrThumbnailChangedForAsset:(id)arg1 ;
-(NSDictionary *)deletedUuidsByObjectId;
-(BOOL)hiddenStateChangedForPHAssetOID:(id)arg1 ;
-(id)changedAttributesByOID;
-(BOOL)hasRelationshipChangesForLocalIdentifier:(id)arg1 ;
-(BOOL)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1 ;
@end

