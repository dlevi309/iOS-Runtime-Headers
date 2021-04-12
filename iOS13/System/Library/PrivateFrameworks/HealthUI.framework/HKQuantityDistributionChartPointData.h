/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSArray, HKUnit, NSString;

@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData> {

	NSDate* _startDate;
	NSDate* _endDate;
	double _minimumValue;
	double _maximumValue;
	double _averageValue;
	double _duration;
	double _minimumBucketValue;
	double _bucketIncrement;
	NSArray* _bucketCounts;
	HKUnit* _unit;

}

@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) double maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) double averageValue;                    //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double minimumBucketValue;              //@synthesize minimumBucketValue=_minimumBucketValue - In the implementation block
@property (nonatomic,readonly) double bucketIncrement;                 //@synthesize bucketIncrement=_bucketIncrement - In the implementation block
@property (nonatomic,readonly) NSArray * bucketCounts;                 //@synthesize bucketCounts=_bucketCounts - In the implementation block
@property (nonatomic,readonly) HKUnit * unit;                          //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnit *)unit;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(double)minimumValue;
-(double)maximumValue;
-(double)minimumBucketValue;
-(double)averageValue;
-(NSArray *)bucketCounts;
-(double)bucketIncrement;
-(id)initWithDistributionData:(id)arg1 unit:(id)arg2 ;
@end

