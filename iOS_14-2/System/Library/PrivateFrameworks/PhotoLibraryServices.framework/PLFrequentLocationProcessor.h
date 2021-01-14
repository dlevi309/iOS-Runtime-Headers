/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
+(double)_computeWeekendFrequencyForMoments:(id)arg1 ;
+(id)_finalClustersFromCoarseClusters:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)_coarseClustersForItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

