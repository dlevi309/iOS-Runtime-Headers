/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSNumber* _includeTrashedMomentSharesNumber;
	NSNumber* _includeExpiredMomentSharesNumber;
	NSNumber* _includeFavoriteMemoriesCollectionListNumber;
	NSNumber* _includePlacesSmartAlbumNumber;
	NSNumber* _includeAllPhotosSmartAlbumNumber;
	NSNumber* _includeRecentlyEditedSmartAlbumNumber;
	NSNumber* _includeScreenRecordingsSmartAlbumNumber;
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
	BOOL _includeRecentsSmartAlbum;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSArray* _customObjectIDSortOrder;
	PHQueryChangeDetectionCriteria* _changeDetectionCriteria;
	NSString* _transientIdentifier;
	NSPredicate* _internalPredicate;
	NSArray* _internalSortDescriptors;
	NSPredicate* _internalInclusionPredicate;
	NSSet* _verifiedPersonTypes;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSSet * fetchPropertySetsAsSet; 
@property (nonatomic,retain) NSArray * customObjectIDSortOrder;                          //@synthesize customObjectIDSortOrder=_customObjectIDSortOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasAnySortDescriptors; 
@property (copy) PHQueryChangeDetectionCriteria * changeDetectionCriteria;               //@synthesize changeDetectionCriteria=_changeDetectionCriteria - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets; 
@property (assign,nonatomic) long long chunkSizeForFetch; 
@property (assign,nonatomic) long long cacheSizeForFetch; 
@property (nonatomic,retain) NSString * transientIdentifier;                             //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * internalPredicate;                            //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (assign,nonatomic) BOOL isExclusivePredicate; 
@property (nonatomic,retain) NSArray * internalSortDescriptors;                          //@synthesize internalSortDescriptors=_internalSortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * internalInclusionPredicate;                   //@synthesize internalInclusionPredicate=_internalInclusionPredicate - In the implementation block
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
@property (assign,nonatomic) BOOL includeRecentsSmartAlbum;                              //@synthesize includeRecentsSmartAlbum=_includeRecentsSmartAlbum - In the implementation block
@property (assign,nonatomic) unsigned long long minimumVerifiedFaceCount; 
@property (assign,nonatomic) unsigned long long minimumUnverifiedFaceCount; 
@property (assign,nonatomic) long long curationType; 
@property (assign,nonatomic) BOOL includeNonvisibleFaces; 
@property (assign,nonatomic) BOOL includeOnlyFacesNeedingFaceCrop; 
@property (assign,nonatomic) BOOL includeOnlyFacesWithFaceprints; 
@property (assign,nonatomic) BOOL includeOnlyFacesInFaceGroups; 
@property (assign,nonatomic) long long personContext; 
@property (assign,nonatomic) BOOL includeOnlyPersonsWithVisibleKeyFaces; 
@property (nonatomic,copy) NSSet * verifiedPersonTypes;                                  //@synthesize verifiedPersonTypes=_verifiedPersonTypes - In the implementation block
@property (assign,nonatomic) BOOL excludeMontageAssets; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldPrefetchCount; 
@property (assign,nonatomic) BOOL includeTrashedAssets; 
@property (assign,nonatomic) BOOL includeTrashedMomentShares; 
@property (assign,nonatomic) BOOL includeExpiredMomentShares; 
@property (assign,nonatomic) unsigned short highlightCurationType; 
@property (assign,nonatomic) unsigned long long sharingStream; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (nonatomic,retain) NSPredicate * predicate;                                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenAssets; 
@property (assign,nonatomic) BOOL includeAllBurstAssets; 
@property (assign,nonatomic) unsigned long long includeAssetSourceTypes; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (assign,nonatomic) BOOL wantsIncrementalChangeDetails; 
+(id)fetchOptionsWithInclusiveDefaults;
+(id)fetchOptionsWithInclusiveDefaultsForPhotoLibrary:(id)arg1 ;
+(id)fetchOptionsWithPhotoLibrary:(id)arg1 orObject:(id)arg2 ;
+(id)effectivePhotoLibraryForFetchOptions:(id)arg1 object:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)fetchOffset;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(void)setPersonContext:(long long)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(NSString *)transientIdentifier;
-(void)mergeWithFetchOptions:(id)arg1 ;
-(BOOL)hasAnySortDescriptors;
-(NSArray *)fetchPropertySets;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(void)addFetchPropertySets:(id)arg1 ;
-(NSSet *)fetchPropertySetsAsSet;
-(BOOL)includeHiddenAssets;
-(void)setIncludeHiddenAssets:(BOOL)arg1 ;
-(BOOL)includeAllBurstAssets;
-(void)setIncludeAllBurstAssets:(BOOL)arg1 ;
-(unsigned long long)includeAssetSourceTypes;
-(void)setIncludeAssetSourceTypes:(unsigned long long)arg1 ;
-(BOOL)wantsIncrementalChangeDetails;
-(void)setWantsIncrementalChangeDetails:(BOOL)arg1 ;
-(long long)chunkSizeForFetch;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(long long)cacheSizeForFetch;
-(void)setCacheSizeForFetch:(long long)arg1 ;
-(BOOL)reverseSortOrder;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(BOOL)includeDuplicateAssets;
-(void)setIncludeDuplicateAssets:(BOOL)arg1 ;
-(BOOL)includePendingMemories;
-(void)setIncludePendingMemories:(BOOL)arg1 ;
-(BOOL)includeRejectedMemories;
-(void)setIncludeRejectedMemories:(BOOL)arg1 ;
-(long long)curationType;
-(void)setCurationType:(long long)arg1 ;
-(long long)personContext;
-(BOOL)includeTrashedAssets;
-(void)setIncludeTrashedAssets:(BOOL)arg1 ;
-(BOOL)includeTrashedMomentShares;
-(void)setIncludeTrashedMomentShares:(BOOL)arg1 ;
-(BOOL)includeExpiredMomentShares;
-(void)setIncludeExpiredMomentShares:(BOOL)arg1 ;
-(BOOL)includeFavoriteMemoriesCollectionList;
-(void)setIncludeFavoriteMemoriesCollectionList:(BOOL)arg1 ;
-(BOOL)includePlacesSmartAlbum;
-(void)setIncludePlacesSmartAlbum:(BOOL)arg1 ;
-(BOOL)includeAllPhotosSmartAlbum;
-(void)setIncludeAllPhotosSmartAlbum:(BOOL)arg1 ;
-(BOOL)includeRecentlyEditedSmartAlbum;
-(void)setIncludeRecentlyEditedSmartAlbum:(BOOL)arg1 ;
-(BOOL)includeScreenRecordingsSmartAlbum;
-(void)setIncludeScreenRecordingsSmartAlbum:(BOOL)arg1 ;
-(BOOL)includeRootFolder;
-(void)setIncludeRootFolder:(BOOL)arg1 ;
-(BOOL)excludeMontageAssets;
-(void)setExcludeMontageAssets:(BOOL)arg1 ;
-(unsigned long long)minimumVerifiedFaceCount;
-(void)setMinimumVerifiedFaceCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumUnverifiedFaceCount;
-(void)setMinimumUnverifiedFaceCount:(unsigned long long)arg1 ;
-(BOOL)includeNonvisibleFaces;
-(void)setIncludeNonvisibleFaces:(BOOL)arg1 ;
-(BOOL)includeOnlyPersonsWithVisibleKeyFaces;
-(void)setIncludeOnlyPersonsWithVisibleKeyFaces:(BOOL)arg1 ;
-(BOOL)includeOnlyFacesNeedingFaceCrop;
-(void)setIncludeOnlyFacesNeedingFaceCrop:(BOOL)arg1 ;
-(BOOL)includeOnlyFacesWithFaceprints;
-(void)setIncludeOnlyFacesWithFaceprints:(BOOL)arg1 ;
-(BOOL)includeOnlyFacesInFaceGroups;
-(void)setIncludeOnlyFacesInFaceGroups:(BOOL)arg1 ;
-(BOOL)shouldPrefetchCount;
-(void)setShouldPrefetchCount:(BOOL)arg1 ;
-(BOOL)isExclusivePredicate;
-(void)setIsExclusivePredicate:(BOOL)arg1 ;
-(unsigned short)highlightCurationType;
-(void)setHighlightCurationType:(unsigned short)arg1 ;
-(unsigned long long)sharingStream;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(BOOL)includeUserSmartAlbums;
-(void)setIncludeUserSmartAlbums:(BOOL)arg1 ;
-(NSArray *)customObjectIDSortOrder;
-(void)setCustomObjectIDSortOrder:(NSArray *)arg1 ;
-(PHQueryChangeDetectionCriteria *)changeDetectionCriteria;
-(void)setChangeDetectionCriteria:(PHQueryChangeDetectionCriteria *)arg1 ;
-(void)setTransientIdentifier:(NSString *)arg1 ;
-(NSPredicate *)internalPredicate;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(NSArray *)internalSortDescriptors;
-(void)setInternalSortDescriptors:(NSArray *)arg1 ;
-(NSPredicate *)internalInclusionPredicate;
-(void)setInternalInclusionPredicate:(NSPredicate *)arg1 ;
-(BOOL)includeRecentsSmartAlbum;
-(void)setIncludeRecentsSmartAlbum:(BOOL)arg1 ;
-(NSSet *)verifiedPersonTypes;
-(void)setVerifiedPersonTypes:(NSSet *)arg1 ;
@end

