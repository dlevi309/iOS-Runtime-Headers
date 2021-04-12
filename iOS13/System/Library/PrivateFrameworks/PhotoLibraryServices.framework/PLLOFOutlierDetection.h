/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLLOFOutlierDetection : NSObject {

	BOOL _filterZeroDistanceDataset;
	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;                      //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL filterZeroDistanceDataset;              //@synthesize filterZeroDistanceDataset=_filterZeroDistanceDataset - In the implementation block
-(id)init;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(void)freeDistancesMatrix:(double*)arg1 forDataset:(id)arg2 ;
-(id)filteredObjectsWithDataset:(id)arg1 distanceBlock:(/*^block*/id)arg2 ;
-(id)createKNNMatrixWithDistanceMatrix:(double*)arg1 size:(unsigned long long)arg2 ;
-(double*)createDistancesMatrixForDataset:(id)arg1 distanceBlock:(/*^block*/id)arg2 ;
-(id)lofScoresWithDataset:(id)arg1 distanceBlock:(/*^block*/id)arg2 ;
-(BOOL)filterZeroDistanceDataset;
-(void)setFilterZeroDistanceDataset:(BOOL)arg1 ;
@end

