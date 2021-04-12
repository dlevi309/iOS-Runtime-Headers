/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4 ;
-(id)initWithDataSourceValue:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4 ;
@end

