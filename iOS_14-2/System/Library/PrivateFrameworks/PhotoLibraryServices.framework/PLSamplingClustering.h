/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLSamplingClustering : PLDataDensityClustering {

	unsigned long long _numberOfClusters;

}

@property (assign,nonatomic) unsigned long long numberOfClusters;              //@synthesize numberOfClusters=_numberOfClusters - In the implementation block
-(unsigned long long)numberOfClusters;
-(void)setNumberOfClusters:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

