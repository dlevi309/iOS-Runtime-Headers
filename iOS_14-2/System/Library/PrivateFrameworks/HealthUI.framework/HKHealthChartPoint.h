/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKHealthChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	NSNumber* _sum;
	NSNumber* _min;
	NSNumber* _max;
	NSNumber* _avg;
	NSNumber* _mostRecent;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(id)yValue;
-(id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4 ;
-(NSString *)description;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithDataSourceValue:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4 ;
@end

