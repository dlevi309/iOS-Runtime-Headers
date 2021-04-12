/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLDataDensityClustering : PLDataClustering {

	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}

@property (assign,nonatomic) double maximumDistance;                                 //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfObjects;              //@synthesize minimumNumberOfObjects=_minimumNumberOfObjects - In the implementation block
-(id)init;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(void)setMaximumDistance:(double)arg1 ;
-(unsigned long long)minimumNumberOfObjects;
-(double)maximumDistance;
@end

