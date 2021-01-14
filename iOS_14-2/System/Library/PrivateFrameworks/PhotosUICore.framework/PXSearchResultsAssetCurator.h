/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXSearchResultsAssetCurator : NSObject
+(id)_fetchAssetsForAssetUUIDs:(id)arg1 ;
+(id)_fetchResultForCuratedAssets:(id)arg1 ;
+(void)performCurationForAssetResults:(id)arg1 sceneIdentifiers:(id)arg2 searchQuery:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_sampledAssetUUIDsFromAssetResults:(id)arg1 curatedAssetLimit:(unsigned long long)arg2 priorityAssetUUID:(id)arg3 maxNumberToSample:(unsigned long long)arg4 rangeToSample:(unsigned long long)arg5 ;
+(id)_sortedCuratedAssetsFromCurationObjects:(id)arg1 priorityAssetUUID:(id)arg2 curatedAssetLimit:(unsigned long long)arg3 canPrioritizeDominantObjectResults:(BOOL)arg4 ;
+(void)_curationObjectsFromAssets:(id)arg1 scenesMap:(id)arg2 sceneIdentifiers:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

