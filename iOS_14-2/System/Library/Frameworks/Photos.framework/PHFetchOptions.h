/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableSet, NSPredicate, NSArray, PHQueryChangeDetectionCriteria, NSString, NSSet, PHPhotoLibrary;

@interface PHFetchOptions : NSObject <NSCopying> {

	NSNumber* _includeHiddenAssetsNumber;
	NSNumber* _includeAllBurstAssetsNumber;
	NSNumber* _includeAssetSourceTypesNumber;
	NSNumber* _fetchLimitNumber;
	NSNumber* _fetchOffsetNumber;
	NSNumber* _curationTypeNumber;
	NSNumber* _wantsIncrementalChangeDetailsNumber;
	NSNumber* _chunkSizeForFetchNumber;
	NSNumber* _cacheSizeForFetchNumber;
	NSNumber* _reverseSortOrderNumber;
	NSNumber* _includeDuplicateAssetsNumber;
	NSNumber* _includePendingMemoriesNumber;
	NSNumber* _includeRejectedMemoriesNumber;
	NSNumber* _personContextNumber;
	NSNumber* _includeTrashedAssetsNumber;
	NSNumber* _includeTrashedSharesNumber;
	NSNumber* _includeExpiredSharesNumber;
	NSNumber* _includeFavoriteMemoriesCollectionListNumber;
	NSNumber* _includePlacesSmartAlbumNumber;
	NSNumber* _includeAllPhotosSmartAlbumNumber;
	NSNumber* _includeRecentlyEditedSmartAlbumNumber;
	NSNumber* _includeScreenRecordingsSmartAlbumNumber;
	NSNumber* _includeTrashBinAlbumNumber;
	NSNumber* _includeRootFolderNumber;
	NSNumber* _excludeMontageAssetsNumber;
	NSNumber* _minimumVerifiedFaceCountNumber;
	NSNumber* _minimumUnverifiedFaceCountNumber;
	NSNumber* _includeNonvisibleFacesNumber;
	NSNumber* _includeOnlyPersonsWithVisibleKeyFacesNumber;
	NSNumber* _includeOnlyFacesNeedingFaceCropNumber;
	NSNumber* _includeOnlyFacesWithFaceprintsNumber;
	NSNumber* _includeOnlyFacesInFaceGroupsNumber;
	NSNumber* _isExclusivePredicateNumber;
	NSMutableSet* _propertySets;
	NSNumber* _shouldPrefetchCountNumber;
	NSNumber* _highlightCurationTypeNumber;
	NSNumber* _sharingStreamNumber;
	NSNumber* _includeUserSmartAlbumsNumber;
	NSNumber* _includeOnlyAssetsAllowedForAnalysisNumber;
	NSNumber* _includeOnlyContentContributedByCurrentUserNumber;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	PHQueryChangeDetectionCriteria* _changeDetectionCriteria;
	NSString* _transientIdentifier;
	NSPredicate* _internalPredicate;
	NSArray* _internalSortDescriptors;
	NSPredicate* _internalInclusionPredicate;
	NSArray* _customObjectIDSortOrder;
	NSSet* _verifiedPersonTypes;
	PHPhotoLibrary* _photoLibrary;
	NSString* _importantFetchName;

}

@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSSet * fetchPropertySetsAsSet; 
@property (nonatomic,readonly) BOOL hasAnySortDescriptors; 
@property (copy) PHQueryChangeDetectionCriteria * changeDetectionCriteria;                 //@synthesize changeDetectionCriteria=_changeDetectionCriteria - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets; 
@property (assign,nonatomic) long long chunkSizeForFetch; 
@property (assign,nonatomic) long long cacheSizeForFetch; 
@property (nonatomic,retain) NSString * transientIdentifier;                               //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * internalPredicate;                              //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (assign,nonatomic) BOOL isExclusivePredicate; 
@property (nonatomic,retain) NSArray * internalSortDescriptors;                            //@synthesize internalSortDescriptors=_internalSortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * internalInclusionPredicate;                     //@synthesize internalInclusionPredicate=_internalInclusionPredicate - In the implementation block
@property (nonatomic,retain) NSArray * customObjectIDSortOrder;                            //@synthesize customObjectIDSortOrder=_customObjectIDSortOrder - In the implementation block
@property (assign,nonatomic) BOOL reverseSortOrder; 
@property (assign,nonatomic) BOOL includeDuplicateAssets; 
@property (assign,nonatomic) BOOL includePendingMemories; 
@property (assign,nonatomic) BOOL includeRejectedMemories; 
@property (assign,nonatomic) BOOL includeFavoriteMemoriesCollectionList; 
@property (assign,nonatomic) BOOL includePlacesSmartAlbum; 
@property (assign,nonatomic) BOOL includeUserSmartAlbums; 
@property (assign,nonatomic) BOOL includeRecentlyEditedSmartAlbum; 
@property (assign,nonatomic) BOOL includeScreenRecordingsSmartAlbum; 
@property (assign,nonatomic) BOOL includeRootFolder; 
@property (assign,nonatomic) BOOL includeAllPhotosSmartAlbum; 
@property (assign,nonatomic) BOOL includeTrashBinAlbum; 
@property (assign,nonatomic) unsigned long long minimumVerifiedFaceCount; 
@property (assign,nonatomic) unsigned long long minimumUnverifiedFaceCount; 
@property (assign,nonatomic) long long curationType; 
@property (assign,nonatomic) BOOL includeNonvisibleFaces; 
@property (assign,nonatomic) BOOL includeOnlyFacesNeedingFaceCrop; 
@property (assign,nonatomic) BOOL includeOnlyFacesWithFaceprints; 
@property (assign,nonatomic) BOOL includeOnlyFacesInFaceGroups; 
@property (assign,nonatomic) long long personContext; 
@property (assign,nonatomic) BOOL includeOnlyPersonsWithVisibleKeyFaces; 
@property (nonatomic,copy) NSSet * verifiedPersonTypes;                                    //@synthesize verifiedPersonTypes=_verifiedPersonTypes - In the implementation block
@property (assign,nonatomic) BOOL excludeMontageAssets; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldPrefetchCount; 
@property (assign,nonatomic) BOOL includeTrashedAssets; 
@property (assign,nonatomic) BOOL includeTrashedShares; 
@property (assign,nonatomic) BOOL includeExpiredShares; 
@property (assign,nonatomic) unsigned short highlightCurationType; 
@property (assign,nonatomic) unsigned long long sharingStream; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (assign,nonatomic) BOOL includeOnlyAssetsAllowedForAnalysis; 
@property (assign,nonatomic) BOOL includeOnlyContentContributedByCurrentUser; 
@property (nonatomic,copy) NSString * importantFetchName;                                  //@synthesize importantFetchName=_importantFetchName - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenAssets; 
@property (assign,nonatomic) BOOL includeAllBurstAssets; 
@property (assign,nonatomic) unsigned long long includeAssetSourceTypes; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (assign,nonatomic) BOOL wantsIncrementalChangeDetails; 
+(id)fetchOptionsWithInclusiveDefaults;
+(id)fetchOptionsWithInclusiveDefaultsForPhotoLibrary:(id)arg1 ;
+(id)fetchOptionsWithPhotoLibrary:(id)arg1 orObject:(id)arg2 ;
+(id)effectivePhotoLibraryForFetchOptions:(id)arg1 object:(id)arg2 ;
-(NSArray *)fetchPropertySets;
-(void)setIncludeAssetSourceTypes:(unsigned long long)arg1 ;
-(void)setIncludeTrashedAssets:(BOOL)arg1 ;
-(long long)curationType;
-(BOOL)includeOnlyFacesNeedingFaceCrop;
-(unsigned long long)fetchLimit;
-(BOOL)includeTrashedAssets;
-(NSArray *)internalSortDescriptors;
-(NSPredicate *)predicate;
-(BOOL)reverseSortOrder;
-(void)setIncludePlacesSmartAlbum:(BOOL)arg1 ;
-(BOOL)includeDuplicateAssets;
-(id)init;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(BOOL)hasAnySortDescriptors;
-(PHPhotoLibrary *)photoLibrary;
-(void)setIncludeDuplicateAssets:(BOOL)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setMinimumVerifiedFaceCount:(unsigned long long)arg1 ;
-(PHQueryChangeDetectionCriteria *)changeDetectionCriteria;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(BOOL)includeRootFolder;
-(unsigned long long)minimumVerifiedFaceCount;
-(void)addFetchPropertySets:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setShouldPrefetchCount:(BOOL)arg1 ;
-(BOOL)includeOnlyPersonsWithVisibleKeyFaces;
-(BOOL)includeAllPhotosSmartAlbum;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(long long)cacheSizeForFetch;
-(void)setIncludeOnlyPersonsWithVisibleKeyFaces:(BOOL)arg1 ;
-(BOOL)includeHiddenAssets;
-(NSArray *)customObjectIDSortOrder;
-(void)setMinimumUnverifiedFaceCount:(unsigned long long)arg1 ;
-(void)setIncludeRejectedMemories:(BOOL)arg1 ;
-(long long)personContext;
-(BOOL)includePendingMemories;
-(void)setIncludeAllBurstAssets:(BOOL)arg1 ;
-(NSString *)shortDescription;
-(void)setWantsIncrementalChangeDetails:(BOOL)arg1 ;
-(void)setChangeDetectionCriteria:(PHQueryChangeDetectionCriteria *)arg1 ;
-(void)setHighlightCurationType:(unsigned short)arg1 ;
-(BOOL)shouldPrefetchCount;
-(void)setIncludeOnlyFacesWithFaceprints:(BOOL)arg1 ;
-(void)setIncludeOnlyContentContributedByCurrentUser:(BOOL)arg1 ;
-(void)setPersonContext:(long long)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setExcludeMontageAssets:(BOOL)arg1 ;
-(void)setIncludeExpiredShares:(BOOL)arg1 ;
-(void)setCacheSizeForFetch:(long long)arg1 ;
-(void)setIncludeRecentlyEditedSmartAlbum:(BOOL)arg1 ;
-(NSSet *)verifiedPersonTypes;
-(NSPredicate *)internalPredicate;
-(BOOL)includeAllBurstAssets;
-(BOOL)includeExpiredShares;
-(NSPredicate *)internalInclusionPredicate;
-(unsigned long long)sharingStream;
-(BOOL)includeScreenRecordingsSmartAlbum;
-(id)description;
-(long long)chunkSizeForFetch;
-(void)setIncludeNonvisibleFaces:(BOOL)arg1 ;
-(void)setIncludeRootFolder:(BOOL)arg1 ;
-(void)setIncludeAllPhotosSmartAlbum:(BOOL)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(BOOL)includeUserSmartAlbums;
-(BOOL)includeNonvisibleFaces;
-(void)setIsExclusivePredicate:(BOOL)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setIncludeScreenRecordingsSmartAlbum:(BOOL)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(BOOL)includeFavoriteMemoriesCollectionList;
-(unsigned long long)includeAssetSourceTypes;
-(unsigned long long)minimumUnverifiedFaceCount;
-(unsigned short)highlightCurationType;
-(void)setIncludeFavoriteMemoriesCollectionList:(BOOL)arg1 ;
-(unsigned long long)fetchOffset;
-(void)setIncludeTrashBinAlbum:(BOOL)arg1 ;
-(BOOL)includeTrashedShares;
-(void)setIncludeHiddenAssets:(BOOL)arg1 ;
-(BOOL)includeRecentlyEditedSmartAlbum;
-(NSSet *)fetchPropertySetsAsSet;
-(void)setIncludeOnlyAssetsAllowedForAnalysis:(BOOL)arg1 ;
-(NSString *)importantFetchName;
-(void)setInternalInclusionPredicate:(NSPredicate *)arg1 ;
-(void)setTransientIdentifier:(NSString *)arg1 ;
-(BOOL)excludeMontageAssets;
-(BOOL)includeRejectedMemories;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(BOOL)includeOnlyAssetsAllowedForAnalysis;
-(void)setCustomObjectIDSortOrder:(NSArray *)arg1 ;
-(void)setImportantFetchName:(NSString *)arg1 ;
-(BOOL)includePlacesSmartAlbum;
-(void)setIncludeOnlyFacesInFaceGroups:(BOOL)arg1 ;
-(void)setCurationType:(long long)arg1 ;
-(void)setIncludeOnlyFacesNeedingFaceCrop:(BOOL)arg1 ;
-(BOOL)includeOnlyContentContributedByCurrentUser;
-(void)setIncludeUserSmartAlbums:(BOOL)arg1 ;
-(void)setInternalSortDescriptors:(NSArray *)arg1 ;
-(BOOL)isExclusivePredicate;
-(void)setIncludeTrashedShares:(BOOL)arg1 ;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(BOOL)wantsIncrementalChangeDetails;
-(void)setVerifiedPersonTypes:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)includeOnlyFacesWithFaceprints;
-(void)setIncludePendingMemories:(BOOL)arg1 ;
-(void)mergeWithFetchOptions:(id)arg1 ;
-(BOOL)includeTrashBinAlbum;
-(BOOL)includeOnlyFacesInFaceGroups;
-(NSString *)transientIdentifier;
@end

