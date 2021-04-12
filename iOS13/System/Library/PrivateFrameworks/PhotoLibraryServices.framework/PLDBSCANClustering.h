/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLDBSCANClustering : PLDataDensityClustering
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesMatrix:(double*)arg2 number:(unsigned long long)arg3 ;
-(id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(CFSetRef)arg3 visitedObjects:(unsigned long long*)arg4 distancesMatrix:(double*)arg5 neighbors:(id)arg6 ;
@end

