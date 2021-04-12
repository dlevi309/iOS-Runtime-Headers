/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class PHBatchFetchingArray, NSArray, NSObject, NSString, NSSet, NSNumber, _PHFetchRequestWrapper, PHQuery, NSFetchRequest, PHFetchOptions, PHPhotoLibrary;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {

	PHBatchFetchingArray* _fetchedObjects;
	PHBatchFetchingArray* _thumbnailAssets;
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
@property (nonatomic,readonly) PHFetchOptions * fetchOptions; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (assign) long long chunkSizeForFetch;                            //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (assign,nonatomic) BOOL preventsClearingOIDCache;                //@synthesize preventsClearingOIDCache=_preventsClearingOIDCache - In the implementation block
@property (readonly) NSArray * thumbnailAssets; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
+(id)pl_fetchResultForAssetContainerList:(id)arg1 photoLibrary:(id)arg2 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg1 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg1 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(BOOL)arg3 ;
+(id)_typesToCountForAssetCollections;
+(id)_typesToCountForListCollections;
+(id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2 ;
+(id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2 ;
+(id)filteredOIDsFrom:(id)arg1 usingEntityName:(id)arg2 withPhotoLibrary:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PH15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(PHQuery *)query;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)containerIdentifier;
-(id)initWithQuery:(id)arg1 ;
-(NSArray *)fetchedObjects;
-(PHPhotoLibrary *)photoLibrary;
-(id)objectIDs;
-(NSString *)fetchType;
-(id)pl_photoLibraryObject;
-(NSSet *)fetchPropertySets;
-(long long)chunkSizeForFetch;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(long long)collectionFetchType;
-(PHFetchOptions *)fetchOptions;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4 ;
-(id)initWithExistingFetchResult:(id)arg1 filteredObjectIDs:(id)arg2 ;
-(id)copyWithOptions:(id)arg1 ;
-(void)prefetchThumbnailAssetsAtIndexes:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)fetchedObjectsUsingManagedObjectContext:(id)arg1 ;
-(NSArray *)fetchedObjectIDs;
-(NSSet *)fetchedObjectIDsSet;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(NSArray *)thumbnailAssets;
-(void)updateRegistrationForChangeNotificationDeltas;
-(BOOL)isRegisteredForChangeNotificationDeltas;
-(void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1 ;
-(unsigned long long)_possibleChangesFromDetectionCriteriaForChange:(id)arg1 ;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(unsigned long long)countOfAssetCollections;
-(unsigned long long)countOfCollectionsLists;
-(unsigned long long)cachedCountOfCollectionsWithCollectionTypes:(id)arg1 ;
-(void)getCountOfCollectionsWithCollectionTypes:(id)arg1 ;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(void)getMediaTypeCounts;
-(BOOL)isFullyBackedByObjectIDs;
-(id)localIdentifiers;
-(BOOL)preventsClearingOIDCache;
-(void)setPreventsClearingOIDCache:(BOOL)arg1 ;
@end

