/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLDataClustering : NSObject {

	/*^block*/id _distanceBlock;
	NSArray* _numericValueKeypaths;

}

@property (nonatomic,copy,readonly) id distanceBlock;                       //@synthesize distanceBlock=_distanceBlock - In the implementation block
@property (nonatomic,readonly) NSArray * numericValueKeypaths;              //@synthesize numericValueKeypaths=_numericValueKeypaths - In the implementation block
+(id)clustering;
+(id)clusteringWithDistanceBlock:(/*^block*/id)arg1 ;
+(id)clusteringWithNumericValueKeypaths:(id)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)initWithDistanceBlock:(/*^block*/id)arg1 ;
-(void)freeDistancesMatrix:(double*)arg1 forDataset:(id)arg2 ;
-(double*)createDistancesMatrixForDataset:(id)arg1 ;
-(id)distanceBlock;
-(NSArray *)numericValueKeypaths;
-(id)initWithNumericValueKeypaths:(id)arg1 ;
@end

