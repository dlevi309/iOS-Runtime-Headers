/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLDataClustering : NSObject {

	/*^block*/id _distanceBlock;
	NSArray* _numericValueKeypaths;

}

@property (nonatomic,copy,readonly) id distanceBlock;                       //@synthesize distanceBlock=_distanceBlock - In the implementation block
@property (nonatomic,readonly) NSArray * numericValueKeypaths;              //@synthesize numericValueKeypaths=_numericValueKeypaths - In the implementation block
+(id)clusteringWithNumericValueKeypaths:(id)arg1 ;
+(id)clusteringWithDistanceBlock:(/*^block*/id)arg1 ;
+(id)clustering;
-(NSArray *)numericValueKeypaths;
-(id)initWithDistanceBlock:(/*^block*/id)arg1 ;
-(id)distanceBlock;
-(void)freeDistancesMatrix:(double*)arg1 forDataset:(id)arg2 ;
-(double*)createDistancesMatrixForDataset:(id)arg1 ;
-(id)initWithNumericValueKeypaths:(id)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

