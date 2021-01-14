/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)k;
-(double)threshold;
-(id)init;
-(unsigned long long)linkage;
-(void)setLinkage:(unsigned long long)arg1 ;
-(unsigned long long)_clustroidIndexForClusters:(unsigned long long*)arg1 numberOfObjects:(unsigned long long)arg2 distances:(double*)arg3 relativeDistanceCache:(double*)arg4 ;
-(double*)_createRelativeDistanceCacheForDataset:(id)arg1 ;
-(BOOL)usesSortedDataRelativeDistanceCache;
-(void)setUsesSortedDataRelativeDistanceCache:(BOOL)arg1 ;
-(void)setK:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setThreshold:(double)arg1 ;
@end

