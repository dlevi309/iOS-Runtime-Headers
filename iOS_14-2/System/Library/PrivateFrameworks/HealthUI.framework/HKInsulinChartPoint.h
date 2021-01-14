/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKInsulinChartPoint : NSObject <HKChartPoint> {

	NSDate* _startDate;
	NSNumber* _basalSum;
	NSNumber* _totalSum;
	NSDate* _midDate;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * midDate;                                           //@synthesize midDate=_midDate - In the implementation block
@property (nonatomic,retain) NSNumber * basalSum;                                        //@synthesize basalSum=_basalSum - In the implementation block
@property (nonatomic,retain) NSNumber * totalSum;                                        //@synthesize totalSum=_totalSum - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)yValue;
-(NSDate *)startDate;
-(NSDate *)midDate;
-(id)allYValues;
-(NSNumber *)totalSum;
-(NSNumber *)basalSum;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setMidDate:(NSDate *)arg1 ;
-(void)setBasalSum:(NSNumber *)arg1 ;
-(void)setTotalSum:(NSNumber *)arg1 ;
@end

