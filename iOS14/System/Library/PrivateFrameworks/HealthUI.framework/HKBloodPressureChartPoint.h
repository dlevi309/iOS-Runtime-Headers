/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class HKHealthChartPoint, NSDate, NSString;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	HKHealthChartPoint* _systolicChartPoint;
	HKHealthChartPoint* _diastolicChartPoint;
	NSDate* _date;

}

@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * systolicChartPoint;                    //@synthesize systolicChartPoint=_systolicChartPoint - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * diastolicChartPoint;                   //@synthesize diastolicChartPoint=_diastolicChartPoint - In the implementation block
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(id)yValue;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDiastolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setSystolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(NSString *)description;
-(id)allYValues;
-(NSDate *)date;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setChartPoint:(id)arg1 forType:(id)arg2 ;
-(HKHealthChartPoint *)systolicChartPoint;
-(HKHealthChartPoint *)diastolicChartPoint;
@end

