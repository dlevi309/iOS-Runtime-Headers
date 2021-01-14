/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _contextIdentifiers;
	HKUnit* _unit;

}

@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double minimumValue;                       //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) double maximumValue;                       //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) double averageValue;                       //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double minimumBucketValue;                 //@synthesize minimumBucketValue=_minimumBucketValue - In the implementation block
@property (nonatomic,readonly) double bucketIncrement;                    //@synthesize bucketIncrement=_bucketIncrement - In the implementation block
@property (nonatomic,readonly) NSArray * bucketCounts;                    //@synthesize bucketCounts=_bucketCounts - In the implementation block
@property (nonatomic,readonly) NSArray * contextIdentifiers;              //@synthesize contextIdentifiers=_contextIdentifiers - In the implementation block
@property (nonatomic,readonly) HKUnit * unit;                             //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)maximumValue;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(HKUnit *)unit;
-(double)minimumValue;
-(double)duration;
-(double)minimumBucketValue;
-(double)averageValue;
-(NSArray *)contextIdentifiers;
-(id)initWithDistributionData:(id)arg1 unit:(id)arg2 displayType:(id)arg3 ;
-(double)bucketIncrement;
-(NSArray *)bucketCounts;
-(id)initWithDistributionData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3 displayType:(id)arg4 ;
@end

