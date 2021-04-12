/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2 ;
-(unsigned long long)averageNumberOfObjects;
-(void)setAverageNumberOfObjects:(unsigned long long)arg1 ;
-(double)minimumSpan;
-(void)setMinimumSpan:(double)arg1 ;
@end

