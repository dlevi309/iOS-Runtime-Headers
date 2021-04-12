/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_dateIntervalForItems:(id)arg1 ;
+(id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
@end

