/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXPeopleUtilities : NSObject
+(void)peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 force:(BOOL)arg3 delegate:(id)arg4 ;
+(void)mergePersons:(id)arg1 withPerson:(id)arg2 ;
+(id)sharedContactStore;
+(long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1 ;
+(id)assetCollectionListFetchResultForPerson:(id)arg1 ;
+(id)personFaceTileByPersonIdForPersons:(id)arg1 ;
+(id)alertControllerForResettingPeopleWithCompletion:(/*^block*/id)arg1 ;
+(id)_titleStringForPeople:(id)arg1 singlePersonFallback:(id)arg2 groupFallback:(id)arg3 ;
+(id)personWithPersonUri:(id)arg1 ;
+(BOOL)isFavoritePerson:(id)arg1 ;
+(/*^block*/id)_manualOrderComparator;
+(id)identifiersForPeople:(id)arg1 ;
+(id)personWithLocalIdentifier:(id)arg1 ;
+(id)facesForPerson:(id)arg1 inAssets:(id)arg2 ;
+(BOOL)isPersonHiddenFromPeopleHome:(id)arg1 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 delegate:(id)arg3 ;
+(/*^block*/id)comparatorForFetchType:(unsigned long long)arg1 ;
+(void)_peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 ;
+(id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2 ;
+(id)generateNewFaceTileFromFaceTile:(id)arg1 ;
+(id)sortDescriptorsForManualSort;
+(id)alertControllerForBlockingPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)peopleWithPersonUris:(id)arg1 ;
+(BOOL)shouldShowBootstrapForPerson:(id)arg1 ;
+(BOOL)_hasRecentlyHandledBootstrapForPerson:(id)arg1 ;
+(void)markHandledBootstrapForPerson:(id)arg1 ;
+(id)changePerson:(id)arg1 toPersonType:(long long)arg2 ;
+(BOOL)changePeople:(id)arg1 toPersonType:(long long)arg2 error:(id*)arg3 ;
+(id)titleStringForPeople:(id)arg1 ;
+(CGRect)faceRectForPeopleFaceTile:(id)arg1 ;
+(id)_daysDictionary;
+(void)peopleFaceTilesForAsset:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)memoryTitleStringFromPeople:(id)arg1 ;
+(id)alertControllerForRemovingNumberOfPeople:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)_peopleHomeFetchResultForPersonType:(long long)arg1 ;
+(void)_setDaysDictionary:(id)arg1 ;
+(id)slideshowTitleStringForPeople:(id)arg1 ;
+(id)finalMergeTargetPersonForPersonWithUUID:(id)arg1 ;
@end

