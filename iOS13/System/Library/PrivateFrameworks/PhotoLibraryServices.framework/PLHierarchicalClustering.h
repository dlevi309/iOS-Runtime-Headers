/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLHierarchicalClustering : PLDataClustering {

	BOOL _usesSortedDataRelativeDistanceCache;
	double _threshold;
	unsigned long long _k;
	unsigned long long _linkage;

}

@property (assign,nonatomic) double threshold;                                      //@synthesize threshold=_threshold - In the implementation block
@property (assign,k,nonatomic) unsigned long long k;                                //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) unsigned long long linkage;                            //@synthesize linkage=_linkage - In the implementation block
@property (assign,nonatomic) BOOL usesSortedDataRelativeDistanceCache;              //@synthesize usesSortedDataRelativeDistanceCache=_usesSortedDataRelativeDistanceCache - In the implementation block
-(id)init;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_clustroidIndexForClusters:(unsigned long long*)arg1 numberOfObjects:(unsigned long long)arg2 distances:(double*)arg3 relativeDistanceCache:(double*)arg4 ;
-(double*)_createRelativeDistanceCacheForDataset:(id)arg1 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(unsigned long long)linkage;
-(void)setLinkage:(unsigned long long)arg1 ;
-(BOOL)usesSortedDataRelativeDistanceCache;
-(void)setUsesSortedDataRelativeDistanceCache:(BOOL)arg1 ;
@end

