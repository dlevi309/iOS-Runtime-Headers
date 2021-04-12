/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXStatsCalculator : NSObject {

	double _sum;
	double _squareSum;
	long long _count;
	double _min;
	double _max;

}

@property (nonatomic,readonly) long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double mean; 
@property (nonatomic,readonly) double standardDeviation; 
@property (nonatomic,readonly) double min;                            //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                            //@synthesize max=_max - In the implementation block
-(void)addValue:(double)arg1 ;
-(double)mean;
-(long long)count;
-(double)min;
-(double)max;
-(double)standardDeviation;
@end

