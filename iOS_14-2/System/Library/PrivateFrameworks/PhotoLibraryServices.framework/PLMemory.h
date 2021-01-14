/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemMetadataPersistence.h>

@class NSString, NSDate, NSDictionary, NSData, PLManagedAsset, NSSet;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection, PLCloudDeletable, PLFileSystemMetadataPersistence> {

	BOOL _needsPersistenceUpdate;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                      //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short category; 
@property (assign,nonatomic) short subcategory; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL pending; 
@property (assign,nonatomic) BOOL userCreated; 
@property (nonatomic,retain) NSDictionary * movieAssetState; 
@property (nonatomic,retain) NSData * movieData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSData * assetListPredicate; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (nonatomic,retain) NSSet * curatedAssets; 
@property (nonatomic,retain) NSSet * extendedCuratedAssets; 
@property (nonatomic,retain) NSSet * movieCuratedAssets; 
@property (assign,nonatomic) short notificationState; 
@property (nonatomic,retain) NSData * blacklistedFeature; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) long long shareCount; 
@property (assign,nonatomic) long long viewCount; 
@property (assign,nonatomic) long long pendingPlayCount; 
@property (assign,nonatomic) long long pendingShareCount; 
@property (assign,nonatomic) long long pendingViewCount; 
@property (assign,nonatomic) unsigned short featuredState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(BOOL)indexTitleForMemoryCategory:(unsigned long long)arg1 ;
+(void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoriesToPrefetchForWidgetInManagedObjectContext:(id)arg1 ;
+(id)memoriesToPrefetchInPhotoLibrary:(id)arg1 ;
+(id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5 ;
+(id)baseSearchIndexPredicate;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)cloudUUIDKeyForDeletion;
+(BOOL)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1 ;
+(id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
-(id)payloadID;
-(long long)cloudDeletionType;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)supportsCloudUpload;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(id)payloadIDForTombstone:(id)arg1 ;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)delete;
-(id)calculateKeyAsset;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;
-(BOOL)isSyncableChange;
-(id)cplMemoryChange;
-(NSString *)keyAssetUUID;
-(void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(unsigned long long)numberOfAssets;
-(id)momentShare;
-(id)cplFullRecord;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
@end

