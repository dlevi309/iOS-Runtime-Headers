/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSDate, NSNumber, NSString;

@interface HKQuantityDistributionChartPoint : NSObject <HKChartPoint> {

	double _minimumBucketValue;
	double _bucketIncrement;
	NSArray* _bucketCounts;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	NSDate* _bucketDate;
	NSNumber* _minimumY;
	NSNumber* _maximumY;

}

@property (nonatomic,readonly) NSDate * bucketDate;                                      //@synthesize bucketDate=_bucketDate - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumY;                                      //@synthesize minimumY=_minimumY - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumY;                                      //@synthesize maximumY=_maximumY - In the implementation block
@property (nonatomic,readonly) double minimumBucketValue;                                //@synthesize minimumBucketValue=_minimumBucketValue - In the implementation block
@property (nonatomic,readonly) double bucketIncrement;                                   //@synthesize bucketIncrement=_bucketIncrement - In the implementation block
@property (nonatomic,readonly) NSArray * bucketCounts;                                   //@synthesize bucketCounts=_bucketCounts - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(id)yValue;
-(NSString *)description;
-(id)allYValues;
-(NSNumber *)minimumY;
-(NSNumber *)maximumY;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(double)minimumBucketValue;
-(id)initWithHistogramData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3 displayType:(id)arg4 ;
-(id)_quickDate:(id)arg1 ;
-(id)initWithHistogramData:(id)arg1 unit:(id)arg2 displayType:(id)arg3 ;
-(double)bucketIncrement;
-(NSArray *)bucketCounts;
-(NSDate *)bucketDate;
@end

