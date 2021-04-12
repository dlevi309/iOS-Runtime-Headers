/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering {

	unsigned long long _averageNumberOfObjects;
	double _minimumSpan;

}

@property (assign,nonatomic) unsigned long long averageNumberOfObjects;              //@synthesize averageNumberOfObjects=_averageNumberOfObjects - In the implementation block
@property (assign,nonatomic) double minimumSpan;                                     //@synthesize minimumSpan=_minimumSpan - In the implementation block
-(id)init;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)minimumSpan;
-(unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2 ;
-(unsigned long long)averageNumberOfObjects;
-(void)setAverageNumberOfObjects:(unsigned long long)arg1 ;
-(void)setMinimumSpan:(double)arg1 ;
@end

