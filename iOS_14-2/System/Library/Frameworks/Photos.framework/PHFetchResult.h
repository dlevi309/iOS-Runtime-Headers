/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class PHBatchFetchingArray, NSArray, NSDictionary, NSObject, NSString, NSSet, NSNumber, _PHFetchRequestWrapper, NSError, PHQuery, NSFetchRequest, PHFetchOptions, PHPhotoLibrary;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {

	PHBatchFetchingArray* _fetchedObjects;
	NSArray* _thumbnailAssets;
	NSDictionary* _fetchedPropertySetsCache;
	NSArray* _seedOIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _registeredForChangeNotificationDeltas;
	NSString* _fetchType;
	NSSet* _fetchPropertySets;
	unsigned long long _albumsCount;
	unsigned long long _sharedAlbumsCount;
	unsigned long long _foldersCount;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	unsigned long long _audiosCount;
	NSNumber* _prefetchCount;
	_PHFetchRequestWrapper* _fetchRequestWrapper;
	NSError* _fetchError;
	BOOL _preventsClearingOIDCache;
	PHQuery* _query;
	long long _chunkSizeForFetch;

}

@property (readonly) PHQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (readonly) NSString * fetchType;                                 //@synthesize fetchType=_fetchType - In the implementation block
@property (readonly) NSSet * fetchPropertySets;                            //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (readonly) NSArray * fetchedObjectIDs; 
@property (readonly) NSSet * fetchedObjectIDsSet; 
@property (readonly) NSArray * fetchedObjects; 
@property (readonly) NSFetchRequest * fetchRequest; 
@property (readonly) NSArray * fetchSortDescriptors; 
@property (readonly) NSError * fetchError; 
@property (nonatomic,readonly) PHFetchOptions * fetchOptions; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (assign) long long chunkSizeForFetch;                            //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (assign,nonatomic) BOOL preventsClearingOIDCache;                //@synthesize preventsClearingOIDCache=_preventsClearingOIDCache - In the implementation block
@property (readonly) NSArray * thumbnailAssets; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
+(id)_typesToCountForListCollections;
+(id)filteredOIDsFrom:(id)arg1 usingEntityName:(id)arg2 withPhotoLibrary:(id)arg3 ;
+(id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_typesToCountForAssetCollections;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(BOOL)arg3 ;
+(id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg1 ;
+(id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg1 ;
+(id)pl_fetchResultForAssetContainerList:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(NSSet *)fetchPropertySets;
-(PHQuery *)query;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(NSArray *)fetchedObjects;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PH16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(NSFetchRequest *)fetchRequest;
-(PHPhotoLibrary *)photoLibrary;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)initWithExistingFetchResult:(id)arg1 filteredObjectIDs:(id)arg2 ;
-(id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4 ;
-(void)prefetchThumbnailAssetsAtIndexes:(id)arg1 ;
-(id)fetchedObjectsUsingManagedObjectContext:(id)arg1 ;
-(id)fetchedPropertiesForPropertySetClass:(Class)arg1 ;
-(NSArray *)thumbnailAssets;
-(BOOL)isFullyBackedByObjectIDs;
-(id)fetchPropertiesForPropertySetClass:(Class)arg1 forObjectsAtIndexes:(id)arg2 ;
-(BOOL)_canCreateFetchedPropertyObjectsWithClass:(Class)arg1 ;
-(id)_createFetchedPropertyObjectsWithClass:(Class)arg1 fetchedObjectIDs:(id)arg2 ;
-(unsigned long long)countOfAssetCollections;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isRegisteredForChangeNotificationDeltas;
-(void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1 ;
-(unsigned long long)_possibleChangesFromDetectionCriteriaForChange:(id)arg1 ;
-(unsigned long long)countOfCollectionsLists;
-(id)localIdentifiers;
-(unsigned long long)cachedCountOfCollectionsWithCollectionTypes:(id)arg1 ;
-(void)getCountOfCollectionsWithCollectionTypes:(id)arg1 ;
-(BOOL)preventsClearingOIDCache;
-(void)setPreventsClearingOIDCache:(BOOL)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)count;
-(id)objectIDs;
-(NSError *)fetchError;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id)pl_photoLibraryObject;
-(id)lastObject;
-(void)getMediaTypeCounts;
-(id)containerIdentifier;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)fetchedObjectIDs;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(long long)chunkSizeForFetch;
-(NSString *)fetchType;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
-(PHFetchOptions *)fetchOptions;
-(NSArray *)fetchSortDescriptors;
-(id)initWithQuery:(id)arg1 ;
-(NSSet *)fetchedObjectIDsSet;
-(id)copyWithOptions:(id)arg1 ;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)changeHandlingKey;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)dealloc;
-(void)updateRegistrationForChangeNotificationDeltas;
@end

