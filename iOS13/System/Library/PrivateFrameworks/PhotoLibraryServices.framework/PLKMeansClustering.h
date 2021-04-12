/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering {

	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double*)_dataArray:(id)arg1 featureCount:(unsigned)arg2 useKeypaths:(BOOL)arg3 ;
@end

