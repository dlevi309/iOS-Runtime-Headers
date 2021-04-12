/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaximumDistance:(double)arg1 ;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)maximumDistance;
-(unsigned long long)minimumNumberOfObjects;
@end

