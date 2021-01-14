/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLCompactMomentClustering : NSObject {

	NSArray* _locationsOfInterest;
	BOOL _routineIsAvailable;

}
-(id)initWithDataManager:(id)arg1 ;
-(id)_clusterAssetsWithUsableLocation:(id)arg1 ;
-(id)_processedLocationTypeByAssetUUIDFromAssets:(id)arg1 ;
-(id)assetsByLocationTypeFromAssets:(id)arg1 locationsOfInterest:(id)arg2 ;
-(id)_assetClustersFromDataClusters:(id)arg1 ;
-(id)createAssetClustersForAssetsInDay:(id)arg1 ;
-(id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2 ;
-(id)newAssetClusterFromAssetsSortedByDate:(id)arg1 ;
-(id)_runDBSCANClusteringWithAssets:(id)arg1 ;
-(id)_clusterAssetsWithUnusableLocation:(id)arg1 ;
-(void)dealloc;
@end

