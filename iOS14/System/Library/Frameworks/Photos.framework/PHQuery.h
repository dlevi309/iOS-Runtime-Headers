/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSPredicateVisitor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSFetchRequest, NSRelationshipDescription, NSManagedObjectID, PHCollection, NSString, NSMutableSet, NSMutableDictionary, PHFetchOptions, NSArray, PHPhotoLibrary, NSSet, NSDictionary;

@interface PHQuery : NSObject <NSPredicateVisitor, NSCopying> {

	NSPredicate* _cachedFetchOptionsPredicate;
	NSPredicate* _basePredicate;
	NSPredicate* _filterPredicate;
	NSFetchRequest* _fetchRequest;
	long long _collectionFetchType;
	BOOL _preparedContainerInfo;
	NSRelationshipDescription* _containerRelationship;
	NSManagedObjectID* _containerIdentifier;
	PHCollection* _containerCollection;
	BOOL _preparedCombinedQueryKeys;
	id _combinedQueryGroupKey;
	NSString* _combinedQueryKeyPath;
	NSManagedObjectID* _combinedQuerySeparatingIdentifier;
	BOOL _preparedFilteringAttributes;
	NSMutableSet* _filteringKeys;
	unsigned long long _filteringAttributesIndexValue;
	unsigned long long _filteringRelationshipsIndexValue;
	unsigned long long _objectToContainerRelationshipIndexValue;
	unsigned long long _containerToObjectRelationshipIndexValue;
	unsigned long long _containerSortingAttributesIndexValue;
	unsigned long long _containerUserQueryIndexValue;
	NSMutableSet* _filteringOids;
	NSMutableSet* _filteringObjectKeyPaths;
	NSMutableDictionary* _filteringRelationshipsIndexValueByBaseEntityName;
	/*^block*/id _identificationBlock;
	BOOL __includesCameraRoll;
	PHFetchOptions* _fetchOptions;
	NSArray* _propertiesToGroupBy;
	NSArray* _propertiesToFetchWhenGrouping;
	NSString* _fetchType;
	NSArray* _seedOIDs;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,setter=_setIncludesCameraRoll:,nonatomic) BOOL _includesCameraRoll;                        //@synthesize _includesCameraRoll=__includesCameraRoll - In the implementation block
@property (retain) NSArray * propertiesToGroupBy;                                                            //@synthesize propertiesToGroupBy=_propertiesToGroupBy - In the implementation block
@property (retain) NSArray * propertiesToFetchWhenGrouping;                                                  //@synthesize propertiesToFetchWhenGrouping=_propertiesToFetchWhenGrouping - In the implementation block
@property (nonatomic,readonly) NSRelationshipDescription * containerRelationship; 
@property (readonly) NSString * fetchType;                                                                   //@synthesize fetchType=_fetchType - In the implementation block
@property (readonly) NSFetchRequest * fetchRequest; 
@property (readonly) NSPredicate * basePredicate;                                                            //@synthesize basePredicate=_basePredicate - In the implementation block
@property (readonly) NSPredicate * filterPredicate; 
@property (readonly) NSArray * seedOIDs;                                                                     //@synthesize seedOIDs=_seedOIDs - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                                                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
@property (readonly) id combinedQueryGroupKey; 
@property (readonly) NSString * combinedQueryKeyPath; 
@property (readonly) NSManagedObjectID * combinedQuerySeparatingIdentifier; 
@property (nonatomic,readonly) NSSet * filteringOids; 
@property (nonatomic,readonly) NSDictionary * filteringRelationshipsIndexValueByBaseEntityName; 
@property (nonatomic,copy) PHFetchOptions * fetchOptions;                                                    //@synthesize fetchOptions=_fetchOptions - In the implementation block
+(id)queryForImportSessionsWithOptions:(id)arg1 ;
+(id)queryForPersonsInAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForKeywords:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentsInMomentList:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsNeedingSceneProcessingWithOptions:(id)arg1 ;
+(id)queryForAssetsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetsInSuggestion:(id)arg1 options:(id)arg2 ;
+(id)queryForSuggestionsWithOptions:(id)arg1 ;
+(id)queryForCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)queryForAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3 ;
+(id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsWithOptions:(id)arg1 ;
+(id)queryForEmptyFaceGroupsWithOptions:(id)arg1 ;
+(id)queryForProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)_queryForRootCollectionListWithRootFolder:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetInPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForCuratedAssetsInPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForPhotosHighlightsContainingMomentsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForFirstAssetInEachMonthHighlightWithOptions:(id)arg1 ;
+(id)queryForTopLevelCollectionsMatchingPredicate:(id)arg1 options:(id)arg2 ;
+(id)queryForKeywordsForAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)queryForChildrenDayGroupHighlightsForPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForPersons:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForRepresentativeAssetsInSuggestion:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForRootProjectCollectionListWithOptions:(id)arg1 ;
+(id)queryForFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchRootFolderIDForAlbumKind:(int)arg1 photoLibrary:(id)arg2 ;
+(/*^block*/id)identificationBlockForSmartAlbumKind:(int)arg1 ;
+(id)queryForFacesInAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForParentHighlightsForPhotosHighlights:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetInPhotosHighlightWithLocalIdentifier:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)queryForMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForReferencedAssetsWithOptions:(id)arg1 ;
+(id)queryForSingletonFacesWithOptions:(id)arg1 ;
+(id)queryForAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)_defaultFetchOptionsForIdentifiedAssetsQuery;
+(id)queryForAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)queryForKeyFaceForFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)queryForKeywordsWithTitles:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentListsWithSubType:(long long)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForQuarantinedAssetsWithOptions:(id)arg1 ;
+(id)queryForAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)queryForMomentsWithOptions:(id)arg1 ;
+(id)queryForQuestionsWithState:(unsigned short)arg1 options:(id)arg2 ;
+(id)queryForAssetsFromCameraSinceDate:(id)arg1 options:(id)arg2 ;
+(id)defaultSortDescriptorForFetchType:(id)arg1 predicate:(id)arg2 ;
+(id)queryForMomentsContainingAssetsWithOIDs:(id)arg1 options:(id)arg2 ;
+(id)queryForMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)_queryForPersonsWithFaceRelationshipPredicate:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesOnAssetWithFace:(id)arg1 options:(id)arg2 ;
+(id)queryForAnsweredQuestionsWithOptions:(id)arg1 ;
+(id)queryForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3 ;
+(id)queryForMomentsBackingSuggestion:(id)arg1 ;
+(id)queryForRootAlbumCollectionListWithOptions:(id)arg1 ;
+(id)queryForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(BOOL)_isKindOfMomentOrAlbumEntity:(id)arg1 ;
+(id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)_relationshipForFetchType:(id)arg1 predicate:(id)arg2 ;
+(id)queryForFacesOnFaceCrop:(id)arg1 options:(id)arg2 ;
+(id)_fetchTypeForLocalIdentifiers:(id)arg1 ;
+(id)queryForChildrenHighlightsForPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForPersonsWithType:(long long)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithOptions:(id)arg1 ;
+(id)queryForKeyFaceOnPerson:(id)arg1 options:(id)arg2 ;
+(BOOL)_validateLocalIdentifiers:(id)arg1 compatibilityWithFetchType:(id)arg2 ;
+(id)combinedFetchRequestForQueries:(id)arg1 ;
+(id)queryForPersonsWithOptions:(id)arg1 ;
+(id)queryForRejectedFacesOnPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForRejectedPersonsForFace:(id)arg1 options:(id)arg2 ;
+(id)queryForShareParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3 options:(id)arg4 ;
+(id)queryForAssetsInImportSessions:(id)arg1 options:(id)arg2 ;
+(id)queryForAnsweredYesOrNoQuestionsWithOptions:(id)arg1 ;
+(id)_containerIdentifierForFetchType:(id)arg1 predicate:(id)arg2 outRelationship:(id*)arg3 ;
+(id)queryForAssetsAllowedForSceneProcessingWithOptions:(id)arg1 ;
+(id)queryForPersonsWithQuestionType:(unsigned short)arg1 options:(id)arg2 ;
+(id)_filterPredicateFromFetchOptionsPredicate:(id)arg1 options:(id)arg2 phClass:(Class)arg3 ;
+(id)_queryForPersonsInAssetsWithObjectIDs:(id)arg1 withOptions:(id)arg2 ;
+(id)queryForPersonsInAssets:(id)arg1 withOptions:(id)arg2 ;
+(id)queryForAssociatedPersonForFaceGroup:(id)arg1 withOptions:(id)arg2 ;
+(id)queryForMovieCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForCustomKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentListsWithSubType:(long long)arg1 containingMoment:(id)arg2 ;
+(id)queryForKeywordsWithOptions:(id)arg1 ;
+(id)queryForSuggestionsWithState:(unsigned short)arg1 type:(unsigned short)arg2 options:(id)arg3 ;
+(id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg1 options:(id)arg2 changeDetectionCriteria:(id)arg3 ;
+(id)queryForAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithUUIDs:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesInFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)queryForShareParticipantsInShare:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForFaces:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithMediaType:(long long)arg1 options:(id)arg2 ;
+(id)queryForSuggestionsWithState:(unsigned short)arg1 options:(id)arg2 ;
+(id)queryForFacesWithOptions:(id)arg1 ;
+(id)queryForCollectionListContainingCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentsBackingMemory:(id)arg1 ;
+(/*^block*/id)identificationBlockForAlbumSortKey:(unsigned)arg1 ;
+(id)queryForParentDayGroupHighlightForPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)_queryForAssetsWithIdentifiers:(id)arg1 local:(BOOL)arg2 options:(id)arg3 ;
+(id)queryForPhotosHighlightsContainingMoments:(id)arg1 ;
+(id)queryForFaceCropsWithOptions:(id)arg1 ;
+(id)queryForKeywordsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2 ;
+(id)queryForExtendedCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)_fetchOptionsForFetchingAssetsFromImportSessions:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 identiferKeyPath:(id)arg3 options:(id)arg4 ;
+(id)queryForParentHighlightForPhotosHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForContributorForAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsWithFace:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetsInMomentShare:(id)arg1 options:(id)arg2 ;
+(id)queryForAllAssetsInYearRepresentedByYearHighlight:(id)arg1 options:(id)arg2 ;
+(id)queryForPersonsWithFace:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentsInPhotosHighlight:(id)arg1 ;
+(id)queryForFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4 ;
+(id)queryForAssetsForBehavioralCurationWithOptions:(id)arg1 ;
+(id)queryForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)queryForPersonsWithContactIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForRepresentativeAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesInAssets:(id)arg1 options:(id)arg2 ;
+(id)queryForQuestionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForQuestionsWithOptions:(id)arg1 ;
+(id)_transformedSortDescriptors:(id)arg1 forFetchType:(id)arg2 ;
+(id)queryForCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
-(NSPredicate *)basePredicate;
-(NSPredicate *)filterPredicate;
-(long long)collectionFetchType;
-(id)executeQuery;
-(unsigned long long)containerSortingAttributesIndexValue;
-(BOOL)_isAlbumContentTitleSort;
-(void)_setCollectionFetchType:(long long)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(PHPhotoLibrary *)photoLibrary;
-(id)initForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4 ;
-(id)_substitutedChangeTrackingKeyPathFromKeyPath:(id)arg1 ;
-(NSString *)shortDescription;
-(void)_prepareFilteringAttributes;
-(id)_effectiveSortDescriptors;
-(void)visitPredicate:(id)arg1 ;
-(unsigned long long)filteringAttributesIndexValue;
-(id)containerIdentifier;
-(unsigned long long)objectToContainerRelationshipIndexValue;
-(id)initForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3 ;
-(NSManagedObjectID *)combinedQuerySeparatingIdentifier;
-(unsigned long long)containerToObjectRelationshipIndexValue;
-(id)description;
-(void)visitPredicateExpression:(id)arg1 ;
-(NSString *)fetchType;
-(BOOL)_isAlbumContentSort;
-(NSArray *)propertiesToGroupBy;
-(NSString *)combinedQueryKeyPath;
-(void)setPropertiesToFetchWhenGrouping:(NSArray *)arg1 ;
-(void)setPropertiesToGroupBy:(NSArray *)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(PHFetchOptions *)fetchOptions;
-(BOOL)_isUserSmartAlbum;
-(void)_prepareContainerInfo;
-(id)_globalPredicatesForPHClass:(Class)arg1 ;
-(id)_effectiveDefaultSortDescriptor;
-(id)combinedQueryGroupKey;
-(void)setFetchOptions:(PHFetchOptions *)arg1 ;
-(NSSet *)filteringOids;
-(void)_setContainerCollection:(id)arg1 ;
-(NSArray *)seedOIDs;
-(NSRelationshipDescription *)containerRelationship;
-(id)effectivePredicateForPHClass:(Class)arg1 request:(id)arg2 includingBasePredicate:(BOOL)arg3 ;
-(void)_setIncludesCameraRoll:(BOOL)arg1 ;
-(void)_setBasePredicate:(id)arg1 ;
-(BOOL)_includesCameraRoll;
-(NSArray *)propertiesToFetchWhenGrouping;
-(unsigned long long)filteringRelationshipsIndexValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)updatedQueryWithChange:(id)arg1 ;
-(id)_createFetchRequestIncludingBasePredicate:(BOOL)arg1 ;
-(void)_prepareCombinedQueryKeys;
-(void)_setIdentificationBlock:(/*^block*/id)arg1 ;
-(unsigned long long)containerUserQueryIndexValue;
-(NSDictionary *)filteringRelationshipsIndexValueByBaseEntityName;
@end

