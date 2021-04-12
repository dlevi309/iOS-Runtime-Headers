/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLCloudResourcePrefetchPredicates : NSObject
+(id)predicatesForWidget:(id)arg1 defaultPrefetchMode:(long long)arg2 ;
+(id)predicatesForMemories:(id)arg1 defaultPrefetchMode:(long long)arg2 ;
+(id)predicatesForThumbnails;
+(id)predicatesForNonThumbnails:(id)arg1 photoLibrary:(id)arg2 defaultPrefetchMode:(long long)arg3 ;
+(id)_predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_missingThumbnailConditionString;
+(id)_predicateForMaxFilesize:(long long)arg1 ;
+(id)_predicateForResourceCreatedAfterDate:(id)arg1 ;
+(id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
+(id)_irisConditionString;
+(id)_excludeMomentShareAssetsString;
+(id)_assetIsUnadjustedConditionString;
+(BOOL)_shouldPrefetchMediums;
+(id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
+(id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
+(double)_resourceLastPrunedPrefetchTimeInterval;
+(id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2 ;
+(id)_resourcesToPrefetchForAsset:(id)arg1 ;
+(id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_predicateForKeyFacePrefetching:(id)arg1 ;
+(id)_predicateToPrefetchMemoryKeyAssets:(id)arg1 photoLibrary:(id)arg2 ;
@end

