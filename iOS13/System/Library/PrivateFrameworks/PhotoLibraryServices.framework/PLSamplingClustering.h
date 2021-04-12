/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLSamplingClustering : PLDataDensityClustering {

	unsigned long long _numberOfClusters;

}

@property (assign,nonatomic) unsigned long long numberOfClusters;              //@synthesize numberOfClusters=_numberOfClusters - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfClusters;
-(void)setNumberOfClusters:(unsigned long long)arg1 ;
@end

