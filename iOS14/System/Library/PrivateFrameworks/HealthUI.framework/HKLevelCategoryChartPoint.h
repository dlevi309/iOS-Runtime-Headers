/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKLevelCategoryChartPoint : NSObject <HKChartPoint> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _yValue;
	long long _pointStyle;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                                          //@synthesize yValue=_yValue - In the implementation block
@property (assign,nonatomic) long long pointStyle;                                       //@synthesize pointStyle=_pointStyle - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(NSDate *)endDate;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSNumber *)yValue;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)description;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(long long)pointStyle;
-(void)setYValue:(NSNumber *)arg1 ;
-(void)setPointStyle:(long long)arg1 ;
@end

