/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSDate *)startDate;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(NSDate *)midDate;
-(NSNumber *)totalSum;
-(NSNumber *)basalSum;
-(void)setBasalSum:(NSNumber *)arg1 ;
-(void)setTotalSum:(NSNumber *)arg1 ;
-(void)setMidDate:(NSDate *)arg1 ;
@end

